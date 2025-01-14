#!/usr/bin/env python3

import argparse
import sys
#import config
import socket
import fcntl, os
import errno
import time
#import re
#import json
#import requests

import threading
import asyncio
import queue
import logging
#import collections
import pprint
import random
import json
from datetime import datetime
import math

import numpy as np

import zmq

import utility

import irctwitch as irc

from chatroom import relay as chatRelay
from chatroom import ChatRoom

from flexx import flx, ui

logging.basicConfig(level="INFO")


global pp
pp = pprint.PrettyPrinter(depth=4)

global q
q = queue.Queue()
global qResponse
qResponse = queue.Queue()

global kill
kill = False

global chaosConfigFile
chaosConfigFile="/home/pi/chaosConfig.json"

global chaosConfig
with open(chaosConfigFile) as json_data_file:
    chaosConfig = json.load(json_data_file)

def saveConfig():
	with open(chaosConfigFile, 'w') as outfile:
		json.dump(chaosConfig, outfile)

class ChaosModel():
	def __init__(self, *args, **kwargs):
		self.parser = argparse.ArgumentParser()
		#super(ImageScroller, self).__init__(*args, **kwargs)
		self.parser.add_argument("-s", "--size", help="Scale of twitch emotes, 1,2, or 3", default="1")
		self.parser.add_argument("-g", "--reward", help="Whether to display messages or emotes on gift (1 or 0)", default=False)
		
		self.context = zmq.Context()

		#  Socket to talk to server
		print("Connecting to chaos: c++ based server…")
		self.socket = self.context.socket(zmq.REQ)
		self.socket.connect("tcp://localhost:5555")
		
		now = datetime.now()
		currentTime = now.strftime("%Y-%m-%d_%H:%M:%S")
		self.votingLog = open("/home/pi/chaosLogs/votes-" + currentTime + ".log","a", buffering=1)

	def process(self):
		self.args = self.parser.parse_args()
		
		try:
			# Start loop
			print("Press CTRL-C to stop sample")
			self.loop()
		except KeyboardInterrupt:
			print("Exiting\n")
			sys.exit(0)

		return True
		
	def applyNewMod(self, mod):
		print("Winning mod: " + mod)
		#self.socket.send(mod)
		self.socket.send_string(mod)
		    #  Get the reply.
		message = self.socket.recv()
		#print(f"Received reply [ {message} ]")
		#self.allMods = message.decode("utf-8").split(',')
		y = json.loads(message.decode("utf-8"))
		#pp.pprint(y)
		oldModLength = len(self.allMods)	# HACK
		self.allMods = y["mods"]
		if not oldModLength == len(self.allMods):
			self.resetSoftMax()
		
		self.timePerVote = y["voteTime"]
	
	def resetSoftMax(self):
		self.winTracker = {}
		for mod in self.allMods:
			self.winTracker[mod] = {}
			self.winTracker[mod]["count"] = 0
			self.winTracker[mod]["contribution"] = math.exp(0)
		#pp.pprint(self.winTracker)
        
	def loop(self):
		beginTime = time.time() #0.0
		now = beginTime
		self.rate = 20.0
		dTime = 1.0/self.rate
		priorTime = beginTime - dTime
		
		self.timePerVote = 1.0	# This will be set by the C progra
				
		self.totalVoteOptions = 3
		self.votes = [0.0] * self.totalVoteOptions
		self.votedUsers = []
		
		self.activeMods = ["", "", ""]
		self.activeModTimes = [0.0, 0.0, 0.0]
		
		# allMods will be set by thte C program
		self.allMods = ["1", "2", "3", "4", "5", "6"]
		self.resetSoftMax()
		
		#self.allMods = [ "No Run/Dodge", "Disable Crouch/Prone", "Drunk Control"]
		self.currentMods = random.sample(self.allMods, k=self.totalVoteOptions)

		
		#relay.newMods(self.currentMods, self.activeMods)
		try:
			relay.set_mods( self.currentMods )
			relay.set_activeMods( self.activeMods )
		except Exception as e:
			logging.info(e)
						
		while True:
			time.sleep(1.0/self.rate)
			priorTime = now
			now = time.time()
			self.voteTime =  now - beginTime
			dTime = now - priorTime
			
			for i in range(len(self.activeModTimes)):
				self.activeModTimes[i] -= dTime/((self.timePerVote+0.25)*self.totalVoteOptions)
			
			if self.voteTime >= self.timePerVote:
				beginTime = now
				
				# Send winning choice:
				newMod = self.currentMods[ self.votes.index(max(self.votes)) ]
				self.applyNewMod( newMod )
				
				# update softmax
				if newMod in self.winTracker:
					self.winTracker[newMod]["count"] += 1
					self.winTracker[newMod]["contribution"] = math.exp(self.winTracker[newMod]["count"] * -1.0)
					softMaxDivisor = 0
					for key in self.winTracker:
						softMaxDivisor += self.winTracker[key]["contribution"]
					for key in self.winTracker:
						self.winTracker[key]["probablity"] = self.winTracker[key]["contribution"]/softMaxDivisor
					#pp.pprint(self.winTracker)
					#print("Update Probs:")
					#for key in self.winTracker:
					#	print( key + ": " + str(100*self.winTracker[key]["probablity"]))
				
				
				logString = ""
				for j in range(self.totalVoteOptions):
					logString += self.currentMods[j] + "," + str(int(self.votes[j])) + ","
				logString += newMod + "\n"
				self.votingLog.write(logString)
				
				# Update view:
				finishedModIndex = self.activeModTimes.index(min(self.activeModTimes))
				self.activeMods[finishedModIndex] = newMod
				self.activeModTimes[finishedModIndex] = 1.0
				
				# Select new mods
				inactiveMods = set(np.setdiff1d(self.allMods, self.activeMods))
				
				self.currentMods = []
				for k in range(self.totalVoteOptions):
					# build a list of contributor for this sleection:
					votableTracker = {}
					for mod in inactiveMods:
						votableTracker[mod] = self.winTracker[mod]
					# Calculate the softmax probablities:
					softMaxDivisor = 0
					for mod in votableTracker:
						softMaxDivisor += votableTracker[mod]["contribution"]
					for mod in votableTracker:
						votableTracker[mod]["probablity"] = votableTracker[mod]["contribution"]/softMaxDivisor
					#print("Votables:")
					#pp.pprint(votableTracker)
					# make a decision:
					theChoice = np.random.uniform(0,1)
					selectionTracker = 0
					#print("Choice: " + str(theChoice))
					for mod in votableTracker:
						selectionTracker += votableTracker[mod]["probablity"]
						#print("Checking " + str(selectionTracker) + ">" + str(theChoice))
						if selectionTracker > theChoice:
							#print("Using mod: " + mod)
							self.currentMods.append(mod)
							inactiveMods.remove(mod)	#remove this to prevent a repeat
							break
					
				#self.currentMods = random.sample(inactiveMods, k=self.totalVoteOptions)
				#relay.newMods(self.currentMods, self.activeMods)
				try:
					relay.set_mods( self.currentMods )
					relay.set_activeMods( self.activeMods )
				except Exception as e:
					logging.info(e)
				
				# Reset votes
				self.votes = [0.0] * self.totalVoteOptions
				#relay.newVotes(self.votes)
				try:
					relay.set_votes( self.votes )
				except Exception as e:
					logging.info(e)
					
				self.votedUsers = []
			
			
			#relay.newTime( self.voteTime/self.timePerVote, self.activeModTimes )
			timeToSend = self.voteTime/self.timePerVote
			
			try:
				relay.set_voteTime( timeToSend )
				relay.set_modTimes( self.activeModTimes )
			except Exception as e:
				logging.info(e)
				
			if q.qsize() > 0:
				while q.qsize() > 0:
					# q.empty(), q.get(), q.qsize()
					notice = q.get();
					
					message = notice["message"]
					if message.isdigit():
						messageAsInt = int(message) - 1
						if messageAsInt >= 0 and messageAsInt < self.totalVoteOptions and not notice["user"] in self.votedUsers:
							self.votedUsers.append(notice["user"])
							self.votes[messageAsInt] += 1
								
					firstWord = message.split(" ",1)[0]
					if firstWord == "!mods":
						response = str(str(self.allMods) + " @" + notice["user"]).replace('\'', '').replace('[','').replace(']','')
						splitMessage = [response[i:i+484] for i in range(0, len(response), 484)]
						pp.pprint(splitMessage)
						print("number of elements in splitMessage: " + str(len(splitMessage)))
						for message in splitMessage:
							#response =	"!mods: " + message
							
							qResponse.put( "!mods: " + message );
						
				#relay.newVotes(self.votes)
				try:
					relay.set_votes( self.votes )
								
				except Exception as e:
					logging.info(e)

    
