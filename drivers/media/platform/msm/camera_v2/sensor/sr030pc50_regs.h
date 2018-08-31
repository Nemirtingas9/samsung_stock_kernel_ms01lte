/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef	__SR030PC50_REGS_H__
#define __SR030PC50_REGS_H__

static struct msm_camera_i2c_reg_conf sr030pc50_init_regs[]= {
{0x03, 0x00,},
{0x01, 0x71,},
{0x01, 0x73,},
{0x01, 0x71,},

{0x03, 0x00,},

{0x08, 0x0F,},
{0x10, 0x00,},
{0x11, 0x80,},
{0x12, 0x00,},
{0x14, 0x88,},

{0x0b, 0xaa,},
{0x0c, 0xaa,},
{0x0d, 0xaa,},

{0xC0, 0x95,},
{0xC1, 0x18,},
{0xC2, 0x91,},
{0xC3, 0x00,},
{0xC4, 0x01,},

{0x03, 0x20,},
{0x10, 0x0C,},
{0x03, 0x22,},
{0x10, 0x7B,},

{0x03, 0x00,},
{0x12, 0x00,},
{0x20, 0x00,},
{0x21, 0x04,},
{0x22, 0x00,},
{0x23, 0x04,},

{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x62,}, //98 25.08fix

{0x80, 0x2E,},
{0x81, 0x7E,},
{0x82, 0x90,},
{0x83, 0x30,},
{0x84, 0x2C,},
{0x85, 0x4B,},
{0x86, 0x01,},
{0x88, 0x47,},
{0x90, 0x0f,},
{0x91, 0x0f,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x98, 0x38,},
{0x99, 0x40,},
{0xA0, 0x40,},
{0xA8, 0x42,},

//Page2 Last Update 12_01_20
{0x03, 0x02,},
{0x10, 0x00,},
{0x11, 0x00,},
{0x13, 0x40,},
{0x14, 0x04,},
{0x18, 0x1C,},
{0x19, 0x00,},
{0x1A, 0x00,},
{0x1B, 0x08,},
{0x1C, 0x9C,},
{0x1D, 0x03,},
{0x20, 0x33,},
{0x21, 0x77,},
{0x22, 0xA7,},
{0x23, 0x32,},
{0x24, 0x33,},
{0x2B, 0x40,},
{0x2D, 0x32,},
{0x31, 0x99,},
{0x32, 0x00,},
{0x33, 0x00,},
{0x34, 0x3C,},
{0x35, 0x0D,},
{0x3B, 0x60,},

//timing control 1 // //don't touch
{0x50, 0x21,},
{0x51, 0x1C,},
{0x52, 0xAA,},
{0x53, 0x5A,},
{0x54, 0x30,},
{0x55, 0x10,},
{0x56, 0x0C,},
{0x58, 0x00,},
{0x59, 0x0F,},

//timing control 2 // //don't touch
{0x60, 0x34,},
{0x61, 0x3A,},
{0x62, 0x34,},
{0x63, 0x39,},
{0x64, 0x34,},
{0x65, 0x39,},
{0x72, 0x35,},
{0x73, 0x38,},
{0x74, 0x35,},
{0x75, 0x38,},
{0x80, 0x02,},
{0x81, 0x2E,},
{0x82, 0x0D,},
{0x83, 0x10,},
{0x84, 0x0D,},
{0x85, 0x10,},
{0x92, 0x1D,},
{0x93, 0x20,},
{0x94, 0x1D,},
{0x95, 0x20,},
{0xA0, 0x03,},
{0xA1, 0x2D,},
{0xA4, 0x2D,},
{0xA5, 0x03,},
{0xA8, 0x12,},
{0xA9, 0x1B,},
{0xAA, 0x22,},
{0xAB, 0x2B,},
{0xAC, 0x10,},
{0xAD, 0x0E,},
{0xB8, 0x33,},
{0xB9, 0x35,},
{0xBC, 0x0C,},
{0xBD, 0x0E,},
{0xc0, 0x3a,},
{0xc1, 0x3f,},
{0xc2, 0x3a,},
{0xc3, 0x3f,},
{0xc4, 0x3a,},
{0xc5, 0x3e,},
{0xc6, 0x3a,},
{0xc7, 0x3e,},
{0xc8, 0x3a,},
{0xc9, 0x3e,},
{0xca, 0x3a,},
{0xcb, 0x3e,},
{0xcc, 0x3b,},
{0xcd, 0x3d,},
{0xce, 0x3b,},
{0xcf, 0x3d,},
{0xd0, 0x33,},
{0xd1, 0x3f,},

//Page 10
{0x03, 0x10,},
{0x10, 0x01,},
{0x11, 0x43,},
{0x12, 0x30,},
{0x40, 0x80,},
{0x41, 0x02,},
{0x48, 0x80,},
{0x50, 0x48,},

{0x60, 0x01,},
{0x61, 0x00,},
{0x62, 0x7c,},
{0x63, 0x80,},
{0x64, 0x48,},
{0x66, 0x90,},
{0x67, 0x36,},

{0x80, 0x00,},

//Page 11
//LPF
{0x03, 0x11,},
{0x10, 0x25,},
{0x11, 0x07,},
{0x20, 0x00,},
{0x21, 0x60,},
{0x23, 0x0A,},
{0x60, 0x12,},
{0x61, 0x85,},
{0x62, 0x00,},
{0x63, 0x00,},
{0x64, 0x00,},

{0x67, 0x70,},
{0x68, 0x24,},
{0x69, 0x04,},

//Page 12
//2D
{0x03, 0x12,},
{0x40, 0xD3,},
{0x41, 0x09,},
{0x50, 0x16,},
{0x51, 0x24,},
{0x70, 0x1F,},
{0x71, 0x00,},
{0x72, 0x00,},
{0x73, 0x00,},
{0x74, 0x12,},
{0x75, 0x12,},
{0x76, 0x20,},
{0x77, 0x80,},
{0x78, 0x88,},
{0x79, 0x18,},

///////////////////////
{0x90, 0x3d,},
{0x91, 0x34,},
{0x99, 0x28,},
{0x9c, 0x05,},
{0x9d, 0x08,},
{0x9e, 0x28,},
{0x9f, 0x28,},
{0xb0, 0x7d,},
{0xb5, 0x44,},
{0xb6, 0x82,},
{0xb7, 0x52,},
{0xb8, 0x44,},
{0xb9, 0x15,},
///////////////////////

//Edge
{0x03, 0x13,},
{0x10, 0x01,},
{0x11, 0x89,},
{0x12, 0x14,},
{0x13, 0x19,},
{0x14, 0x08,},
{0x20, 0x03,},
{0x21, 0x05,},
{0x23, 0x25,},
{0x24, 0x21,},
{0x25, 0x08,},
{0x26, 0x40,},
{0x27, 0x00,},
{0x28, 0x08,},
{0x29, 0x50,},
{0x2A, 0xE0,},
{0x2B, 0x10,},
{0x2C, 0x28,},
{0x2D, 0x40,},
{0x2E, 0x00,},
{0x2F, 0x00,},
{0x30, 0x11,},
{0x80, 0x05,},
{0x81, 0x07,},
{0x90, 0x05,},
{0x91, 0x05,},
{0x92, 0x00,},
{0x93, 0x30,},
{0x94, 0x30,},
{0x95, 0x10,},

{0x03, 0x14,},
{0x10, 0x01,},

{0x22, 0x58,},
{0x23, 0x45,},
{0x24, 0x44,},

{0x27, 0x58,},
{0x28, 0x80,},
{0x29, 0x58,},
{0x2a, 0x80,},
{0x2b, 0x58,},
{0x2c, 0x80,},

//15page//////////////////////////
{0x03, 0x15,},
{0x10, 0x03,},

{0x14, 0x52,},
{0x16, 0x3a,},
{0x17, 0x2f,},

//CMC
{0x30, 0xf1,},
{0x31, 0x71,},
{0x32, 0x00,},
{0x33, 0x1f,},
{0x34, 0xe1,},
{0x35, 0x42,},
{0x36, 0x01,},
{0x37, 0x31,},
{0x38, 0x72,},
//CMC OFS
{0x40, 0x90,},
{0x41, 0x82,},
{0x42, 0x12,},
{0x43, 0x86,},
{0x44, 0x92,},
{0x45, 0x18,},
{0x46, 0x84,},
{0x47, 0x02,},
{0x48, 0x02,},

{0x03, 0x16,},
{0x10, 0x01,},
{0x30, 0x00,},
{0x31, 0x06,},
{0x32, 0x21,},
{0x33, 0x36,},
{0x34, 0x58,},
{0x35, 0x75,},
{0x36, 0x8e,},
{0x37, 0xa3,},
{0x38, 0xb4,},
{0x39, 0xc3,},
{0x3a, 0xcf,},
{0x3b, 0xe2,},
{0x3c, 0xf0,},
{0x3d, 0xf9,},
{0x3e, 0xff,},

//Page 17 AE
{0x03, 0x17,},
{0xC4, 0x3C,},
{0xC5, 0x32,},

//Page 20 AE
{0x03, 0x20,},
{0x10, 0x0C,},
{0x11, 0x04,},

{0x20, 0x01,},
{0x28, 0x27,},
{0x29, 0xA1,},

{0x2A, 0xF0,},
{0x2B, 0xf4,},
{0x2C, 0x2B,},

{0x30, 0xf8,},

{0x3B, 0x22,},
{0x3C, 0xDE,},

{0x39, 0x22,},
{0x3A, 0xDE,},
{0x3B, 0x22,},
{0x3C, 0xDE,},

{0x60, 0x70,},
{0x61, 0x20,},

{0x62, 0x70,},
{0x63, 0x20,},

{0x68, 0x28,},
{0x69, 0x79,},
{0x6A, 0x2C,},
{0x6B, 0xC4,},

{0x70, 0x34,},

{0x76, 0x11,},
{0x77, 0x72,},

{0x78, 0x12,},
{0x79, 0x26,},
{0x7A, 0x23,},

{0x7C, 0x17,},
{0x7D, 0x22,},

{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},

{0x86, 0x00,},
{0x87, 0xc8,},

{0x88, 0x02,},
{0x89, 0xdc,},
{0x8a, 0x6c,},

{0x8B, 0x3a,},
{0x8C, 0x98,},
{0x8D, 0x30,},
{0x8E, 0xd4,},

{0x98, 0x8C,},
{0x99, 0x23,},

{0x9c, 0x04,},
{0x9d, 0x4c,},
{0x9e, 0x00,},
{0x9f, 0xc8,},

{0xB0, 0x1D,},
{0xB1, 0x14,},
{0xB2, 0xA0,},
{0xB3, 0x17,},
{0xB4, 0x17,},
{0xB5, 0x3E,},
{0xB6, 0x2B,},
{0xB7, 0x24,},
{0xB8, 0x21,},
{0xB9, 0x1F,},
{0xBA, 0x1E,},
{0xBB, 0x1D,},
{0xBC, 0x1C,},
{0xBD, 0x1B,},

{0xC0, 0x1A,},
{0xC3, 0x48,},
{0xC4, 0x48,},

//Page 22 AWB
{0x03, 0x22,},
{0x10, 0xE2,},
{0x11, 0x2E,},
{0x20, 0x41,},
{0x21, 0x40,},
{0x24, 0xFE,},

{0x30, 0x80,},
{0x31, 0x80,},
{0x38, 0x12,},
{0x39, 0x33,},
{0x40, 0xF3,},
{0x41, 0x43,},
{0x42, 0x33,},
{0x43, 0xF3,},
{0x44, 0x88,},
{0x45, 0x66,},
{0x46, 0x08,},
{0x47, 0x63,},

{0x80, 0x38,},
{0x81, 0x20,},
{0x82, 0x38,},

{0x83, 0x5A,},
{0x84, 0x24,},
{0x85, 0x55,},
{0x86, 0x24,},

{0x87, 0x44,},
{0x88, 0x33,},
{0x89, 0x3e,},
{0x8a, 0x34,},

{0x8b, 0x03,},
{0x8d, 0x22,},
{0x8e, 0x21,},

{0x8F, 0x63,},
{0x90, 0x62,},
{0x91, 0x5E,},
{0x92, 0x5A,},
{0x93, 0x50,},
{0x94, 0x42,},
{0x95, 0x3B,},
{0x96, 0x34,},
{0x97, 0x2D,},
{0x98, 0x2B,},
{0x99, 0x29,},
{0x9A, 0x27,},
{0x9B, 0x0B,},
{0xB4, 0xBF,},

///////////////////////////// Page 48
{0x03, 0x48,},
{0x10, 0x05,},
{0x11, 0x00,},
{0x12, 0x00,},
{0x16, 0xc4,},
{0x17, 0x00,},
{0x19, 0x00,},
{0x1A, 0x04,},
{0x1C, 0x02,},
{0x1D, 0x05,}, //THS-PREPARE
{0x1E, 0x07,},
{0x1F, 0x04,},
{0x20, 0x00,},
{0x21, 0xb8,},
{0x22, 0x00,},
{0x23, 0x01,},
{0x30, 0x05,},
{0x31, 0x00,},
{0x32, 0x06,},
{0x34, 0x01,},
{0x35, 0x02,},
{0x36, 0x01,},
{0x37, 0x03,},
{0x38, 0x00,},
{0x39, 0x4a,},
{0x3C, 0x00,},
{0x3D, 0xFA,},
{0x3F, 0x10,},
{0x40, 0x00,},
{0x41, 0x20,},
{0x42, 0x00,},
{0x03, 0x22,},
{0x10, 0xFB,},
{0x03, 0x20,},
{0x10, 0x8C,},
{0x03, 0x00,},
{0x01, 0x70,},

{0xff, 0x14,}, //200ms
};
//==========================================================
//  EFFECT(6)
//==========================================================
static struct msm_camera_i2c_reg_conf sr030pc50_effect_normal_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x30,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_effect_negative_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x38,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_effect_sepia_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x30,},
{0xff, 0x03,},
{0x44, 0x70,},
{0x45, 0x98,},
{0x12, 0x33,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_effect_mono_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x30,},
{0xff, 0x03,},
{0x44, 0x80,},
{0x45, 0x80,},
{0x12, 0x33,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},
};


