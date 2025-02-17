
#include "device.h"

#include <cstring>	// for memcpy

void Joystick::open(const char* filename) {
	init(filename, 8);
}

void Joystick::interpret( char* buffer, DeviceEvent* event) {
	memcpy(event, buffer, 8);
}