class Relay(flx.Component):

	voteTime = flx.FloatProp(0.5, settable=True)
	modTimes = flx.ListProp([0.0,0.0,0.0], settable=True)
	votes = flx.ListProp([0,0,0], settable=True)
	mods = flx.ListProp(["","",""], settable=True)
	activeMods = flx.ListProp(["","",""], settable=True)
	
	bot_name = flx.StringProp(chaosConfig["bot_name"], settable=True)
	bot_oauth = flx.StringProp(chaosConfig["bot_oauth"], settable=True)
	channel_name = flx.StringProp(chaosConfig["channel_name"], settable=True)
	
	@flx.reaction('voteTime')
	def on_voteTime(self, *events):
		for ev in events:
			self.updateVoteTime(ev.new_value)
			
	@flx.reaction('modTimes')
	def on_modTimes(self, *events):
		for ev in events:
			self.updateModTimes(ev.new_value)
			
	@flx.reaction('votes')
	def on_votes(self, *events):
		for ev in events:
			self.updateVotes(ev.new_value)
			
	@flx.reaction('mods')
	def on_mods(self, *events):
		for ev in events:
			self.updateMods(ev.new_value)
			
	@flx.reaction('activeMods')
	def on_activeMods(self, *events):
		for ev in events:
			self.updateActiveMods(ev.new_value)
			
	@flx.reaction('bot_name')
	def on_bot_name(self, *events):
		for ev in events:
			chaosConfig["bot_name"] = ev.new_value
			
	@flx.reaction('bot_oauth')
	def on_bot_oauth(self, *events):
		for ev in events:
			chaosConfig["bot_oauth"] = ev.new_value
			
	@flx.reaction('channel_name')
	def on_channel_name(self, *events):
		for ev in events:
			chaosConfig["channel_name"] = ev.new_value
			
	""" Global object to relay paint events to all participants.
	"""
	#@flx.emitter
	#def newMods(self, mods, activeMods):
	#	return dict(mods=mods,activeMods=activeMods)
		
	#@flx.emitter
	#def newVotes(self, votes):
	#	return dict(votes=votes)
		
	#@flx.emitter
	#def newTime(self, voteTime=0, modTimes=[]):
	#	return dict(voteTime=voteTime,modTimes=modTimes)
		
	@flx.emitter
	def updateVoteTime(self, value):
		return dict(value=value)
		
	@flx.emitter
	def updateModTimes(self, value):
		return dict(value=value)
		
	@flx.emitter
	def updateVotes(self, value):
		return dict(value=value)
		
	@flx.emitter
	def updateMods(self, value):
		return dict(value=value)
		
	@flx.emitter
	def updateActiveMods(self, value):
		return dict(value=value)
        