//==========================================================
// WB(5) -START
//==========================================================


static struct msm_camera_i2c_reg_conf sr030pc50_wb_auto_regs[] = {
{0x03, 0x22,},
{0x10, 0xe2,},
{0x11, 0x2e,},
{0x80, 0x3d,}, //3a //3c
{0x81, 0x20,},
{0x82, 0x40,},
{0x83, 0x5a,}, //RMAX
{0x84, 0x20,}, //(0216_kjh20>>23) RMIN
{0x85, 0x56,}, //(0216_kjh5c>>5a) BMAX //51
{0x86, 0x24,}, //BMIN //20
{0x10, 0xfb,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_wb_daylight_regs[] = {
{0x03, 0x22,}, //MWB Sunny
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x3f,}, //52 R Gain
{0x81, 0x20,}, //G Gain
{0x82, 0x30,}, //B Gain
{0x83, 0x3a,}, //R Max //41
{0x84, 0x3a,}, //R Min
{0x85, 0x38,}, //B Max
{0x86, 0x2a,}, //B Min //2f
{0x10, 0xfb,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_wb_cloudy_regs[] = {
{0x03, 0x22,}, //MWB Cloudy
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x4f,}, //R Gain
{0x81, 0x20,}, //G Gain
{0x82, 0x25,}, //B Gain
{0x83, 0x53,}, //R Max
{0x84, 0x48,}, //R Min
{0x85, 0x35,}, //B Max
{0x86, 0x2b,}, //B Min
{0x10, 0xfb,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_wb_incandescent_regs[] = {
{0x03, 0x22,},
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x20,},
{0x81, 0x20,},
{0x82, 0x57,},
{0x83, 0x21,},
{0x84, 0x1d,},
{0x85, 0x59,},
{0x86, 0x56,},
{0x10, 0xfb,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_wb_fluorescent_regs[] = {
{0x03, 0x22,},
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x42,},
{0x81, 0x20,},
{0x82, 0x51,},
{0x83, 0x4a,},
{0x84, 0x3a,},
{0x85, 0x55,},
{0x86, 0x45,},
{0x10, 0xfb,},
};

//==========================================================
// WB(5)  --END
//==========================================================


//==========================================================
// BRIGHTNES(9) - START
//==========================================================

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_4_regs[] = {
{0x03, 0x10,},
{0x40, 0xD0,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_3_regs[] = {
{0x03, 0x10,},
{0x40, 0xB0,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_2_regs[] = {
{0x03, 0x10,},
{0x40, 0xA0,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_1_regs[] = {
{0x03, 0x10,},
{0x40, 0x90,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_default_regs[] = {
 {0x03, 0x10,},
 {0x40, 0x80,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_1_regs[] = {
{0x03, 0x10,},
{0x40, 0x10,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_2_regs[] = {
{0x03, 0x10,},
{0x40, 0x20,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_3_regs[] = {
{0x03, 0x10,},
{0x40, 0x30,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_4_regs[] = {
{0x03, 0x10,},
{0x40, 0x50,},
};
// ==========================================================
// BRIGHTNES(9) - END
//==========================================================

static struct msm_camera_i2c_reg_conf sr030pc50_fps_auto_normal_regs[] = {
{0x03, 0x00,},
{0x01, 0xf1,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x62,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0xf0,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x02,},
{0x89, 0xdc,},
{0x8a, 0x6c,},
{0x03, 0x20,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x90,},
{0x01, 0x70,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_auto_dark_regs[] = {
{0x03, 0x00,},
{0x01, 0xf1,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x62,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0xf0,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x02,},
{0x84, 0xdc,},
{0x85, 0x6c,},
{0x88, 0x02,},
{0x89, 0xdc,},
{0x8a, 0x6c,},
{0x03, 0x20,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x90,},
{0x01, 0xf0,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_5_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x14,},
{0x90, 0x10,},
{0x91, 0x10,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x03,},
{0x89, 0xd0,},
{0x8a, 0x90,},
{0x91, 0x04,},
{0x92, 0x93,},
{0x93, 0xe0,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0x03, 0x00,},
{0x50, 0x00,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_7_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x14,},
{0x90, 0x0c,},
{0x91, 0x0c,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x02,},
{0x89, 0xdc,},
{0x8a, 0x6c,},
{0x91, 0x03,},
{0x92, 0x44,},
{0x93, 0xb8,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0x03, 0x00,},
{0x50, 0x00,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_10_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x14,},
{0x90, 0x09,},
{0x91, 0x09,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x01,},
{0x89, 0xe8,},
{0x8a, 0x48,},
{0x91, 0x02,},
{0x92, 0x49,},
{0x93, 0xf0,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0x03, 0x00,},
{0x50, 0x00,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_15_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x14,},
{0x90, 0x06,},
{0x91, 0x06,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x01,},
{0x89, 0x55,},
{0x8a, 0xcc,},
{0x91, 0x01,},
{0x92, 0x86,},
{0x93, 0xa0,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0x03, 0x00,},
{0x50, 0x00,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_20_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x14,},
{0x90, 0x04,},
{0x91, 0x04,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x00,},
{0x89, 0xf4,},
{0x8a, 0x24,},
{0x91, 0x01,},
{0x92, 0x24,},
{0x93, 0xf8,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0x03, 0x00,},
{0x50, 0x00,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_25_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x90,},
{0x42, 0x00,},
{0x43, 0x14,},
{0x90, 0x03,},
{0x91, 0x03,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0xc3,},
{0x85, 0x50,},
{0x88, 0x00,},
{0x89, 0xc3,},
{0x8a, 0x50,},
{0x91, 0x00,},
{0x92, 0xf4,},
{0x93, 0x24,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0xff, 0x28,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_30_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,},
{0x41, 0x7c,},
{0x42, 0x00,},
{0x43, 0x02,},
{0x90, 0x03,},
{0x91, 0x03,},
{0x92, 0x98,},
{0x93, 0x90,},
{0x03, 0x20,},
{0x10, 0x0c,},
{0x2a, 0x90,},
{0x2b, 0xf4,},
{0x30, 0xf8,},
{0x83, 0x00,},
{0x84, 0x92,},
{0x85, 0x40,},
{0x88, 0x00,},
{0x89, 0x92,},
{0x8a, 0x40,},
{0x91, 0x00,},
{0x92, 0xc3,},
{0x93, 0x00,},
{0x10, 0x8c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0x03, 0x00,},
{0x50, 0x00,},
{0xff, 0x28,},
};

#endif
