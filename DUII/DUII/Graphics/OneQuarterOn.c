/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        Bitmap converter for emWin V5.04.
*        Compiled Jan  8 2010, 16:37:17
*        (C) 1998 - 2005 Segger Microcontroller Systeme GmbH
*
**********************************************************************
*
* Source file: OneQuarterOn
* Dimensions:  72 * 65
* NumColors:   256
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsOneQuarterOn[] = {
     0xB1D1DF,0x8AEEF9,0xF1F1F2,0xD5D2D3
    ,0x010101,0xFC0000,0xCA4403,0x9D0400
    ,0xA51500,0xDEDDE0,0xA30200,0xD34D02
    ,0xB52A01,0xBD3602,0xB30000,0xB6B5B7
    ,0xC60000,0xBFD8E9,0xDEE3E6,0xDA0000
    ,0xDA5204,0xAD2201,0x531901,0x868686
    ,0x6B1414,0x171916,0xE0DFE1,0x373736
    ,0xA9A9A9,0x282927,0xF74545,0x686868
    ,0x575755,0x383528,0xE6D7D1,0x474438
    ,0x686958,0x777776,0x989897,0x474745
    ,0x0B03CF,0x565448,0x576C07,0x292519
    ,0x14150D,0x672703,0x787568,0xC43B02
    ,0x0CAEEE,0xE50000,0x332A1B,0x413929
    ,0x453A34,0xF2E3DA,0x860201,0x6F7789
    ,0xE05304,0x2EC4F2,0x251D14,0x736C63
    ,0x992A01,0x10D2F7,0x283135,0x280DE7
    ,0x0B92D3,0x0DE6FD,0x31EDFC,0xCDC3BC
    ,0x342E22,0x4C0201,0x560300,0x5A2102
    ,0x772807,0x615B4C,0x9A3705,0xBA4203
    ,0x85827C,0x7373AE,0x2A0DDA,0x4429D6
    ,0x49D1F8,0x969589,0xA4A296,0xAAAAB4
    ,0x0D1414,0x1C231A,0x171B21,0x64740A
    ,0x394549,0x596468,0x9B1500,0xA63502
    ,0x5436E8,0x54B2CC,0x78B0C8,0x70EEF9
    ,0xAEBCC4,0x1A2221,0x7A0301,0x651204
    ,0x3B4707,0x544736,0x544C43,0x495555
    ,0x871802,0x871918,0x862504,0x893003
    ,0x6E8908,0x2C26B6,0x3526CE,0x528397
    ,0x029AEA,0x928D82,0x999CA9,0xACB1AE
    ,0xCCBCBA,0x1A0403,0x0E120B,0x340806
    ,0x451615,0x5E1A17,0x680502,0x5A533D
    ,0x58652D,0x192A41,0x385656,0x464E53
    ,0x7A544B,0x625E55,0xF22F2F,0x798629
    ,0x7B8275,0x979878,0x0402BB,0x524CB6
    ,0x1801E6,0x6650CF,0x807E88,0x0FABD6
    ,0x32B0DA,0x29ACE1,0x28B3EB,0xAB9C95
    ,0x96AAB4,0xB5ADA9,0xB4B3A6,0xD9A890
    ,0x93C2C9,0xA7C3C9,0xB9C5C7,0xA9C9D2
    ,0x21190A,0x7B1907,0x761714,0x4C2E1C
    ,0x3E4039,0x485200,0x76412C,0x6A7428
    ,0x0D0F7A,0x274454,0x3D4951,0x5F655E
    ,0x555C62,0xAE4509,0x867A77,0x8F972F
    ,0x2E2D94,0x1C769C,0x2876AC,0x5643D4
    ,0x6D868D,0x56C7DC,0x6AC6D8,0x898C93
    ,0x908C90,0x9DA098,0x8381B0,0xE0A7A8
    ,0x82BDC9,0x88DDF2,0x220B0C,0x3E150E
    ,0x3A1213,0x3F220F,0x333B00,0x1F2A30
    ,0x662B16,0x592824,0x523E35,0x633523
    ,0x7D3C28,0x4D432F,0x53412D,0x393846
    ,0x223854,0x2B396A,0x24454D,0x145D7F
    ,0x2A5D6E,0x345A75,0x38686E,0x4E544A
    ,0x455367,0x405871,0x6E706C,0x646F75
    ,0x9C0F10,0x921B1E,0xA5151F,0x873112
    ,0xF71F20,0x994B1C,0xA24311,0xB34D16
    ,0xD36E3B,0x806B61,0x99757B,0xD57743
    ,0xE65F60,0x8E981D,0x909753,0x95A341
    ,0x898C6B,0x9E9C6E,0x8F9079,0x2018BC
    ,0x365785,0x256988,0x3F6390,0x007CBF
    ,0x7A6CC5,0x6E5CE1,0x8277BF,0x1982A5
    ,0x3F91B8,0x72A4B7,0x2B9ED1,0x4993C4
    ,0x64D5F9,0x56F3F6,0x8A9599,0xA2A18C
    ,0xB0A598,0x9F9FB4,0xA29FB9,0xA8B7B9
    ,0xD79E81,0xE79293,0xC0BFC1,0xB1D1DF
    ,0xA3CAE6,0xBFD8E9,0x8AEEF9,0xA3CAE6
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalOneQuarterOn = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &ColorsOneQuarterOn[0]
};