# Create global relay object, shared by all connections
relay = Relay()
#chatRelay = ChatRelay()

class ActiveMods(flx.PyWidget):
	def init(self):
		self.chaosActiveView = ChaosActiveView(self)
		
	#@relay.reaction('newTime')
	#def _newTime(self, *events):
	#	for ev in events:
	#		self.chaosActiveView.updateTime(ev.modTimes)
	@relay.reaction('updateModTimes')
	def _updateModTimes(self, *events):
		for ev in events:
			self.chaosActiveView.updateTime(ev.value)
			
	#@relay.reaction('newMods')
	#def _newMods(self, *events):
	#	for ev in events:
	#		self.chaosActiveView.updateMods(ev.activeMods)
			
	@relay.reaction('updateActiveMods')
	def _updateActiveMods(self, *events):
		for ev in events:
			self.chaosActiveView.updateMods(ev.value)

class ChaosActiveView(flx.PyWidget):
	def init(self, model):
		super().init()
		self.model = model
		
		self.label = []
		self.progress = []
		
		styleModText = "color:white;text-shadow: -1px 0 black, 0 1px black, 1px 0 black, 0 -1px black;text-align:left;font-weight: bold; vertical-align: middle; line-height: 1.5; min-width:250px;"
		styleTitleText = "color:white;text-shadow: -1px 0 black, 0 1px black, 1px 0 black, 0 -1px black;text-align:center;font-weight: bold; vertical-align: bottom; line-height: 1.5; min-width:250px;"
		styleModProgress = " background-color:#808080; foreground-color:#808080; color:#FFFFFF; border-color:#000000; border-radius:5px; width:1050px;"
		
		with flx.VBox(flex=0):
			with flx.HFix(flex=1):
				self.voteLabel = flx.Label(flex=0,style=styleTitleText, text="Active Mods" )
				self.blankLabel = flx.Label(flex=0,style=styleTitleText, text=" ")
			#with flx.VBox(flex=1):
				
			with flx.HFix(flex=1):
				with flx.VFix(flex=1):
					for i in range(3):
						self.progress.append( flx.ProgressBar(flex=2, value=relay.modTimes[i], text='', style=styleModProgress) )
				with flx.VFix(flex=1):
					for i in range(3):
						self.label.append( flx.Label(flex=1,style=styleModText, text=relay.activeMods[i]) )
	@flx.action
	def updateMods(self, activeMods):
		self.label[0].set_text(activeMods[0])
		self.label[1].set_text(activeMods[1])
		self.label[2].set_text(activeMods[2])
		
	@flx.action
	def updateTime(self, modTimes):
		self.progress[0].set_value(modTimes[0])
		self.progress[1].set_value(modTimes[1])
		self.progress[2].set_value(modTimes[2])

class VoteTimer(flx.PyWidget):
	def init(self):
		self.voteTimerView = ChaosVoteTimerView(self)
		
	#@relay.reaction('newTime')
	#def _newTime(self, *events):
	#	for ev in events:
	#		self.voteTimerView.updateTime(ev.voteTime)
			
	@relay.reaction('updateVoteTime')
	def _updateVoteTime(self, *events):
		for ev in events:
			self.voteTimerView.updateTime(ev.value)
		
class ChaosVoteTimerView(flx.PyWidget):
	def init(self, model):
		super().init()
		self.model = model
		
		styleTime = " background-color:#808080; foreground-color:#808080; color:#000000; border-color:#000000; border-radius:5px"
		self.progressTime = flx.ProgressBar(flex=1, value=relay.voteTime, text='', style=styleTime)
		
	@flx.action
	def updateTime(self, voteTime):
		self.progressTime.set_value(voteTime)
		
class Votes(flx.PyWidget):
	def init(self):
		self.chaosVoteView = ChaosVoteView(self)
		
	#@relay.reaction('newMods')
	#def _newMods(self, *events):
	#	for ev in events:
	#		self.chaosVoteView.updateMods(ev.mods)
		
	@relay.reaction('updateMods')
	def _updateMods(self, *events):
		for ev in events:
			self.chaosVoteView.updateMods(ev.value)
			
	#@relay.reaction('newVotes')
	#def _newVotes(self, *events):
	#	for ev in events:
	#		self.chaosVoteView.updateNumbers(ev.votes)
			
	@relay.reaction('updateVotes')
	def _updateVotes(self, *events):
		for ev in events:
			self.chaosVoteView.updateNumbers(ev.value)
			
