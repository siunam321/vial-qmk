/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0x97, 0xD0, 0xA5, 0x97, 0x57, 0x48, 0xD0, 0x4F}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// mouse keys constant speed with tap to select speed
// https://docs.qmk.fm/features/mouse_keys#constant-mode
#define MK_3_SPEED
#define MK_C_OFFSET_1 8

#define DYNAMIC_MACRO_NO_NESTING

// enable Speculative Hold
// https://docs.qmk.fm/tap_hold#speculative-hold
// #define SPECULATIVE_HOLD

// #define MASTER_RIGHT