static GUI_CONST_STORAGE unsigned char acOneQuarterOn[] = {
  0x56, 0x1D, 0x1B, 0x1B, 0x3E, 0x34, 0x69, 0x0E, 0x31, 0x31, 0x13, 0x13, 0x13, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x15, 0x15, 0x15, 0x15, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x2F, 0x2F, 0x2F, 0x2F, 0x06, 0x06, 0x06, 0x4B, 0x4A, 0x9E, 0x27, 0x3E, 0x55, 0x4C, 0xB0,
  0xBB, 0x61, 0x61, 0xBB, 0x69, 0x13, 0x05, 0x31, 0x13, 0x13, 0x13, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x5A, 0x5A, 0x5A, 
        0x5A, 0x08, 0x08, 0x08, 0x08, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x2F, 0x2F, 0x2F, 0x06, 0x06, 0x0B, 0xD7, 0x9B, 0x54, 0x2E, 0x91,
  0x54, 0x76, 0xB6, 0x0E, 0x05, 0x13, 0x36, 0x63, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 
        0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x2D, 0x6B, 0x0B, 0x06, 0x47, 0x04, 0x23,
  0x56, 0x19, 0x10, 0x05, 0x0E, 0x16, 0x4A, 0x06, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 
        0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x4B, 0x48, 0x47, 0x06, 0x14, 0x2D, 0x54,
  0x3E, 0xD1, 0x05, 0x0E, 0x48, 0x06, 0x14, 0x0B, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
        0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x4B, 0x4B, 0x4B, 0x06, 0x0B, 0x14, 0x5B, 0x2D, 0x06, 0x0B, 0xC2,
  0x34, 0x31, 0x13, 0x63, 0x06, 0x06, 0x2F, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
        0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x2F, 0x2F, 0x2F, 0x0D, 0x5B, 0x5B, 0x6B, 0x48, 0xBC, 0x48, 0x0D, 0x2F, 0x2F, 0x06, 0x4A, 0x2D, 0x38, 0xD5,
  0xD1, 0x05, 0x36, 0x6B, 0x2F, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
        0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0C, 0x5B, 0x3C, 0x3C, 0xD3, 0x9E, 0x9B, 0x32, 0x32, 0x55, 0xB9, 0x3C, 0x0D, 0x0D, 0x0D, 0x2F, 0x47, 0x4B, 0xA5,
  0x10, 0x05, 0x7A, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 
        0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x15, 0x3C, 0x3C, 0x6A, 0x48, 0xC0, 0x80, 0xD9, 0x25, 0xCE, 0x44, 0x3A, 0x2B, 0x55, 0x04, 0x6A, 0x0C, 0x0C, 0x0C, 0x0C, 0x6A, 0x6B, 0x0B,
  0x05, 0x05, 0x46, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 
        0x15, 0x15, 0x15, 0x15, 0x15, 0x5A, 0x6A, 0x48, 0xBC, 0x80, 0xA6, 0x3B, 0x20, 0xCB, 0x1B, 0x19, 0x76, 0x1D, 0x04, 0x61, 0x27, 0x04, 0x99, 0x15, 0x15, 0x15, 0x0C, 0x68, 0x2D, 0x38,
  0x05, 0x05, 0x45, 0x15, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x08, 0x08, 0x68, 0xBF, 0xC2, 0xC1, 0x23, 0xCB, 0x1B, 0x19, 0x04, 0x04, 0x04, 0x04, 0x76, 0x3B, 0x3A, 0x66, 0xF4, 0x44, 0x63, 0x5A, 0x08, 0x08, 0x15, 0x68, 0x2D, 0x38,
  0x05, 0x05, 0x45, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x08, 0x5A, 0x99, 0x33, 0x1B, 0x3E, 0x54, 0xC4, 0x76, 0x04, 0x2C, 0x3A, 0x32, 0x04, 0x1B, 0x52, 0x23, 0x23, 0x66, 0x44, 0x16, 0x5A, 0x08, 0x08, 0x08, 0x62, 0x2D, 0x38,
  0x05, 0x05, 0x45, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
        0x07, 0x07, 0x07, 0x07, 0x62, 0x75, 0x7D, 0xE6, 0x56, 0xFC, 0xCD, 0x1D, 0x33, 0x21, 0x23, 0x23, 0x44, 0x32, 0x32, 0x32, 0x32, 0x44, 0xB7, 0x36, 0x07, 0x07, 0x0A, 0x62, 0x2D, 0x38,
  0x05, 0x05, 0x45, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
        0x07, 0x07, 0x07, 0x07, 0x36, 0x45, 0x72, 0x00, 0xCC, 0xF7, 0xCF, 0x49, 0x3B, 0x4C, 0x17, 0x3B, 0x32, 0x32, 0x3A, 0x2C, 0x1B, 0x61, 0x75, 0x36, 0x07, 0x0A, 0x0A, 0x62, 0x2D, 0x38,
  0x05, 0x05, 0x45, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
        0x0A, 0x0A, 0x0A, 0x07, 0x36, 0x79, 0xCE, 0xA3, 0x65, 0x44, 0x65, 0x2E, 0x27, 0x9C, 0x55, 0x76, 0x04, 0x3E, 0xC6, 0x04, 0x23, 0x29, 0x77, 0x36, 0x0A, 0x0A, 0x0A, 0x36, 0x2D, 0x38,
  0x05, 0x05, 0x46, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
        0x0E, 0x0E, 0x0E, 0x0A, 0x9A, 0x7B, 0x65, 0x33, 0x33, 0x1B, 0x1D, 0x76, 0x04, 0x04, 0x04, 0x04, 0xC8, 0x8D, 0x30, 0xE7, 0xAC, 0x52, 0xBD, 0x07, 0x0E, 0x0E, 0x0E, 0x36, 0x2D, 0x38,
  0x05, 0x05, 0x46, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
        0x10, 0x10, 0x10, 0x0E, 0x69, 0x1D, 0x1D, 0xA1, 0x04, 0xE4, 0x7D, 0x2C, 0x32, 0x21, 0x33, 0x7E, 0x50, 0x8E, 0x70, 0x70, 0x40, 0x80, 0xD0, 0x0E, 0x10, 0x10, 0x10, 0x07, 0x2D, 0x38,
  0x05, 0x05, 0x46, 0x31, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 
        0x13, 0x13, 0x13, 0x13, 0x0A, 0xB8, 0x6F, 0x8E, 0xC7, 0x11, 0x37, 0x78, 0x65, 0x21, 0x32, 0x7E, 0x39, 0x8D, 0x30, 0x70, 0xAA, 0x0A, 0x10, 0x13, 0x13, 0x13, 0x31, 0x0E, 0x2D, 0x38,
  0x05, 0x31, 0x7A, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
        0x05, 0x05, 0x05, 0x05, 0x10, 0xDA, 0x5F, 0x50, 0x8E, 0x02, 0x8F, 0x62, 0x23, 0x17, 0x3B, 0x2B, 0xC9, 0x40, 0x8B, 0xAA, 0xD2, 0x31, 0x05, 0x05, 0x05, 0x05, 0x05, 0x10, 0x2D, 0x38,
  0x05, 0x05, 0x7A, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
        0x18, 0x18, 0x18, 0x18, 0x79, 0xAE, 0xF0, 0x39, 0xA9, 0xA4, 0x34, 0x78, 0x81, 0x73, 0x4C, 0x32, 0x77, 0xA2, 0xA1, 0x78, 0x63, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x79, 0x6B, 0x14,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x12, 0x96, 0x50, 0x39, 0x40, 0x58, 0x4C, 0x0F, 0x26, 0x66, 0x29, 0x23, 0x21, 0x1F, 0xA3, 0x34, 0x52, 0x03, 0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1A, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x12, 0x97, 0xED, 0xF2, 0xA4, 0x1B, 0xB1, 0xB1, 0x33, 0x26, 0x71, 0x44, 0x3B, 0xCF, 0xEB, 0xEF, 0x5E, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x1A, 0x43, 0x0F, 0x1C, 0x1F, 0x20, 0x1F, 0x23, 0x17, 0x25, 0x33, 0x58, 0x8C, 0x3D, 0x70, 0x70, 0xEF, 0x03, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x94, 0xAD, 0x90, 0x43, 0x1C, 0x29, 0x2B, 0x29, 0x81, 0x21, 0xCA, 0x50, 0x30, 0x70, 0x40, 0x70, 0x96, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x03, 0x97, 0xB5, 0x50, 0x8C, 0x43, 0x03, 0x25, 0x21, 0x2E, 0x29, 0x33, 0x7E, 0x8D, 0x30, 0x70, 0x30, 0x30, 0x96, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x26, 0x9C, 0x9C, 0x43, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFA, 0x9C, 0x26, 0x02, 0x02, 0x02, 0x73, 0x27, 0x9C, 0x9C, 0x1A, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x96, 0xB5, 0xF0, 0x39, 0xEE, 0x91, 0xFA, 0x26, 0x21, 0x66, 0x49, 0x32, 0x23, 0x6F, 0x40, 0x40, 0x70, 0x5E, 0x1A, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xCE, 0x04, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xCB, 0x04, 0xFA, 0x02, 0x02, 0x02, 0x1D, 0x04, 0x04, 0x04, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x35, 0x97, 0x50, 0x50, 0x30, 0xE5, 0x25, 0xF2, 0x17, 0x34, 0x49, 0x3B, 0x32, 0x23, 0x71, 0x37, 0x6F, 0x90, 0x09, 0x02, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1A, 0xCB, 0x04, 0x04, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFA, 0x04, 0xA4, 0x02, 0x02, 0x02, 0x4C, 0x04, 0x54, 0x04, 0x04, 0x09, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x03, 0xAD, 0x8D, 0xEC, 0x7F, 0x56, 0xA2, 0xAC, 0x23, 0x51, 0x84, 0x44, 0x2B, 0x84, 0xFA, 0x03, 0x22, 0x1A, 0x02, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1C, 0x04, 0x04, 0x3E, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x27, 0x04, 0x03, 0x02, 0x02, 0x03, 0x76, 0x1D, 0xCE, 0x04, 0x04, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x12, 0x03, 0x0F, 0x74, 0x1C, 0x1F, 0x9C, 0x20, 0x21, 0xA3, 0x20, 0x23, 0x1D, 0x17, 0xFA, 0x60, 0xB4, 0x95, 0x22, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1F, 0xB0, 0x73, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFA, 0x04, 0x20, 0x02, 0x02, 0x02, 0x20, 0x04, 0xB1, 0x26, 0x04, 0x04, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x12, 0x22, 0x03, 0x03, 0x03, 0x73, 0xCE, 0x3A, 0x21, 0x3B, 0x34, 0x9C, 0x17, 0x5D, 0x3D, 0x41, 0x3D, 0x5E, 0x22, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x73, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0xCB, 0x04, 0x03, 0x02, 0x02, 0x1C, 0x04, 0x1B, 0x02, 0xB0, 0x04, 0x04, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x12, 0x96, 0x94, 0xB4, 0xFA, 0x1A, 0x09, 0xB1, 0x2B, 0x24, 0x03, 0x49, 0x32, 0xAC, 0x3D, 0x41, 0x42, 0x42, 0x3D, 0x95, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x73, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x03, 0x04, 0xCB, 0x02, 0x02, 0x02, 0x1D, 0x04, 0x0F, 0x02, 0xB0, 0x04, 0x04, 0x09, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x43, 0x97, 0x5F, 0x42, 0x5D, 0x03, 0x1A, 0x73, 0x21, 0x71, 0x51, 0x1C, 0x2B, 0xAC, 0x3D, 0x42, 0xF1, 0x41, 0x3D, 0x5E, 0x35, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x73, 0x04, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0xA3, 0x04, 0x0F, 0x02, 0x02, 0x17, 0x04, 0xCB, 0x02, 0x02, 0x4C, 0x04, 0x04, 0xFA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x09, 0x94, 0x01, 0x5F, 0x42, 0x8E, 0x91, 0x03, 0x72, 0x81, 0x92, 0x84, 0x0F, 0x49, 0x1F, 0x8E, 0x41, 0x42, 0x41, 0x3D, 0x95, 0x35, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x73, 0x04, 0x04, 0x73, 0x02, 0x02, 0x02, 0x03, 0x04, 0x27, 0x02, 0x02, 0x02, 0x9C, 0x04, 0x76, 0x55, 0x19, 0x76, 0x04, 0x04, 0x19, 0x25, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x03, 0xAD, 0x42, 0xF1, 0x5F, 0x8D, 0x37, 0x1C, 0xB1, 0x2E, 0x49, 0x98, 0x33, 0x33, 0x49, 0xAC, 0x8B, 0x30, 0x8E, 0x5E, 0x03, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x73, 0x04, 0x04, 0x73, 0x02, 0x02, 0x02, 0xA3, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x1F, 0x1D, 0x1D, 0x1D, 0x1D, 0x19, 0x04, 0x04, 0x55, 0x25, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x03, 0xAE, 0x41, 0x41, 0x41, 0xA9, 0x7D, 0x9C, 0x4C, 0x66, 0x81, 0x29, 0x24, 0x44, 0x1B, 0x1F, 0x17, 0x1C, 0xFA, 0x03, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1C, 0x04, 0x04, 0x73, 0x02, 0x02, 0x03, 0x76, 0x27, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x17, 0x04, 0x04, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x1A, 0x60, 0x8E, 0x30, 0x5D, 0xAF, 0xCF, 0xCB, 0xA3, 0x21, 0xB1, 0x73, 0xFA, 0x34, 0x29, 0x0F, 0x03, 0x09, 0x09, 0x12, 0x02, 0x02, 0x02, 0x02, 0x35, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1C, 0x04, 0x04, 0x1C, 0x02, 0x02, 0xCE, 0x04, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x17, 0x04, 0x04, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x1A, 0x96, 0x96, 0x43, 0x03, 0x03, 0xFA, 0x1C, 0x23, 0x24, 0x1C, 0x26, 0x23, 0x1F, 0x03, 0x03, 0x0F, 0x52, 0x1C, 0x03, 0x12, 0x02, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0xCE, 0xCE, 0x03, 0x02, 0x03, 0x04, 0x9C, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0F, 0xCE, 0xCE, 0x1A, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0xFA, 0x29, 0x44, 0x23, 0x23, 0x33, 0xA3, 0x0F, 0x85, 0x9F, 0x9D, 0x64, 0x2E, 0x03, 0x12, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xB1, 0x9C, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x12, 0x03, 0x92, 0x92, 0x03, 0x03, 0x1A, 0x43, 0x20, 0x33, 0xF3, 0x24, 0x32, 0xCB, 0xF3, 0x83, 0x6C, 0x2A, 0x9D, 0x64, 0x51, 0x09, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x12, 0x43, 0x85, 0x83, 0x83, 0xE0, 0x96, 0x09, 0xFA, 0x81, 0x34, 0x52, 0x24, 0x21, 0x23, 0xE1, 0xA7, 0x57, 0x2A, 0x2A, 0xBA, 0x49, 0x03, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x09, 0xF3, 0xDE, 0xDF, 0x6C, 0x57, 0xB1, 0x03, 0xFA, 0x3B, 0x21, 0x2E, 0x24, 0x33, 0x34, 0x2E, 0x6C, 0x57, 0x2A, 0x2A, 0x64, 0x7C, 0xFA, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x03, 0xE2, 0xA7, 0xDD, 0x57, 0x2A, 0x24, 0x26, 0x1C, 0x24, 0x33, 0x24, 0x24, 0x33, 0x33, 0x24, 0x2A, 0x57, 0x2A, 0x6C, 0x2A, 0x2E, 0x03, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x03, 0x84, 0x9F, 0x9F, 0x57, 0x2A, 0x55, 0x1D, 0x20, 0x23, 0xCB, 0x73, 0x52, 0x29, 0x21, 0x27, 0x29, 0x64, 0x2A, 0x2A, 0x24, 0x0F, 0x1A, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x03, 0x71, 0x7C, 0x57, 0x2A, 0x2A, 0x2E, 0x59, 0x67, 0x55, 0x23, 0x1C, 0xB1, 0x3B, 0x21, 0x25, 0x1C, 0x25, 0xA3, 0x84, 0x73, 0x03, 0x12, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0F, 0x25, 0x25, 0x03, 0x02, 0x0F, 0x25, 0x25, 0x09, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x12, 0x1A, 0xFA, 0x3B, 0x7C, 0x7C, 0x84, 0x85, 0x26, 0x17, 0x9C, 0x44, 0x29, 0x66, 0x24, 0x23, 0x4C, 0x03, 0x03, 0x03, 0x03, 0x09, 0x12, 0x12, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x02, 0x02, 0x12, 0x12, 0x12, 0x12, 0x02, 0x12, 0x12, 0x12, 0x02, 0x25, 0x04, 0x04, 0x0F, 0x02, 0x4C, 0x04, 0x04, 0x03, 0x02, 0x12, 0x12, 0x12, 0x02, 0x02, 0x12, 0x12, 0x12, 
        0x12, 0x12, 0x12, 0x12, 0x09, 0x03, 0x0F, 0xFA, 0x03, 0x03, 0x03, 0xFA, 0xA3, 0x32, 0x23, 0x24, 0x66, 0x29, 0x17, 0x09, 0x12, 0x1A, 0x1A, 0x12, 0x12, 0x12, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x12, 0x02, 0xFA, 0xB0, 0xB0, 0x03, 0x02, 0x17, 0x04, 0x04, 0x03, 0x02, 0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x12, 
        0x12, 0x12, 0x12, 0x12, 0x12, 0x1A, 0x1A, 0x1A, 0x1A, 0x12, 0x12, 0x03, 0x25, 0x44, 0x29, 0x71, 0x7B, 0x49, 0x17, 0x03, 0x03, 0x03, 0x03, 0x09, 0x12, 0x12, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x02, 0x03, 0x25, 0x25, 0x03, 0x1C, 0x1F, 0x20, 0xB0, 0x02, 0xFA, 0x25, 0xCB, 0x25, 0x09, 0x02, 0x02, 0xFA, 0x17, 0x17, 0x03, 0x02, 0x17, 0x04, 0x04, 0x03, 0x02, 0x02, 0x1A, 0x26, 0xA4, 0x27, 0xCE, 0x0F, 0x02, 
        0x12, 0x12, 0x12, 0x12, 0x09, 0x43, 0x53, 0x0F, 0x03, 0x1A, 0x12, 0x03, 0x17, 0x21, 0x66, 0x51, 0x49, 0x24, 0x25, 0x1C, 0xEA, 0x87, 0x4D, 0x53, 0x03, 0x1A, 0x02, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x02, 0x0F, 0x04, 0x04, 0x27, 0x04, 0x04, 0x04, 0x04, 0x1F, 0x61, 0x04, 0x04, 0x04, 0xCB, 0x02, 0x02, 0x8A, 0x04, 0x04, 0x0F, 0x02, 0x4C, 0x04, 0x04, 0x43, 0x02, 0x09, 0x27, 0x04, 0x04, 0x19, 0x04, 0x04, 0x17, 
        0x02, 0x12, 0x12, 0x09, 0x0F, 0xE8, 0xAB, 0x6E, 0x4D, 0x43, 0x03, 0x03, 0x25, 0x34, 0x34, 0x49, 0x49, 0x2E, 0x1F, 0x87, 0x6E, 0x88, 0x28, 0xE3, 0xF5, 0x03, 0x12, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x02, 0x0F, 0x04, 0x04, 0x19, 0xB0, 0x17, 0x54, 0x04, 0x04, 0x20, 0xB1, 0x1B, 0x04, 0x04, 0xFA, 0x02, 0x17, 0x04, 0x04, 0x0F, 0x02, 0x8A, 0x04, 0x04, 0x03, 0x02, 0xCE, 0x04, 0x19, 0xFA, 0x02, 0x25, 0x04, 0x54, 
        0x03, 0x02, 0x1A, 0x43, 0xEA, 0x5C, 0x5C, 0x4F, 0xE3, 0x8A, 0x0F, 0x73, 0xA3, 0x21, 0x29, 0x71, 0x2E, 0x2E, 0x4D, 0xE9, 0x4F, 0x4E, 0x28, 0x28, 0x6D, 0x0F, 0x12, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x02, 0x0F, 0x04, 0x04, 0x17, 0x02, 0x02, 0x9C, 0x04, 0x3E, 0x1A, 0x02, 0xB0, 0x04, 0x04, 0x1C, 0x02, 0x17, 0x04, 0x04, 0x0F, 0x02, 0x4C, 0x04, 0x04, 0x03, 0x09, 0x1D, 0x04, 0xCE, 0x02, 0x02, 0x09, 0x76, 0x04, 
        0x26, 0x02, 0x09, 0x0F, 0x89, 0x5C, 0x5C, 0x4F, 0x3F, 0xA8, 0x24, 0x4C, 0x81, 0x44, 0xB1, 0x2E, 0x2E, 0x3B, 0x89, 0x89, 0x4F, 0x88, 0x28, 0x28, 0x86, 0x4D, 0x09, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x12, 0x12, 0x12, 0x02, 0x0F, 0x04, 0x04, 0x17, 0x02, 0x12, 0x9C, 0x04, 0x9C, 0x09, 0x02, 0xB0, 0x04, 0x04, 0x1C, 0x02, 0x17, 0x04, 0x04, 0x0F, 0x02, 0x4C, 0x04, 0x04, 0x03, 0x03, 0x04, 0x04, 0x56, 0x3E, 0x1D, 0x1D, 0x04, 0x04, 
        0x25, 0x02, 0x09, 0xF6, 0xAB, 0x3F, 0x3F, 0x6E, 0x3F, 0xA0, 0x2C, 0x27, 0x27, 0x1D, 0x1C, 0xA3, 0x3B, 0x24, 0x6E, 0x4F, 0x4E, 0x88, 0x86, 0x28, 0x86, 0x4D, 0x03, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x1A, 0x1A, 0x1A, 0x02, 0x0F, 0x04, 0x04, 0x17, 0x02, 0x12, 0x9C, 0x04, 0x1B, 0x09, 0x02, 0xB0, 0x04, 0x04, 0x1C, 0x02, 0x17, 0x04, 0x04, 0x0F, 0x02, 0x8A, 0x04, 0x04, 0x03, 0x03, 0x04, 0x04, 0x3E, 0x20, 0x20, 0x20, 0xA4, 0xA4, 
        0x1C, 0x02, 0x09, 0xF6, 0x4F, 0x88, 0x4E, 0x4F, 0x88, 0xA0, 0x67, 0xA2, 0xBB, 0x2B, 0x81, 0x1C, 0x4C, 0x7B, 0xA8, 0x88, 0x4E, 0x28, 0x86, 0x86, 0x86, 0xB2, 0x09, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x1A, 0x1A, 0x1A, 0x02, 0x0F, 0x04, 0x04, 0x17, 0x02, 0x12, 0x9C, 0x04, 0x1B, 0x09, 0x02, 0xB0, 0x04, 0x04, 0x1C, 0x02, 0x17, 0x04, 0x04, 0x0F, 0x02, 0x8A, 0x04, 0x04, 0x03, 0x03, 0x19, 0x04, 0xCE, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x12, 0x1A, 0x09, 0x0F, 0x4F, 0x3F, 0x3F, 0x3F, 0x86, 0x37, 0x1C, 0xAF, 0x58, 0x19, 0x1D, 0x27, 0x9C, 0x7B, 0xC3, 0x28, 0x28, 0x28, 0x28, 0x86, 0x6D, 0x0F, 0x09, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x02, 0x1A, 0x1A, 0x1A, 0x02, 0x0F, 0x04, 0x04, 0x17, 0x02, 0x12, 0x9C, 0x04, 0x1B, 0x09, 0x02, 0xB0, 0x04, 0x04, 0x1C, 0x02, 0x17, 0x04, 0x04, 0x0F, 0x02, 0x8A, 0x04, 0x04, 0xFA, 0x02, 0x20, 0x04, 0x19, 0x73, 0x09, 0x03, 0xFA, 0xFA, 
        0x12, 0x1A, 0x1A, 0x03, 0xB2, 0x4E, 0x88, 0x28, 0x37, 0x43, 0x03, 0xFA, 0xA4, 0x2C, 0x55, 0x73, 0xCE, 0x34, 0x33, 0xC5, 0x6D, 0xE3, 0xE3, 0x87, 0xF5, 0x03, 0x12, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x12, 0x1A, 0x1A, 0x1A, 0x02, 0x0F, 0x04, 0x04, 0x4C, 0x02, 0x12, 0x1B, 0x04, 0x3E, 0x09, 0x02, 0x17, 0x04, 0x04, 0x1C, 0x02, 0x4C, 0x04, 0x04, 0x0F, 0x02, 0x25, 0x04, 0x04, 0xFA, 0x02, 0xFA, 0x1D, 0x04, 0x04, 0x1D, 0x61, 0x04, 0x1B, 
        0x12, 0x1A, 0x1A, 0x09, 0x03, 0x53, 0xB2, 0x72, 0x43, 0x09, 0x09, 0x43, 0xA3, 0x76, 0x21, 0xB1, 0x4C, 0x44, 0x1D, 0x67, 0x26, 0x53, 0x0F, 0xFA, 0x03, 0x09, 0x12, 0x22, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x12, 0x1A, 0x1A, 0x1A, 0x12, 0xFA, 0x1B, 0x1B, 0x26, 0x12, 0x12, 0xA3, 0x3E, 0xA3, 0x09, 0x02, 0xB1, 0x1B, 0x1B, 0x0F, 0x02, 0x26, 0x1B, 0x1B, 0xFA, 0x02, 0x26, 0x1B, 0x1B, 0x03, 0x12, 0x12, 0x03, 0x1F, 0x1B, 0x1D, 0x1B, 0xA3, 0x0F, 
        0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x03, 0x03, 0x03, 0x09, 0x1A, 0x09, 0x43, 0xA4, 0x76, 0x20, 0x71, 0x51, 0x9C, 0x19, 0xA4, 0x0F, 0x03, 0x09, 0x09, 0x1A, 0x1A, 0x12, 0x03, 0x0B, 0x0B,
  0x05, 0x05, 0x1E, 0x12, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x1A, 0x09, 0x09, 0x09, 0x1A, 0x1A, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x09, 0x09, 0x09, 0x1A, 0x1A, 0x1A, 0x12, 0x02, 0x12, 0x09, 0x12, 0x02, 0x12, 
        0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x09, 0x1A, 0x1A, 0x09, 0xFA, 0x1F, 0x55, 0x21, 0x55, 0x1D, 0x21, 0x2C, 0x20, 0xFA, 0x09, 0x1A, 0x1A, 0x1A, 0x1A, 0x12, 0x03, 0x0B, 0x0B,
  0x31, 0x05, 0x82, 0x12, 0x1A, 0x09, 0x09, 0x09, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x09, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x1A, 0x1A, 0x1A, 0x1A, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x1A, 0x1A, 0x09, 0x09, 
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x1A, 0x09, 0x03, 0x1F, 0x55, 0x2C, 0x2C, 0x2C, 0x19, 0x2C, 0x67, 0xFA, 0x09, 0x1A, 0x09, 0x09, 0x09, 0x12, 0x43, 0x0B, 0x0B,
  0x0E, 0x05, 0xD4, 0x22, 0x12, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x09, 0x03, 0x1F, 0x55, 0x55, 0x2C, 0x2C, 0x2C, 0x76, 0x7F, 0xFA, 0x09, 0x1A, 0x09, 0x09, 0x09, 0x12, 0x93, 0x0B, 0x4B,
  0x46, 0x05, 0x05, 0xF9, 0x12, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x43, 0xA3, 0x19, 0x55, 0x2C, 0x2C, 0x2C, 0x76, 0x58, 0x0F, 0x09, 0x09, 0x09, 0x09, 0x1A, 0x12, 0xDB, 0x14, 0x4A,
  0x75, 0x10, 0x05, 0xD4, 0x03, 0x12, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x03, 0x1F, 0x2C, 0x19, 0x19, 0x76, 0x76, 0x76, 0x1D, 0x73, 0x09, 0x09, 0x09, 0x1A, 0x12, 0x93, 0x0B, 0x14, 0x2D,
  0x04, 0x45, 0x05, 0x05, 0x82, 0xB3, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
        0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x03, 0x1F, 0x54, 0x19, 0x55, 0x19, 0x76, 0x04, 0x61, 0x53, 0x09, 0x12, 0x12, 0x09, 0xF8, 0x0B, 0x0B, 0xA5, 0x19,
  0x04, 0x04, 0x36, 0x05, 0x05, 0x31, 0xDC, 0xB3, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 
        0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x74, 0x3B, 0x98, 0x3A, 0x3A, 0x3A, 0x3A, 0x98, 0x3A, 0x8F, 0x43, 0x43, 0x93, 0xD8, 0x06, 0x0B, 0x06, 0xBE, 0xBB,
  0x61, 0x54, 0x76, 0x9A, 0x31, 0x05, 0x05, 0x31, 0x31, 0x31, 0x13, 0x13, 0x13, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x5B, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x5B, 0x5B, 0x4B, 0x06, 0x06, 0x06, 0x0B, 0x0B, 0xD6, 0x66, 0x3E, 0x27,
  0x1D, 0x1D, 0x19, 0x54, 0xB8, 0xD0, 0x10, 0x13, 0x31, 0x31, 0x13, 0x13, 0x13, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x2F, 0x2F, 0x06, 0x06, 0x06, 0x4B, 0x4A, 0x47, 0x19, 0x59, 0x7F, 0x19
};

GUI_CONST_STORAGE GUI_BITMAP bmOneQuarterOn = {
  72, /* XSize */
  65, /* YSize */
  72, /* BytesPerLine */
  8, /* BitsPerPixel */
  acOneQuarterOn,  /* Pointer to picture data (indices) */
  &PalOneQuarterOn  /* Pointer to palette */
};

/* *** End of file *** */