class ChaosVoteView(flx.PyWidget):
	def init(self, model):
		super().init()
		self.model = model
		
		self.label = []
		self.progress = []
		
		styleModText = "color:white;text-shadow: -1px 0 black, 0 1px black, 1px 0 black, 0 -1px black;text-align:left;font-weight: bold; vertical-align: middle; line-height: 1.5; min-width:250px;"
		styleTitleText = "color:white;text-shadow: -1px 0 black, 0 1px black, 1px 0 black, 0 -1px black;text-align:center;font-weight: bold; vertical-align: bottom; line-height: 1.5; min-width:250px;"
		styleVoteProgress = " background-color:#808080; foreground-color:#808080; color:#FFFFFF; border-color:#000000; border-radius:5px; text-shadow: -1px 0 black, 0 1px black, 1px 0 black, 0 -1px black; font-weight: bold;"

		totalVotes = sum(relay.votes)
		with flx.VBox(flex=0):
			with flx.HFix(flex=1):
				self.voteLabel = flx.Label(flex=0,style=styleTitleText, text="Total Votes: " + str(0) )
				self.blankLabel = flx.Label(flex=0,style=styleTitleText, text=" ")
			#with flx.VBox(flex=1):
				
			with flx.HFix(flex=1):
				with flx.VFix(flex=1):
					for i in range(3):
						if totalVotes > 0:
							self.progress.append( flx.ProgressBar(flex=2, value=relay.votes[i]/totalVotes, text='{percent}', style=styleVoteProgress) )
						else:
							self.progress.append( flx.ProgressBar(flex=2, value=0.0, text='{percent}', style=styleVoteProgress) )
							
				with flx.VFix(flex=1):
					for i in range(3):
						self.label.append( flx.Label(flex=1,style=styleModText, text=str(i+1) + " " + relay.mods[i]) )
	@flx.action
	def updateMods(self, mods):
		self.label[0].set_text( "1 " + mods[0])
		self.label[1].set_text( "2 " + mods[1])
		self.label[2].set_text( "3 " + mods[2])
	
	@flx.action
	def updateNumbers(self, votes):
		totalVotes = sum(votes) # votes[0] + votes[1] + votes[2]
		
		self.voteLabel.set_text("Total Votes: " + str(int(totalVotes)))
		if totalVotes > 0:
			self.progress[0].set_value(votes[0]/totalVotes)
			self.progress[1].set_value(votes[1]/totalVotes)
			self.progress[2].set_value(votes[2]/totalVotes)
		else:
			self.progress[0].set_value(0.0)
			self.progress[1].set_value(0.0)
			self.progress[2].set_value(0.0)
					
class ChaosViewController(flx.PyWidget):
	def init(self):
		self.chaosView = ChaosView(self)

	#@relay.reaction('newMods')
	#def _newMods(self, *events):
	#	for ev in events:
	#		self.chaosView.updateMods(ev.mods)

	@relay.reaction('updateMods')
	def _updateMods(self, *events):
		for ev in events:
			self.chaosView.updateMods(ev.value)
			
	#@relay.reaction('newVotes')
	#def _newVotes(self, *events):
	#	for ev in events:
	#		self.chaosView.updateNumbers(ev.votes)
			
	@relay.reaction('updateVotes')
	def _updateVotes(self, *events):
		for ev in events:
			self.chaosView.updateNumbers(ev.value)
			
	#@relay.reaction('newTime')
	#def _newTime(self, *events):
	#	for ev in events:
	#		self.chaosView.updateTime(ev.voteTime)
			
	@relay.reaction('updateVoteTime')
	def _updateVoteTime(self, *events):
		for ev in events:
			self.chaosView.updateTime(ev.value)
			
