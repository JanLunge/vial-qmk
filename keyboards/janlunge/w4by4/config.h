#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jan Lunge
#define PRODUCT         w4by4

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5 }

#define RGB_DI_PIN F6
#define RGBLED_NUM 16

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x87, 0x16, 0xA4, 0xA4, 0xEB, 0x7F, 0x53, 0x54}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* saving space */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION