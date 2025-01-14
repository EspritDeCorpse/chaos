#ifndef PS5_GENERATED_H
#define PS5_GENERATED_H

#include <cstdint>

//--------------------------------------------------------------------------------
// Decoded Application Collection
//--------------------------------------------------------------------------------

/*
05 01        (GLOBAL) USAGE_PAGE         0x0001 Generic Desktop Page 
09 05        (LOCAL)  USAGE              0x00010005 Game Pad (Application Collection)  
A1 01        (MAIN)   COLLECTION         0x01 Application (Usage=0x00010005: Page=Generic Desktop Page, Usage=Game Pad, Type=Application Collection)
85 01          (GLOBAL) REPORT_ID          0x01 (1)  
09 30          (LOCAL)  USAGE              0x00010030 X (Dynamic Value)  
09 31          (LOCAL)  USAGE              0x00010031 Y (Dynamic Value)  
09 32          (LOCAL)  USAGE              0x00010032 Z (Dynamic Value)  
09 35          (LOCAL)  USAGE              0x00010035 Rz (Dynamic Value)  
09 33          (LOCAL)  USAGE              0x00010033 Rx (Dynamic Value)  
09 34          (LOCAL)  USAGE              0x00010034 Ry (Dynamic Value)  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0)  <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255)  
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field  
95 06          (GLOBAL) REPORT_COUNT       0x06 (6) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (6 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 00FF        (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined 
09 20          (LOCAL)  USAGE              0xFF000020 <-- Warning: Undocumented usage (document it by inserting 0020 into file FF00.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
05 01          (GLOBAL) USAGE_PAGE         0x0001 Generic Desktop Page 
09 39          (LOCAL)  USAGE              0x00010039 Hat switch (Dynamic Value)  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
25 07          (GLOBAL) LOGICAL_MAXIMUM    0x07 (7)  
35 00          (GLOBAL) PHYSICAL_MINIMUM   0x00 (0)  <-- Info: Consider replacing 35 00 with 34
46 3B01        (GLOBAL) PHYSICAL_MAXIMUM   0x013B (315)  
65 14          (GLOBAL) UNIT               0x14 Rotation in degrees [1° units] (4=System=English Rotation, 1=Rotation=Degrees)  
75 04          (GLOBAL) REPORT_SIZE        0x04 (4) Number of bits per field  
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields <-- Redundant: REPORT_COUNT is already 1 
81 42          (MAIN)   INPUT              0x00000042 (1 field x 4 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 1=Null 0=NonVolatile 0=Bitmap 
65 00          (GLOBAL) UNIT               0x00 No unit (0=None)  <-- Info: Consider replacing 65 00 with 64
05 09          (GLOBAL) USAGE_PAGE         0x0009 Button Page 
19 01          (LOCAL)  USAGE_MINIMUM      0x00090001 Button 1 Primary/trigger (Selector, On/Off Control, Momentary Control, or One Shot Control)  
29 0F          (LOCAL)  USAGE_MAXIMUM      0x0009000F Button 15 (Selector, On/Off Control, Momentary Control, or One Shot Control)  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
25 01          (GLOBAL) LOGICAL_MAXIMUM    0x01 (1)  
75 01          (GLOBAL) REPORT_SIZE        0x01 (1) Number of bits per field  
95 0F          (GLOBAL) REPORT_COUNT       0x0F (15) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (15 fields x 1 bit) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 00FF        (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined 
09 21          (LOCAL)  USAGE              0xFF000021 <-- Warning: Undocumented usage (document it by inserting 0021 into file FF00.conf)
95 0D          (GLOBAL) REPORT_COUNT       0x0D (13) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (13 fields x 1 bit) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 00FF        (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined <-- Redundant: USAGE_PAGE is already 0xFF00
09 22          (LOCAL)  USAGE              0xFF000022 <-- Warning: Undocumented usage (document it by inserting 0022 into file FF00.conf)
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255)  
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field  
95 34          (GLOBAL) REPORT_COUNT       0x34 (52) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (52 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 02          (GLOBAL) REPORT_ID          0x02 (2)  
09 23          (LOCAL)  USAGE              0xFF000023 <-- Warning: Undocumented usage (document it by inserting 0023 into file FF00.conf)
95 2F          (GLOBAL) REPORT_COUNT       0x2F (47) Number of fields  
91 02          (MAIN)   OUTPUT             0x00000002 (47 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 05          (GLOBAL) REPORT_ID          0x05 (5)  
09 33          (LOCAL)  USAGE              0xFF000033 <-- Warning: Undocumented usage (document it by inserting 0033 into file FF00.conf)
95 28          (GLOBAL) REPORT_COUNT       0x28 (40) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (40 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 08          (GLOBAL) REPORT_ID          0x08 (8)  
09 34          (LOCAL)  USAGE              0xFF000034 <-- Warning: Undocumented usage (document it by inserting 0034 into file FF00.conf)
95 2F          (GLOBAL) REPORT_COUNT       0x2F (47) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (47 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 09          (GLOBAL) REPORT_ID          0x09 (9)  
09 24          (LOCAL)  USAGE              0xFF000024 <-- Warning: Undocumented usage (document it by inserting 0024 into file FF00.conf)
95 13          (GLOBAL) REPORT_COUNT       0x13 (19) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (19 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 0A          (GLOBAL) REPORT_ID          0x0A (10)  
09 25          (LOCAL)  USAGE              0xFF000025 <-- Warning: Undocumented usage (document it by inserting 0025 into file FF00.conf)
95 1A          (GLOBAL) REPORT_COUNT       0x1A (26) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (26 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 20          (GLOBAL) REPORT_ID          0x20 (32)  
09 26          (LOCAL)  USAGE              0xFF000026 <-- Warning: Undocumented usage (document it by inserting 0026 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 21          (GLOBAL) REPORT_ID          0x21 (33)  
09 27          (LOCAL)  USAGE              0xFF000027 <-- Warning: Undocumented usage (document it by inserting 0027 into file FF00.conf)
95 04          (GLOBAL) REPORT_COUNT       0x04 (4) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (4 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 22          (GLOBAL) REPORT_ID          0x22 (34)  
09 40          (LOCAL)  USAGE              0xFF000040 <-- Warning: Undocumented usage (document it by inserting 0040 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 80          (GLOBAL) REPORT_ID          0x80 (128)  
09 28          (LOCAL)  USAGE              0xFF000028 <-- Warning: Undocumented usage (document it by inserting 0028 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 81          (GLOBAL) REPORT_ID          0x81 (129)  
09 29          (LOCAL)  USAGE              0xFF000029 <-- Warning: Undocumented usage (document it by inserting 0029 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 82          (GLOBAL) REPORT_ID          0x82 (130)  
09 2A          (LOCAL)  USAGE              0xFF00002A <-- Warning: Undocumented usage (document it by inserting 002A into file FF00.conf)
95 09          (GLOBAL) REPORT_COUNT       0x09 (9) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (9 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 83          (GLOBAL) REPORT_ID          0x83 (131)  
09 2B          (LOCAL)  USAGE              0xFF00002B <-- Warning: Undocumented usage (document it by inserting 002B into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 84          (GLOBAL) REPORT_ID          0x84 (132)  
09 2C          (LOCAL)  USAGE              0xFF00002C <-- Warning: Undocumented usage (document it by inserting 002C into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 85          (GLOBAL) REPORT_ID          0x85 (133)  
09 2D          (LOCAL)  USAGE              0xFF00002D <-- Warning: Undocumented usage (document it by inserting 002D into file FF00.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A0          (GLOBAL) REPORT_ID          0xA0 (160)  
09 2E          (LOCAL)  USAGE              0xFF00002E <-- Warning: Undocumented usage (document it by inserting 002E into file FF00.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 E0          (GLOBAL) REPORT_ID          0xE0 (224)  
09 2F          (LOCAL)  USAGE              0xFF00002F <-- Warning: Undocumented usage (document it by inserting 002F into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F0          (GLOBAL) REPORT_ID          0xF0 (240)  
09 30          (LOCAL)  USAGE              0xFF000030 <-- Warning: Undocumented usage (document it by inserting 0030 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F1          (GLOBAL) REPORT_ID          0xF1 (241)  
09 31          (LOCAL)  USAGE              0xFF000031 <-- Warning: Undocumented usage (document it by inserting 0031 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F2          (GLOBAL) REPORT_ID          0xF2 (242)  
09 32          (LOCAL)  USAGE              0xFF000032 <-- Warning: Undocumented usage (document it by inserting 0032 into file FF00.conf)
95 0F          (GLOBAL) REPORT_COUNT       0x0F (15) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (15 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F4          (GLOBAL) REPORT_ID          0xF4 (244)  
09 35          (LOCAL)  USAGE              0xFF000035 <-- Warning: Undocumented usage (document it by inserting 0035 into file FF00.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F5          (GLOBAL) REPORT_ID          0xF5 (245)  
09 36          (LOCAL)  USAGE              0xFF000036 <-- Warning: Undocumented usage (document it by inserting 0036 into file FF00.conf)
95 03          (GLOBAL) REPORT_COUNT       0x03 (3) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (3 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
C0           (MAIN)   END_COLLECTION     Application  <-- Warning: Physical units are still in effect PHYSICAL(MIN=0,MAX=315) UNIT(0x00000000,EXP=0)
*/