class ChaosView(flx.PyWidget):
	def init(self, model):
		super().init()
		self.model = model
		self.label = []
		self.progress = []
		
				
		styleTime = " background-color:#808080; foreground-color:#808080; color:#000000; border-color:#000000; border-radius:5px"
		styleModText = "color:white;text-shadow: -1px 0 black, 0 1px black, 1px 0 black, 0 -1px black;text-align:right;font-weight: bold; vertical-align: middle; line-height: 1.5; min-width:250px;"
		styleVoteProgress = " background-color:#808080; foreground-color:#808080; color:#000000; border-color:#000000; border-radius:5px"
		
		totalVotes = sum(relay.votes)
		
		valueOfVotes = relay.votes
		if totalVotes > 0:
			for i in range(3):
				valueOfVotes[i] = valueOfVotes[i]/totalVotes
		else:
			for i in range(3):
				valueOfVotes[i] = 0.0
		
		with flx.VSplit():
			self.progressTime = flx.ProgressBar(flex=1, value=0.0, text='', style=styleTime)
			#flx.Widget(style='background:#f00')
			with flx.VSplit():
				with flx.HSplit():
					with flx.VBox(flex=1):
						print("")
					#self.labeln = flx.Label(flex=1,text="option1")
					with flx.HBox(flex=1):
						with flx.VBox(flex=1):
							for i in range(3):
								self.label.append( flx.Label(flex=1,style=styleModText, text=relay.mods[i] ))
						with flx.VBox(flex=1):
							for i in range(3):
								self.progress.append( flx.ProgressBar(flex=2, value=valueOfVotes[i], text='{percent}', style=styleVoteProgress) )

	@flx.action
	def updateMods(self, mods):
		self.label[0].set_text(mods[0] + " (1)")
		self.label[1].set_text(mods[1] + " (2)")
		self.label[2].set_text(mods[2] + " (3)")
	
	@flx.action
	def updateNumbers(self, votes):
		totalVotes = sum(votes) # votes[0] + votes[1] + votes[2]
		
		if totalVotes > 0:
			self.progress[0].set_value(votes[0]/totalVotes)
			self.progress[1].set_value(votes[1]/totalVotes)
			self.progress[2].set_value(votes[2]/totalVotes)
		else:
			self.progress[0].set_value(0.0)
			self.progress[1].set_value(0.0)
			self.progress[2].set_value(0.0)
			
	@flx.action
	def updateTime(self, voteTime):
		self.progressTime.set_value(voteTime)
	
	
class BotSetup(flx.PyWidget):
	def init(self):
		self.ConfigurationView = ConfigurationView(self)
		
