//*****************************************************************************
//
// images.c - Data for the images used by the application.
//
// Copyright (c) 2008-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 10636 of the RDK-IDM-SBC Firmware Package.
//
//*****************************************************************************

#include "grlib/grlib.h"

//*****************************************************************************
//
// This is the image of the blue push button background.
//
//*****************************************************************************
const unsigned char g_pucBlue50x50[] =
{
    IMAGE_FMT_4BPP_COMP,
    50, 0,
    50, 0,

    15,
    0x00, 0x00, 0x00,
    0x23, 0x00, 0x00,
    0x52, 0x00, 0x00,
    0x63, 0x00, 0x00,
    0x6f, 0x00, 0x00,
    0x78, 0x00, 0x00,
    0x7c, 0x00, 0x00,
    0x7d, 0x00, 0x00,
    0x7f, 0x00, 0x00,
    0x81, 0x00, 0x00,
    0x85, 0x00, 0x00,
    0x89, 0x00, 0x00,
    0x8d, 0x00, 0x00,
    0x93, 0x00, 0x00,
    0x9b, 0x00, 0x00,
    0xa9, 0x00, 0x00,

    0x81, 0x03, 0x13, 0x9e, 0xfe, 0xff, 0xff, 0xff, 0xe9, 0x8a, 0xd1, 0xfe,
    0xd7, 0x31, 0x07, 0x2e, 0x51, 0xee, 0x35, 0xee, 0xee, 0xe9, 0xd4, 0xa2,
    0x35, 0x1e, 0x41, 0x41, 0xfe, 0x3f, 0xee, 0xee, 0xdd, 0xcc, 0x91, 0x33,
    0x40, 0x03, 0x41, 0xee, 0xee, 0xed, 0xdd, 0xdd, 0xdd, 0xc1, 0xe9, 0xd1,
    0xdc, 0xcd, 0xcc, 0xaa, 0x20, 0x32, 0x41, 0x3f, 0x41, 0xed, 0xdc, 0xcc,
    0xcc, 0xcc, 0xe9, 0x81, 0xd1, 0xbb, 0xbb, 0xcc, 0xcb, 0xba, 0x52, 0x39,
    0x40, 0x03, 0x42, 0xcc, 0xba, 0xaa, 0x99, 0x99, 0x99, 0xc0, 0xe9, 0xd1,
    0xaa, 0xaa, 0xab, 0xa9, 0x95, 0x20, 0x04, 0x00, 0x00, 0x1f, 0xff, 0xfe,
    0x41, 0x99, 0x98, 0x1c, 0x88, 0x88, 0x88, 0xe9, 0xd1, 0x29, 0x99, 0x98,
    0x00, 0x41, 0x00, 0x00, 0xef, 0xff, 0xee, 0xdc, 0xba, 0x60, 0x99, 0x4f,
    0x01, 0x89, 0x99, 0x99, 0x98, 0x53, 0x01, 0x00, 0x02, 0xff, 0xfe, 0xed,
    0xcb, 0xa9, 0x47, 0x80, 0x35, 0x98, 0x64, 0x10, 0x0d, 0xef, 0xee, 0xdc,
    0x30, 0xba, 0x98, 0x3f, 0x04, 0x99, 0x88, 0x54, 0x30, 0x06, 0x1e, 0xfe,
    0xed, 0xcb, 0xa9, 0x47, 0x06, 0x86, 0x01, 0x55, 0x41, 0x3e, 0xfe, 0xed,
    0xba, 0x98, 0x3f, 0x81, 0x3f, 0x65, 0x41, 0x5e, 0xee, 0xdc, 0xb9, 0x47,
    0x80, 0x07, 0x88, 0x65, 0x42, 0xbd, 0xee, 0xdb, 0xa9, 0xe1, 0x3f, 0x3f,
    0x39, 0xcc, 0xed, 0xcb, 0x98, 0x3f, 0x81, 0x3f, 0x88, 0x65, 0x43, 0xcc,
    0xdd, 0xca, 0x3f, 0xc3, 0x3f, 0x39, 0x42, 0xcb, 0xdc, 0xba, 0x3f, 0x3f,
    0xb0, 0x3c, 0xb9, 0x47, 0x07, 0x88, 0x88, 0x75, 0x32, 0x18, 0xcb, 0xdc,
    0xa9, 0x3f, 0x07, 0x88, 0x88, 0x65, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0xf8, 0x3f, 0x3f, 0x3f, 0x07, 0x01, 0x64, 0x32, 0xcb,
    0x73, 0xcc, 0x3f, 0x3f, 0x3b, 0x9b, 0xcb, 0x3f, 0x07, 0x00, 0x88, 0x88,
    0x87, 0x54, 0x32, 0x4a, 0xba, 0x99, 0x60, 0x98, 0x37, 0x07, 0x86, 0x54,
    0x32, 0x2a, 0xaa, 0x60, 0xa9, 0x47, 0x07, 0x88, 0x75, 0x43, 0x21, 0x19,
    0x30, 0x8a, 0x99, 0x3f, 0x07, 0x88, 0x65, 0x43, 0x21, 0x0c, 0x04, 0x49,
    0x98, 0x98, 0x37, 0x06, 0x86, 0x54, 0x06, 0x33, 0x20, 0x02, 0x46, 0x68,
    0x47, 0x07, 0x76, 0x01, 0x54, 0x32, 0x10, 0x00, 0x44, 0x66, 0x66, 0x2f,
    0x80, 0x05, 0x87, 0x65, 0x43, 0x32, 0x00, 0x00, 0x13, 0x18, 0x45, 0x55,
    0x66, 0x3f, 0x04, 0x66, 0x54, 0x33, 0x00, 0x21, 0x00, 0x00, 0x01, 0x34,
    0x45, 0x56, 0x66, 0x60, 0x78, 0x2f, 0x01, 0x76, 0x54, 0x43, 0x32, 0x10,
    0x01, 0x00, 0x00, 0x00, 0x12, 0x44, 0x45, 0x55, 0x37, 0x82, 0x01, 0x66,
    0x55, 0x44, 0x33, 0x21, 0x41, 0x00, 0x00, 0x01, 0x23, 0x44, 0x44, 0x55,
    0x56, 0x66, 0x66, 0x60, 0x66, 0xe9, 0xd1, 0x65, 0x54, 0x44, 0x33, 0x22,
    0x40, 0x10, 0x3a, 0x00, 0x12, 0x33, 0x34, 0x44, 0x44, 0x61, 0x44, 0xe9,
    0xd4, 0x43, 0x33, 0x22, 0x21, 0x43, 0x86, 0x31, 0x23, 0x33, 0x33, 0x33,
    0xe9, 0xd4, 0x32, 0x80, 0x47, 0x00, 0x00, 0x01, 0x12, 0x22, 0x22, 0x22,
    0xc8, 0xe9, 0xd3, 0x21, 0x10, 0x43,
};

