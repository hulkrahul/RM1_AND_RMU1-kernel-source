/*
* HDMI support
*
* Copyright (C) 2013 ITE Tech. Inc.
* Author: Hermes Wu <hermes.wu@ite.com.tw>
*
* HDMI TX driver for IT66121
*
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License version 2 as published by
* the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along with
* this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "itx_config.h"
#include "itx_typedef.h"

#if (defined(SUPPORT_OUTPUTYUV)) && (defined(SUPPORT_INPUTRGB))

unsigned char bCSCMtx_RGB2YUV_ITU601_16_235[] = {
	0x00, 0x80, 0x00,
	0xB2, 0x04, 0x65, 0x02, 0xE9, 0x00,
	0x93, 0x3C, 0x18, 0x04, 0x55, 0x3F,
	0x49, 0x3D, 0x9F, 0x3E, 0x18, 0x04
};

unsigned char bCSCMtx_RGB2YUV_ITU601_0_255[] = {
	0x10, 0x80, 0x10,
	0x09, 0x04, 0x0E, 0x02, 0xC9, 0x00,
	0x0F, 0x3D, 0x84, 0x03, 0x6D, 0x3F,
	0xAB, 0x3D, 0xD1, 0x3E, 0x84, 0x03
};

unsigned char bCSCMtx_RGB2YUV_ITU709_16_235[] = {
	0x00, 0x80, 0x00,
	0xB8, 0x05, 0xB4, 0x01, 0x94, 0x00,
	0x4a, 0x3C, 0x17, 0x04, 0x9F, 0x3F,
	0xD9, 0x3C, 0x10, 0x3F, 0x17, 0x04
};

unsigned char bCSCMtx_RGB2YUV_ITU709_0_255[] = {
	0x10, 0x80, 0x10,
	0xEa, 0x04, 0x77, 0x01, 0x7F, 0x00,
	0xD0, 0x3C, 0x83, 0x03, 0xAD, 0x3F,
	0x4B, 0x3D, 0x32, 0x3F, 0x83, 0x03
};
#endif

#if (defined(SUPPORT_OUTPUTRGB)) && (defined(SUPPORT_INPUTYUV))

unsigned char bCSCMtx_YUV2RGB_ITU601_16_235[] = {
	0x00, 0x00, 0x00,
	0x00, 0x08, 0x6B, 0x3A, 0x50, 0x3D,
	0x00, 0x08, 0xF5, 0x0A, 0x02, 0x00,
	0x00, 0x08, 0xFD, 0x3F, 0xDA, 0x0D
};

unsigned char bCSCMtx_YUV2RGB_ITU601_0_255[] = {
	0x04, 0x00, 0xA7,
	0x4F, 0x09, 0x81, 0x39, 0xDD, 0x3C,
	0x4F, 0x09, 0xC4, 0x0C, 0x01, 0x00,
	0x4F, 0x09, 0xFD, 0x3F, 0x1F, 0x10
};

unsigned char bCSCMtx_YUV2RGB_ITU709_16_235[] = {
	0x00, 0x00, 0x00,
	0x00, 0x08, 0x55, 0x3C, 0x88, 0x3E,
	0x00, 0x08, 0x51, 0x0C, 0x00, 0x00,
	0x00, 0x08, 0x00, 0x00, 0x84, 0x0E
};

unsigned char bCSCMtx_YUV2RGB_ITU709_0_255[] = {
	0x04, 0x00, 0xA7,
	0x4F, 0x09, 0xBA, 0x3B, 0x4B, 0x3E,
	0x4F, 0x09, 0x57, 0x0E, 0x02, 0x00,
	0x4F, 0x09, 0xFE, 0x3F, 0xE8, 0x10
};
#endif