class ConfigurationView(flx.PyWidget):
	def init(self, model):
		super().init()
		
		styleLabel = "text-align:right"
		styleField = "background-color:#BBBBBB;text-align:center"
		
		with flx.VSplit(flex=1):
			flx.Label(style="text-align:center", text="Bot Information" )
			flx.Label(style="text-align:center", wrap=True, html='<a href="https://twitchapps.com/tmi/" target="_blank">Click here to get your bot\'s OAuth Token</a>.  You must be logged in as your bot.' )
			with flx.HBox():
				with flx.VBox(flex=1):
					flx.Widget(flex=1)
				with flx.VBox():
					flx.Label(style=styleLabel, text="Twitch Bot Username:" )
					flx.Label(style=styleLabel, text="Twitch Bot Oauth:" )
					flx.Label(style=styleLabel, text="Your Channel Name:" )
				with flx.VBox(flex=1):
					self.bot_name = flx.LineEdit(style=styleField, placeholder_text=relay.bot_name)
					self.bot_oauth = flx.LineEdit(style=styleField, placeholder_text=relay.bot_oauth)
					self.channel_name = flx.LineEdit(style=styleField, placeholder_text=relay.channel_name[1:])
				with flx.VBox(flex=1):
					flx.Widget(flex=1)
			with flx.HBox():
				flx.Widget(flex=1)
				self.submitButton = flx.Button(flex=0,text="Submit")
				flx.Widget(flex=1)
			with flx.HBox():
				flx.Widget(flex=1)
				self.successLabel = flx.Label(style="text-align:center", text="" )
				flx.Widget(flex=1)
			flx.Label(flex=1,style="text-align:center", wrap=True, html="You may also use your own Twitch account if you do not have a secondary bot account.")
			flx.Label(flex=1,style="text-align:center", wrap=True, html="Things like WizeBot/StreamElements will not work unless you own those accounts." )
			#flx.Widget(flex=1)
			
	@flx.reaction('submitButton.pointer_click')
	def _button_clicked(self, *events):
		ev = events[-1]
		newData = False
		if self.bot_oauth.text != "":
			newData = True
			relay.set_bot_oauth(self.bot_oauth.text)
		if self.bot_name.text != "":
			newData = True
			relay.set_bot_name(self.bot_name.text)
		if self.channel_name.text != "":
			newData = True
			relay.set_channel_name('#' + self.channel_name.text)
		if newData:
			self.successLabel.set_text('Saved!')
			#saveConfig()
		else:
			self.successLabel.set_text('No Change')
			
        
def startFlexx():
	#interface = flx.App(flexxWidget)
	#interface.serve()
	#flx.App(Circles).serve()
	#flx.App(ChaosViewController).serve()
	flx.App(ActiveMods).serve()
	#flx.App(ChatRoom).serve()
	flx.App(VoteTimer).serve()
	flx.App(Votes).serve()
	flx.App(BotSetup).serve()
	
	flx.create_server(host='0.0.0.0',port=chaosConfig["ui-port"],loop=asyncio.new_event_loop())
	flx.start()

class Chatbot():

	def start(self):
		self.chatThread = threading.Thread(target=self.chatLoop)
		self.chatThread.start()
		
	def stop(self):
		self.chatResponseThread.kill = True
		self.chatResponseThread.join()
		self.chatThread.kill = True
		self.chatThread.join()
	
	def chatLoop(self):
		
		thread = threading.currentThread()

		connected = False
		heartbeatPingPong = 0.0
		heartbeatTimeout = 5
		while not getattr(thread, "kill", False):
			self.bot_oauth = relay.bot_oauth
			self.bot_name = relay.bot_name
			self.channel_name = relay.channel_name.lower()
			
			while not connected and not getattr(thread, "kill", False):
				try:
					self.s = socket.socket()
					self.s.settimeout(heartbeatTimeout)
