/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS { C14, C15, A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, A8, A9, A10, H3 }

/* We uses a pin with a stronger pull resistor than the internal MCU pins */
// #define MATRIX_UNSELECT_DRIVE_HIGH

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 48
#define DRIVER_2_LED_TOTAL 39
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define CKLED2001_CURRENT_TUNE \
    { 0x9D, 0x9D, 0x44, 0x9D, 0x9D, 0x44, 0x9D, 0x9D, 0x44, 0x9D, 0x9D, 0x44 }

/* Enable CapsLcok LED */
#define CAPS_LOCK_LED_INDEX 50

#define DEBUG_MATRIX_SCAN_RATE
#define MATRIX_IO_DELAY 5