//*****************************************************************************
//
// This is the image of the blue push button background, used when the buttons
// are pressed.
//
//*****************************************************************************
const unsigned char g_pucBlue50x50Press[] =
{
    IMAGE_FMT_4BPP_COMP,
    50, 0,
    50, 0,

    15,
    0x00, 0x00, 0x00,
    0x23, 0x00, 0x00,
    0x52, 0x00, 0x00,
    0x63, 0x00, 0x00,
    0x6f, 0x00, 0x00,
    0x78, 0x00, 0x00,
    0x7c, 0x00, 0x00,
    0x7d, 0x00, 0x00,
    0x7f, 0x00, 0x00,
    0x81, 0x00, 0x00,
    0x85, 0x00, 0x00,
    0x89, 0x00, 0x00,
    0x8d, 0x00, 0x00,
    0x93, 0x00, 0x00,
    0x9b, 0x00, 0x00,
    0xa9, 0x00, 0x00,

    0x83, 0x03, 0x01, 0x12, 0x22, 0x22, 0x22, 0xe9, 0xd3, 0x20, 0x21, 0x10,
    0x07, 0x12, 0x22, 0x23, 0x33, 0x33, 0x64, 0x33, 0xe9, 0xd4, 0x32, 0x21,
    0x47, 0x33, 0x34, 0x19, 0x44, 0x44, 0x44, 0xe9, 0xd4, 0x43, 0x33, 0x34,
    0x00, 0x01, 0x22, 0x33, 0x44, 0x45, 0x56, 0x66, 0x66, 0x60, 0x66, 0xe9,
    0xd1, 0x65, 0x55, 0x44, 0x44, 0x32, 0x40, 0x10, 0x32, 0x12, 0x33, 0x44,
    0x55, 0x66, 0x88, 0x30, 0x88, 0x88, 0xe9, 0xd2, 0x87, 0x66, 0x55, 0x54,
    0x20, 0x44, 0x21, 0x39, 0x01, 0x23, 0x34, 0x45, 0x67, 0xc0, 0x47, 0x33,
    0x65, 0x54, 0x43, 0x10, 0x00, 0x00, 0x0c, 0x12, 0x33, 0x45, 0x66, 0x47,
    0x04, 0x66, 0x55, 0x00, 0x54, 0x31, 0x00, 0x00, 0x23, 0x34, 0x56, 0x78,
    0xc0, 0x3f, 0x04, 0x86, 0x66, 0x66, 0x44, 0x00, 0x01, 0x18, 0x23, 0x45,
    0x67, 0x47, 0x2f, 0x86, 0x64, 0x20, 0x0c, 0x02, 0x33, 0x45, 0x68, 0x3f,
    0x06, 0x89, 0x89, 0x06, 0x94, 0x40, 0x12, 0x34, 0x56, 0x47, 0x07, 0x88,
    0x03, 0x99, 0xa8, 0x91, 0x12, 0x34, 0x57, 0x3f, 0x07, 0x01, 0x88, 0x9a,
    0xaa, 0xa2, 0x23, 0x45, 0x68, 0x3f, 0x80, 0x07, 0x89, 0x99, 0xab, 0xa4,
    0x23, 0x45, 0x78, 0xc0, 0x3f, 0x07, 0x88, 0x9a, 0xbc, 0xb9, 0x23, 0x46,
    0xe7, 0x47, 0x3f, 0x39, 0xcc, 0xbc, 0x3f, 0x3f, 0x3b, 0x0f, 0xcd, 0xbc,
    0x23, 0x56, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0xb0, 0x39, 0x57, 0x3f, 0x07, 0x88, 0x88, 0x9b, 0xcd,
    0x18, 0xbc, 0x24, 0x56, 0x3f, 0x07, 0x88, 0x89, 0xab, 0xe1, 0x3f, 0x3f,
    0x3c, 0xac, 0xdd, 0xcc, 0x34, 0x3f, 0xc3, 0x3f, 0x39, 0xbc, 0xde, 0xcc,
    0x24, 0x3f, 0x07, 0x03, 0x88, 0x88, 0x9a, 0xbd, 0xee, 0xdb, 0x3f, 0x07,
    0x80, 0x01, 0x9b, 0xcd, 0xee, 0xe5, 0x14, 0x56, 0x68, 0xc0, 0x37, 0x06,
    0x89, 0xab, 0xde, 0xef, 0xe3, 0x14, 0x60, 0x55, 0x3f, 0x07, 0x9a, 0xbc,
    0xde, 0xef, 0xe1, 0x0c, 0x03, 0x45, 0x88, 0x99, 0x37, 0x04, 0x89, 0xab,
    0x00, 0xcd, 0xee, 0xfe, 0xd0, 0x01, 0x46, 0x89, 0x99, 0x60, 0x98, 0x37,
    0x03, 0x9a, 0xbc, 0xde, 0xef, 0xff, 0x06, 0x20, 0x00, 0x35, 0x89, 0x99,
    0x37, 0x03, 0x99, 0x00, 0xab, 0xcd, 0xee, 0xff, 0xfe, 0x00, 0x00, 0x14,
    0x04, 0x89, 0x99, 0xaa, 0x99, 0x99, 0x37, 0x89, 0x99, 0x00, 0xab, 0xcc,
    0xde, 0xef, 0xff, 0xf1, 0x00, 0x00, 0x05, 0x02, 0x59, 0x9a, 0xba, 0xaa,
    0x29, 0x99, 0xe9, 0xa0, 0xd1, 0xaa, 0x41, 0xee, 0xff, 0xff, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x25, 0xab, 0xbc, 0xcc, 0xbb, 0xbb, 0x1a, 0xcc, 0xcc,
    0xcc, 0xe9, 0xd1, 0xcd, 0x42, 0xf3, 0x80, 0x41, 0x00, 0x02, 0xaa, 0xcc,
    0xdc, 0xcd, 0xdd, 0x32, 0xdd, 0xdd, 0xe9, 0xd1, 0xde, 0xee, 0x41, 0xff,
    0x40, 0x30, 0x3a, 0x00, 0x19, 0xcc, 0xdd, 0xee, 0xee, 0x6a, 0xee, 0xe9,
    0xd3, 0xef, 0x41, 0xe1, 0x43, 0x00, 0x3a, 0x00, 0x2a, 0x47, 0x01, 0x41,
    0xe2, 0x45, 0x00, 0x0e, 0x00, 0x13, 0x7d, 0xef, 0x81, 0x69, 0x51, 0xef,
    0x20, 0xe9, 0x31, 0x43,
};