#					self.s.connect((config.HOST, config.PORT))
					self.s.connect((chaosConfig["host"], chaosConfig["port"]))

					#logging.info("PASS {}\r\n".format(config.PASS).encode("utf-8"))
					self.s.send("PASS {}\r\n".format( self.bot_oauth ).encode("utf-8"))
					#logging.info("NICK {}\r\n".format(config.NICK).encode("utf-8"))
					self.s.send("NICK {}\r\n".format( self.bot_name ).encode("utf-8"))
					#logging.info("JOIN {}\r\n".format(config.CHAN).encode("utf-8"))
					self.s.send("JOIN {}\r\n".format( self.channel_name ).encode("utf-8"))

					#logging.info("CAP REQ :twitch.tv/tags\r\n".encode("utf-8"))
					self.s.send("CAP REQ :twitch.tv/tags\r\n".encode("utf-8"))
					#logging.info("CAP REQ :twitch.tv/commands\r\n".encode("utf-8"))
					self.s.send("CAP REQ :twitch.tv/commands\r\n".encode("utf-8"))
					#logging.info("CAP REQ :twitch.tv/membership\r\n".encode("utf-8"))
					self.s.send("CAP REQ :twitch.tv/membership\r\n".encode("utf-8"))

					connected = True #Socket succefully connected
				except Exception as e:
					logging.info(str(e))
					connected = False #Socket failed to connect

			# yeah starting threads here seems fine :(
			self.chatResponseThread = threading.Thread(target=self.chatResponseLoop)
			self.chatResponseThread.start()
		
			#lastTime = 0;
			while connected and not getattr(thread, "kill", False):
				#time.sleep(1 / config.RATE)
				#if time.time() - lastTime > 15:
				#	lastTime = time.time()
				#	logging.info("Inserting message into reward queue")
				#	rewardQueue.put("Time: " + str(time.time()))
				if relay.bot_oauth != self.bot_oauth or relay.bot_name != self.bot_name or relay.channel_name.lower() != self.channel_name:
					logging.info("New chat information, re-logging in to IRC")
					saveConfig()
					connected = False
					continue
				
				heartbeatPingPong += heartbeatTimeout
				if heartbeatTimeout > 6*50:	# 6 minutes
					connected = False
					continue
				
				try:
					response = self.s.recv(1024)
				except Exception as e:
					err = e.args[0]
					if err == 'timed out':
						#logging.info('recv timed out, retry later')
						#time.sleep(heartbeatTimeout)
						continue
					else:
						logging.info(str(e))
						connected = False
						continue
						
				response = response.decode("utf-8")
				#logging.info(response)
				if response == "PING :tmi.twitch.tv\r\n":
					self.s.send("PONG :tmi.twitch.tv\r\n".encode("utf-8"))
					logging.info("Pong")
					heartbeatPingPong = 0.0
				else:
					if len(response) <= 0:
						#logging.info("len(response) <= 0")
						continue
						
					heartbeatPingPong = 0.0
					
					try:
						responses = response.split("\r\n")
						notice = irc.responseToDictionary(response)

					except Exception as e:
						logging.info(str(e))
						continue

					#giftMessage = irc.getRewardMessage(notice)

					if "message" in notice.keys():
						notice["message"] = notice["message"].split("\r\n",1)[0]
						logging.info("Chat " + notice["user"] + ":" + notice["message"])
						#q.put( (str(emoteId),img) )
						#chatRelay.create_message(notice["user"], notice["message"])
				
						chatRelay.create_message(notice["user"], notice["message"])
				
						q.put( notice )
				
				
				
	def chatResponseLoop(self):
		thread = threading.currentThread()
		timeSinceLastResponse = 60

		while not getattr(thread, "kill", False):
			time.sleep(1 / chaosConfig["chat-rate"])
			timeSinceLastResponse += (1.0 / chaosConfig["chat-rate"])
			if timeSinceLastResponse < 60:
				if qResponse.qsize() > 0:
					while qResponse.qsize() > 0:
						qResponse.get()
					utility.chat(self.s, "!mods Cooldown at " + str(int(60.0 - timeSinceLastResponse)) + " seconds", self.channel_name);
				continue
				
			else:
				while qResponse.qsize() > 0:
					# q.empty(), q.get(), q.qsize()
					notice = qResponse.get()
				
					print("Sending response message: " + notice)
					utility.chat(self.s, notice);
					time.sleep(1 / config.RATE)
				
					timeSinceLastResponse = 0
					

if __name__ == "__main__":
	# for chat
	chatbot = Chatbot()
	chatbot.start()
	
	#startFlexx()
	flexxThread = threading.Thread(target=startFlexx)
	flexxThread.start()

	# Voting model:
	chaosModel = ChaosModel()
	if (not chaosModel.process()):
			chaosModel.print_help()
			
	logging.info("Stopping threads...")
	
	flx.stop()
	flexxThread.join()
	
	chatThread.kill = True
	chatThread.join()