//--------------------------------------------------------------------------------
// Vendor-defined featureReport 05 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x05 (5)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0033[40];                      // Usage 0xFF000033: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport05_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 08 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x08 (8)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0034[47];                      // Usage 0xFF000034: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport08_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 09 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x09 (9)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0024[19];                      // Usage 0xFF000024: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport09_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 0A (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x0A (10)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0025[26];                      // Usage 0xFF000025: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport0A_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 20 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x20 (32)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0026[63];                      // Usage 0xFF000026: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport20_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 21 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x21 (33)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0027[4];                       // Usage 0xFF000027: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport21_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 22 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x22 (34)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0040[63];                      // Usage 0xFF000040: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport22_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 80 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x80 (128)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0028[63];                      // Usage 0xFF000028: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport80_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 81 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x81 (129)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0029[63];                      // Usage 0xFF000029: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport81_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 82 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x82 (130)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad002A[9];                       // Usage 0xFF00002A: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport82_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 83 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x83 (131)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad002B[63];                      // Usage 0xFF00002B: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport83_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 84 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x84 (132)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad002C[63];                      // Usage 0xFF00002C: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport84_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 85 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x85 (133)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad002D[2];                       // Usage 0xFF00002D: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport85_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA0 (160)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad002E;                          // Usage 0xFF00002E: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport E0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xE0 (224)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad002F[63];                      // Usage 0xFF00002F: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportE0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF0 (240)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0030[63];                      // Usage 0xFF000030: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F1 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF1 (241)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0031[63];                      // Usage 0xFF000031: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF1_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F2 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF2 (242)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0032[15];                      // Usage 0xFF000032: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF2_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F4 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF4 (244)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0035[63];                      // Usage 0xFF000035: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF4_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F5 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF5 (245)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0036[3];                       // Usage 0xFF000036: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF5_t;


