#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0xDEEB
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jan Lunge
#define PRODUCT         wDactyl

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4, D0 }

#define RGB_DI_PIN F4
#define DRIVER_LED_TOTAL 2

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C
#define SOFT_SERIAL_PIN D1

//#define MASTER_LEFT
#define MASTER_RIGHT

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xB2, 0x91, 0x89, 0xF8, 0x02, 0xB0, 0x3B, 0x49}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Homerow mods
#define TAPPING_TERM 200
// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD