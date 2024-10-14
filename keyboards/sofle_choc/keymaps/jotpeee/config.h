/* Copyright 2023 Brian Low
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

// Enabling this option changes the startup behavior to listen for an
// active USB communication to delegate which part is master and which
// is slave. With this option enabled and theres’s USB communication,
// then that half assumes it is the master, otherwise it assumes it
// is the slave.
//
// I've found this helps with some ProMicros where the slave does not boot
#define SPLIT_USB_DETECT

#define TAPPING_TERM        170
#define RGB_MATRIX_SLEEP     // turn off effects when suspended
// If LED_MATRIX_KEYPRESSES or LED_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
#define SPLIT_TRANSPORT_MIRROR
// sync RGB state between halves
#define SPLIT_LAYER_STATE_ENABLE
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100  // limits maximum brightness of LEDs (max 255). Higher may cause the controller to crash.
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define L_QWERTY            0
#define L_VIDEO             1
#define L_COLEMAK_DH        2
#define L_LOWER             3
#define L_UPPER             4
#define L_ADJUST            5

#define TAPPING_TOGGLE      3

#define TRI_LAYER_LOWER_LAYER   L_LOWER
#define TRI_LAYER_UPPER_LAYER   L_UPPER
#define TRI_LAYER_ADJUST_LAYER  L_ADJUST

// Mouse
// #define MK_KINETIC_SPEED
#define MOUSEKEY_INTERVAL       16
#define MOUSEKEY_TIME_TO_MAX    50

// Reduce size
// #define CONSOLE_ENABLE      NO
// #define NO_PRINT
// #define NO_DEBUG
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