//--------------------------------------------------------------------------------
// Generic Desktop Page inputReport 01 (Device --> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x01 (1)
                                                     // Collection: CA:GamePad
  uint8_t  GD_GamePadX;                              // Usage 0x00010030: X, Value = 0 to 255
  uint8_t  GD_GamePadY;                              // Usage 0x00010031: Y, Value = 0 to 255
  uint8_t  GD_GamePadZ;                              // Usage 0x00010032: Z, Value = 0 to 255
  uint8_t  GD_GamePadRz;                             // Usage 0x00010035: Rz, Value = 0 to 255
  uint8_t  GD_GamePadRx;                             // Usage 0x00010033: Rx, Value = 0 to 255
  uint8_t  GD_GamePadRy;                             // Usage 0x00010034: Ry, Value = 0 to 255
  uint8_t  VEN_GamePad0020;                          // Usage 0xFF000020: , Value = 0 to 255
  uint8_t  GD_GamePadHatSwitch : 4;                  // Usage 0x00010039: Hat switch, Value = 0 to 7, Physical = Value x 45 in degrees
  uint8_t  BTN_GamePadButton1 : 1;                   // Usage 0x00090001: Button 1 Primary/trigger, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton2 : 1;                   // Usage 0x00090002: Button 2 Secondary, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton3 : 1;                   // Usage 0x00090003: Button 3 Tertiary, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton4 : 1;                   // Usage 0x00090004: Button 4, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton5 : 1;                   // Usage 0x00090005: Button 5, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton6 : 1;                   // Usage 0x00090006: Button 6, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton7 : 1;                   // Usage 0x00090007: Button 7, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton8 : 1;                   // Usage 0x00090008: Button 8, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton9 : 1;                   // Usage 0x00090009: Button 9, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton10 : 1;                  // Usage 0x0009000A: Button 10, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton11 : 1;                  // Usage 0x0009000B: Button 11, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton12 : 1;                  // Usage 0x0009000C: Button 12, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton13 : 1;                  // Usage 0x0009000D: Button 13, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton14 : 1;                  // Usage 0x0009000E: Button 14, Value = 0 to 1, Physical = Value x 315
  uint8_t  BTN_GamePadButton15 : 1;                  // Usage 0x0009000F: Button 15, Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad0021 : 1;                      // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00211 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00212 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00213 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00214 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00215 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00216 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00217 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00218 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad00219 : 1;                     // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad002110 : 1;                    // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad002111 : 1;                    // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad002112 : 1;                    // Usage 0xFF000021: , Value = 0 to 1, Physical = Value x 315
  uint8_t  VEN_GamePad0022[52];                      // Usage 0xFF000022: , Value = 0 to 255, Physical = Value x 21 / 17
	
  // 12-14 counter , perhaps something additional in the highest bits of byte 14
	// 15: value 0x27	After reconnect: 0x1C
	// 16-17: gyro X
	// 18-19: gyro
	// 20-21: gyro
	// 22-23: accel
	// 24-25: accel
	// 26-27: accel
	// 28-29: change rapidly, unknown
	// 30-31: appears to be a counter
	// 32: value 0x14, also 0x15, also 0x13, 0x12  Battery perhaps?
	// 33: bit 0x80 set if touchpad not touched, cleared if touched.  bits 0-7 correspond to a touch count
	// 34-37:  touch location
	// 38-41:  Same as the above 2 notes with touch event/location, but for a second finger
	//			If one finger touches, then second finger touches, and first finger releases, then second data still tracks
	// 42: 0x09
	// 43: 0x09
	// 44-48: 0x00
	// 49-50: appears to increment, perhaps as a part of more precise timing for below:
	// 51-52: counter, matches 30-31
	// 53: value 0x29
	// 54: value 0x08	-> becomes 9 when headphones are attached
	// 55: value 0x00
	// 56-63: 8-bytes of seeming random data
} inputReport01_t;


//--------------------------------------------------------------------------------
// Vendor-defined outputReport 02 (Device <-- Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x02 (2)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0023[47];                      // Usage 0xFF000023: , Value = 0 to 255, Physical = Value x 21 / 17
} outputReport02_t;

#endif
