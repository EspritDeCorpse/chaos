#ifndef PS4_GENERATED_H
#define PS4_GENERATED_H

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
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0)  <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255)  
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field  
95 04          (GLOBAL) REPORT_COUNT       0x04 (4) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (4 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
09 39          (LOCAL)  USAGE              0x00010039 Hat switch (Dynamic Value)  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
25 07          (GLOBAL) LOGICAL_MAXIMUM    0x07 (7)  
35 00          (GLOBAL) PHYSICAL_MINIMUM   0x00 (0)  <-- Info: Consider replacing 35 00 with 34
46 3B01        (GLOBAL) PHYSICAL_MAXIMUM   0x013B (315)  
65 14          (GLOBAL) UNIT               0x14 Rotation in degrees [1° units] (4=System=English Rotation, 1=Rotation=Degrees)  
75 04          (GLOBAL) REPORT_SIZE        0x04 (4) Number of bits per field  
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
81 42          (MAIN)   INPUT              0x00000042 (1 field x 4 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 1=Null 0=NonVolatile 0=Bitmap 
65 00          (GLOBAL) UNIT               0x00 No unit (0=None)  <-- Info: Consider replacing 65 00 with 64
05 09          (GLOBAL) USAGE_PAGE         0x0009 Button Page 
19 01          (LOCAL)  USAGE_MINIMUM      0x00090001 Button 1 Primary/trigger (Selector, On/Off Control, Momentary Control, or One Shot Control)  
29 0E          (LOCAL)  USAGE_MAXIMUM      0x0009000E Button 14 (Selector, On/Off Control, Momentary Control, or One Shot Control)  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
25 01          (GLOBAL) LOGICAL_MAXIMUM    0x01 (1)  
75 01          (GLOBAL) REPORT_SIZE        0x01 (1) Number of bits per field  
95 0E          (GLOBAL) REPORT_COUNT       0x0E (14) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (14 fields x 1 bit) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 00FF        (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined 
09 20          (LOCAL)  USAGE              0xFF000020 <-- Warning: Undocumented usage (document it by inserting 0020 into file FF00.conf)
75 06          (GLOBAL) REPORT_SIZE        0x06 (6) Number of bits per field  
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
25 7F          (GLOBAL) LOGICAL_MAXIMUM    0x7F (127)  
81 02          (MAIN)   INPUT              0x00000002 (1 field x 6 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap  <-- Error: REPORT_SIZE (6) is too small for LOGICAL_MAXIMUM (127) which needs 7 bits.
05 01          (GLOBAL) USAGE_PAGE         0x0001 Generic Desktop Page 
09 33          (LOCAL)  USAGE              0x00010033 Rx (Dynamic Value)  
09 34          (LOCAL)  USAGE              0x00010034 Ry (Dynamic Value)  
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0) <-- Redundant: LOGICAL_MINIMUM is already 0 <-- Info: Consider replacing 15 00 with 14
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255)  
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field  
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 00FF        (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined 
09 21          (LOCAL)  USAGE              0xFF000021 <-- Warning: Undocumented usage (document it by inserting 0021 into file FF00.conf)
95 36          (GLOBAL) REPORT_COUNT       0x36 (54) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (54 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 05          (GLOBAL) REPORT_ID          0x05 (5)  
09 22          (LOCAL)  USAGE              0xFF000022 <-- Warning: Undocumented usage (document it by inserting 0022 into file FF00.conf)
95 1F          (GLOBAL) REPORT_COUNT       0x1F (31) Number of fields  
91 02          (MAIN)   OUTPUT             0x00000002 (31 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 04          (GLOBAL) REPORT_ID          0x04 (4)  
09 23          (LOCAL)  USAGE              0xFF000023 <-- Warning: Undocumented usage (document it by inserting 0023 into file FF00.conf)
95 24          (GLOBAL) REPORT_COUNT       0x24 (36) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (36 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 02          (GLOBAL) REPORT_ID          0x02 (2)  
09 24          (LOCAL)  USAGE              0xFF000024 <-- Warning: Undocumented usage (document it by inserting 0024 into file FF00.conf)
95 24          (GLOBAL) REPORT_COUNT       0x24 (36) Number of fields <-- Redundant: REPORT_COUNT is already 36 
B1 02          (MAIN)   FEATURE            0x00000002 (36 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 08          (GLOBAL) REPORT_ID          0x08 (8)  
09 25          (LOCAL)  USAGE              0xFF000025 <-- Warning: Undocumented usage (document it by inserting 0025 into file FF00.conf)
95 03          (GLOBAL) REPORT_COUNT       0x03 (3) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (3 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 10          (GLOBAL) REPORT_ID          0x10 (16)  
09 26          (LOCAL)  USAGE              0xFF000026 <-- Warning: Undocumented usage (document it by inserting 0026 into file FF00.conf)
95 04          (GLOBAL) REPORT_COUNT       0x04 (4) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (4 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 11          (GLOBAL) REPORT_ID          0x11 (17)  
09 27          (LOCAL)  USAGE              0xFF000027 <-- Warning: Undocumented usage (document it by inserting 0027 into file FF00.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 12          (GLOBAL) REPORT_ID          0x12 (18)  
06 02FF        (GLOBAL) USAGE_PAGE         0xFF02 Vendor-defined 
09 21          (LOCAL)  USAGE              0xFF020021 <-- Warning: Undocumented usage (document it by inserting 0021 into file FF02.conf)
95 0F          (GLOBAL) REPORT_COUNT       0x0F (15) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (15 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 13          (GLOBAL) REPORT_ID          0x13 (19)  
09 22          (LOCAL)  USAGE              0xFF020022 <-- Warning: Undocumented usage (document it by inserting 0022 into file FF02.conf)
95 16          (GLOBAL) REPORT_COUNT       0x16 (22) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (22 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 14          (GLOBAL) REPORT_ID          0x14 (20)  
06 05FF        (GLOBAL) USAGE_PAGE         0xFF05 Vendor-defined 
09 20          (LOCAL)  USAGE              0xFF050020 <-- Warning: Undocumented usage (document it by inserting 0020 into file FF05.conf)
95 10          (GLOBAL) REPORT_COUNT       0x10 (16) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (16 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 15          (GLOBAL) REPORT_ID          0x15 (21)  
09 21          (LOCAL)  USAGE              0xFF050021 <-- Warning: Undocumented usage (document it by inserting 0021 into file FF05.conf)
95 2C          (GLOBAL) REPORT_COUNT       0x2C (44) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (44 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 80FF        (GLOBAL) USAGE_PAGE         0xFF80 Vendor-defined 
85 80          (GLOBAL) REPORT_ID          0x80 (128)  
09 20          (LOCAL)  USAGE              0xFF800020 <-- Warning: Undocumented usage (document it by inserting 0020 into file FF80.conf)
95 06          (GLOBAL) REPORT_COUNT       0x06 (6) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (6 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 81          (GLOBAL) REPORT_ID          0x81 (129)  
09 21          (LOCAL)  USAGE              0xFF800021 <-- Warning: Undocumented usage (document it by inserting 0021 into file FF80.conf)
95 06          (GLOBAL) REPORT_COUNT       0x06 (6) Number of fields <-- Redundant: REPORT_COUNT is already 6 
B1 02          (MAIN)   FEATURE            0x00000002 (6 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 82          (GLOBAL) REPORT_ID          0x82 (130)  
09 22          (LOCAL)  USAGE              0xFF800022 <-- Warning: Undocumented usage (document it by inserting 0022 into file FF80.conf)
95 05          (GLOBAL) REPORT_COUNT       0x05 (5) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (5 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 83          (GLOBAL) REPORT_ID          0x83 (131)  
09 23          (LOCAL)  USAGE              0xFF800023 <-- Warning: Undocumented usage (document it by inserting 0023 into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 84          (GLOBAL) REPORT_ID          0x84 (132)  
09 24          (LOCAL)  USAGE              0xFF800024 <-- Warning: Undocumented usage (document it by inserting 0024 into file FF80.conf)
95 04          (GLOBAL) REPORT_COUNT       0x04 (4) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (4 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 85          (GLOBAL) REPORT_ID          0x85 (133)  
09 25          (LOCAL)  USAGE              0xFF800025 <-- Warning: Undocumented usage (document it by inserting 0025 into file FF80.conf)
95 06          (GLOBAL) REPORT_COUNT       0x06 (6) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (6 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 86          (GLOBAL) REPORT_ID          0x86 (134)  
09 26          (LOCAL)  USAGE              0xFF800026 <-- Warning: Undocumented usage (document it by inserting 0026 into file FF80.conf)
95 06          (GLOBAL) REPORT_COUNT       0x06 (6) Number of fields <-- Redundant: REPORT_COUNT is already 6 
B1 02          (MAIN)   FEATURE            0x00000002 (6 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 87          (GLOBAL) REPORT_ID          0x87 (135)  
09 27          (LOCAL)  USAGE              0xFF800027 <-- Warning: Undocumented usage (document it by inserting 0027 into file FF80.conf)
95 23          (GLOBAL) REPORT_COUNT       0x23 (35) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (35 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 88          (GLOBAL) REPORT_ID          0x88 (136)  
09 28          (LOCAL)  USAGE              0xFF800028 <-- Warning: Undocumented usage (document it by inserting 0028 into file FF80.conf)
95 22          (GLOBAL) REPORT_COUNT       0x22 (34) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (34 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 89          (GLOBAL) REPORT_ID          0x89 (137)  
09 29          (LOCAL)  USAGE              0xFF800029 <-- Warning: Undocumented usage (document it by inserting 0029 into file FF80.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 90          (GLOBAL) REPORT_ID          0x90 (144)  
09 30          (LOCAL)  USAGE              0xFF800030 <-- Warning: Undocumented usage (document it by inserting 0030 into file FF80.conf)
95 05          (GLOBAL) REPORT_COUNT       0x05 (5) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (5 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 91          (GLOBAL) REPORT_ID          0x91 (145)  
09 31          (LOCAL)  USAGE              0xFF800031 <-- Warning: Undocumented usage (document it by inserting 0031 into file FF80.conf)
95 03          (GLOBAL) REPORT_COUNT       0x03 (3) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (3 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 92          (GLOBAL) REPORT_ID          0x92 (146)  
09 32          (LOCAL)  USAGE              0xFF800032 <-- Warning: Undocumented usage (document it by inserting 0032 into file FF80.conf)
95 03          (GLOBAL) REPORT_COUNT       0x03 (3) Number of fields <-- Redundant: REPORT_COUNT is already 3 
B1 02          (MAIN)   FEATURE            0x00000002 (3 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 93          (GLOBAL) REPORT_ID          0x93 (147)  
09 33          (LOCAL)  USAGE              0xFF800033 <-- Warning: Undocumented usage (document it by inserting 0033 into file FF80.conf)
95 0C          (GLOBAL) REPORT_COUNT       0x0C (12) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (12 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A0          (GLOBAL) REPORT_ID          0xA0 (160)  
09 40          (LOCAL)  USAGE              0xFF800040 <-- Warning: Undocumented usage (document it by inserting 0040 into file FF80.conf)
95 06          (GLOBAL) REPORT_COUNT       0x06 (6) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (6 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A1          (GLOBAL) REPORT_ID          0xA1 (161)  
09 41          (LOCAL)  USAGE              0xFF800041 <-- Warning: Undocumented usage (document it by inserting 0041 into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A2          (GLOBAL) REPORT_ID          0xA2 (162)  
09 42          (LOCAL)  USAGE              0xFF800042 <-- Warning: Undocumented usage (document it by inserting 0042 into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields <-- Redundant: REPORT_COUNT is already 1 
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A3          (GLOBAL) REPORT_ID          0xA3 (163)  
09 43          (LOCAL)  USAGE              0xFF800043 <-- Warning: Undocumented usage (document it by inserting 0043 into file FF80.conf)
95 30          (GLOBAL) REPORT_COUNT       0x30 (48) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (48 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A4          (GLOBAL) REPORT_ID          0xA4 (164)  
09 44          (LOCAL)  USAGE              0xFF800044 <-- Warning: Undocumented usage (document it by inserting 0044 into file FF80.conf)
95 0D          (GLOBAL) REPORT_COUNT       0x0D (13) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (13 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A5          (GLOBAL) REPORT_ID          0xA5 (165)  
09 45          (LOCAL)  USAGE              0xFF800045 <-- Warning: Undocumented usage (document it by inserting 0045 into file FF80.conf)
95 15          (GLOBAL) REPORT_COUNT       0x15 (21) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (21 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A6          (GLOBAL) REPORT_ID          0xA6 (166)  
09 46          (LOCAL)  USAGE              0xFF800046 <-- Warning: Undocumented usage (document it by inserting 0046 into file FF80.conf)
95 15          (GLOBAL) REPORT_COUNT       0x15 (21) Number of fields <-- Redundant: REPORT_COUNT is already 21 
B1 02          (MAIN)   FEATURE            0x00000002 (21 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F0          (GLOBAL) REPORT_ID          0xF0 (240)  
09 47          (LOCAL)  USAGE              0xFF800047 <-- Warning: Undocumented usage (document it by inserting 0047 into file FF80.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F1          (GLOBAL) REPORT_ID          0xF1 (241)  
09 48          (LOCAL)  USAGE              0xFF800048 <-- Warning: Undocumented usage (document it by inserting 0048 into file FF80.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 F2          (GLOBAL) REPORT_ID          0xF2 (242)  
09 49          (LOCAL)  USAGE              0xFF800049 <-- Warning: Undocumented usage (document it by inserting 0049 into file FF80.conf)
95 0F          (GLOBAL) REPORT_COUNT       0x0F (15) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (15 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A7          (GLOBAL) REPORT_ID          0xA7 (167)  
09 4A          (LOCAL)  USAGE              0xFF80004A <-- Warning: Undocumented usage (document it by inserting 004A into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A8          (GLOBAL) REPORT_ID          0xA8 (168)  
09 4B          (LOCAL)  USAGE              0xFF80004B <-- Warning: Undocumented usage (document it by inserting 004B into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields <-- Redundant: REPORT_COUNT is already 1 
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 A9          (GLOBAL) REPORT_ID          0xA9 (169)  
09 4C          (LOCAL)  USAGE              0xFF80004C <-- Warning: Undocumented usage (document it by inserting 004C into file FF80.conf)
95 08          (GLOBAL) REPORT_COUNT       0x08 (8) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (8 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 AA          (GLOBAL) REPORT_ID          0xAA (170)  
09 4E          (LOCAL)  USAGE              0xFF80004E <-- Warning: Undocumented usage (document it by inserting 004E into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 AB          (GLOBAL) REPORT_ID          0xAB (171)  
09 4F          (LOCAL)  USAGE              0xFF80004F <-- Warning: Undocumented usage (document it by inserting 004F into file FF80.conf)
95 39          (GLOBAL) REPORT_COUNT       0x39 (57) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (57 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 AC          (GLOBAL) REPORT_ID          0xAC (172)  
09 50          (LOCAL)  USAGE              0xFF800050 <-- Warning: Undocumented usage (document it by inserting 0050 into file FF80.conf)
95 39          (GLOBAL) REPORT_COUNT       0x39 (57) Number of fields <-- Redundant: REPORT_COUNT is already 57 
B1 02          (MAIN)   FEATURE            0x00000002 (57 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 AD          (GLOBAL) REPORT_ID          0xAD (173)  
09 51          (LOCAL)  USAGE              0xFF800051 <-- Warning: Undocumented usage (document it by inserting 0051 into file FF80.conf)
95 0B          (GLOBAL) REPORT_COUNT       0x0B (11) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (11 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 AE          (GLOBAL) REPORT_ID          0xAE (174)  
09 52          (LOCAL)  USAGE              0xFF800052 <-- Warning: Undocumented usage (document it by inserting 0052 into file FF80.conf)
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (1 field x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 AF          (GLOBAL) REPORT_ID          0xAF (175)  
09 53          (LOCAL)  USAGE              0xFF800053 <-- Warning: Undocumented usage (document it by inserting 0053 into file FF80.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 B0          (GLOBAL) REPORT_ID          0xB0 (176)  
09 54          (LOCAL)  USAGE              0xFF800054 <-- Warning: Undocumented usage (document it by inserting 0054 into file FF80.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 B1          (GLOBAL) REPORT_ID          0xB1 (177)  
09 55          (LOCAL)  USAGE              0xFF800055 <-- Warning: Undocumented usage (document it by inserting 0055 into file FF80.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 B2          (GLOBAL) REPORT_ID          0xB2 (178)  
09 56          (LOCAL)  USAGE              0xFF800056 <-- Warning: Undocumented usage (document it by inserting 0056 into file FF80.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields <-- Redundant: REPORT_COUNT is already 2 
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 E0          (GLOBAL) REPORT_ID          0xE0 (224)  
09 57          (LOCAL)  USAGE              0xFF800057 <-- Warning: Undocumented usage (document it by inserting 0057 into file FF80.conf)
95 02          (GLOBAL) REPORT_COUNT       0x02 (2) Number of fields <-- Redundant: REPORT_COUNT is already 2 
B1 02          (MAIN)   FEATURE            0x00000002 (2 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 B3          (GLOBAL) REPORT_ID          0xB3 (179)  
09 55          (LOCAL)  USAGE              0xFF800055 <-- Warning: Undocumented usage (document it by inserting 0055 into file FF80.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
85 B4          (GLOBAL) REPORT_ID          0xB4 (180)  
09 55          (LOCAL)  USAGE              0xFF800055 <-- Warning: Undocumented usage (document it by inserting 0055 into file FF80.conf)
95 3F          (GLOBAL) REPORT_COUNT       0x3F (63) Number of fields <-- Redundant: REPORT_COUNT is already 63 
B1 02          (MAIN)   FEATURE            0x00000002 (63 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
C0           (MAIN)   END_COLLECTION     Application  <-- Warning: Physical units are still in effect PHYSICAL(MIN=0,MAX=315) UNIT(0x00000000,EXP=0)
*/

//--------------------------------------------------------------------------------
// Vendor-defined featureReport 04 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x04 (4)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0023[36];                      // Usage 0xFF000023: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport04_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 02 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x02 (2)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0024[36];                      // Usage 0xFF000024: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport02_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 08 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x08 (8)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0025[3];                       // Usage 0xFF000025: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport08_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 10 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x10 (16)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0026[4];                       // Usage 0xFF000026: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport10_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 11 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x11 (17)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0027[2];                       // Usage 0xFF000027: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport11_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 12 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x12 (18)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0021[15];                      // Usage 0xFF020021: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport12_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 13 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x13 (19)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0022[22];                      // Usage 0xFF020022: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport13_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 14 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x14 (20)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0020[16];                      // Usage 0xFF050020: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport14_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 15 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x15 (21)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0021[44];                      // Usage 0xFF050021: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport15_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 80 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x80 (128)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0020[6];                       // Usage 0xFF800020: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport80_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 81 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x81 (129)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0021[6];                       // Usage 0xFF800021: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport81_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 82 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x82 (130)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0022[5];                       // Usage 0xFF800022: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport82_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 83 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x83 (131)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0023;                          // Usage 0xFF800023: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport83_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 84 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x84 (132)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0024[4];                       // Usage 0xFF800024: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport84_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 85 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x85 (133)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0025[6];                       // Usage 0xFF800025: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport85_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 86 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x86 (134)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0026[6];                       // Usage 0xFF800026: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport86_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 87 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x87 (135)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0027[35];                      // Usage 0xFF800027: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport87_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 88 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x88 (136)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0028[34];                      // Usage 0xFF800028: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport88_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 89 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x89 (137)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0029[2];                       // Usage 0xFF800029: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport89_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 90 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x90 (144)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0030[5];                       // Usage 0xFF800030: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport90_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 91 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x91 (145)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0031[3];                       // Usage 0xFF800031: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport91_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 92 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x92 (146)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0032[3];                       // Usage 0xFF800032: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport92_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport 93 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x93 (147)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0033[12];                      // Usage 0xFF800033: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReport93_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA0 (160)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0040[6];                       // Usage 0xFF800040: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A1 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA1 (161)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0041;                          // Usage 0xFF800041: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA1_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A2 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA2 (162)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0042;                          // Usage 0xFF800042: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA2_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A3 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA3 (163)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0043[48];                      // Usage 0xFF800043: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA3_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A4 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA4 (164)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0044[13];                      // Usage 0xFF800044: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA4_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A5 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA5 (165)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0045[21];                      // Usage 0xFF800045: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA5_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A6 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA6 (166)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0046[21];                      // Usage 0xFF800046: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA6_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF0 (240)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0047[63];                      // Usage 0xFF800047: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F1 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF1 (241)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0048[63];                      // Usage 0xFF800048: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF1_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport F2 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xF2 (242)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0049[15];                      // Usage 0xFF800049: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportF2_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A7 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA7 (167)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad004A;                          // Usage 0xFF80004A: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA7_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A8 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA8 (168)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad004B;                          // Usage 0xFF80004B: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA8_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport A9 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xA9 (169)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad004C[8];                       // Usage 0xFF80004C: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportA9_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport AA (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xAA (170)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad004E;                          // Usage 0xFF80004E: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportAA_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport AB (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xAB (171)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad004F[57];                      // Usage 0xFF80004F: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportAB_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport AC (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xAC (172)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0050[57];                      // Usage 0xFF800050: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportAC_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport AD (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xAD (173)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0051[11];                      // Usage 0xFF800051: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportAD_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport AE (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xAE (174)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0052;                          // Usage 0xFF800052: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportAE_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport AF (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xAF (175)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0053[2];                       // Usage 0xFF800053: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportAF_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport B0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xB0 (176)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0054[63];                      // Usage 0xFF800054: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportB0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport B1 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xB1 (177)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0055[2];                       // Usage 0xFF800055: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportB1_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport B2 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xB2 (178)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0056[2];                       // Usage 0xFF800056: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportB2_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport E0 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xE0 (224)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0057[2];                       // Usage 0xFF800057: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportE0_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport B3 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xB3 (179)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0055[63];                      // Usage 0xFF800055: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportB3_t;


//--------------------------------------------------------------------------------
// Vendor-defined featureReport B4 (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0xB4 (180)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0055[63];                      // Usage 0xFF800055: , Value = 0 to 255, Physical = Value x 21 / 17
} featureReportB4_t;


//--------------------------------------------------------------------------------
// Generic Desktop Page inputReport 01 (Device --> Host)
//--------------------------------------------------------------------------------

typedef struct
{
	uint8_t counter : 7;
	uint8_t active : 1;	// first 7 bits are a counter.  bit 8 is a touch indicator
	int16_t x : 12;
	int16_t y : 12;
	
}__attribute__((packed)) TouchpadFinger;

typedef struct {
	uint8_t timestamp;
	TouchpadFinger finger1;
	TouchpadFinger finger2;
}__attribute__((packed)) TouchpadEvent;

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x01 (1)
                                                     // Collection: CA:GamePad
  uint8_t  GD_GamePadX;                              // Usage 0x00010030: X, Value = 0 to 255
  uint8_t  GD_GamePadY;                              // Usage 0x00010031: Y, Value = 0 to 255
  uint8_t  GD_GamePadZ;                              // Usage 0x00010032: Z, Value = 0 to 255
  uint8_t  GD_GamePadRz;                             // Usage 0x00010035: Rz, Value = 0 to 255
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
  uint8_t  VEN_GamePad0020 : 6;                      // Usage 0xFF000020: , Value = 0 to 127, Physical = Value x 315 / 127
  uint8_t  GD_GamePadRx; // alignment 8              // Usage 0x00010033: Rx, Value = 0 to 255, Physical = Value x 21 / 17
  uint8_t  GD_GamePadRy; // 9                            // Usage 0x00010034: Ry, Value = 0 to 255, Physical = Value x 21 / 17
//  uint8_t  VEN_GamePad0021[54];                      // Usage 0xFF000021: , Value = 0 to 255, Physical = Value x 21 / 17
	uint16_t timestamp; // 10,11
	uint8_t VEN_GamePadunknown1; // 12	// Seems to only report 0x16
	int16_t GD_GYRO_X; // 13
	int16_t GD_GYRO_Y; // 15
	int16_t GD_GYRO_Z; // 17
	int16_t GD_ACC_X; // 19
	int16_t GD_ACC_Y; // 21
	int16_t GD_ACC_Z; // 23
	
	uint8_t  VEN_GamePadunknown2[5]; // 25
	uint8_t BATTERY; // 30
	uint8_t  VEN_GamePadunknown3[2]; // 31, 32
	
	uint8_t  TOUCH_COUNT; // 33
	TouchpadEvent TOUCH_EVENTS[3];	// 34 (9-bytes each -> 27 total
	
	uint8_t  VEN_GamePad0021[3];                      // Usage 0xFF000021: , Value = 0 to 255, Physical = Value x 21 / 17
	
	//
	
}__attribute__((packed)) inputReport01_t;


//--------------------------------------------------------------------------------
// Vendor-defined outputReport 05 (Device <-- Host)
//--------------------------------------------------------------------------------

typedef struct
{
  uint8_t  reportId;                                 // Report ID = 0x05 (5)
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad0022[31];                      // Usage 0xFF000022: , Value = 0 to 255, Physical = Value x 21 / 17
} outputReport05_t;

#endif
