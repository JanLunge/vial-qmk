#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jan Lunge
#define PRODUCT         w60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { F4, B6, B3, B4, E6 }
#define MATRIX_COL_PINS { B5, B1, F7, F6, F5, B2, D7, C6, D4, D0, D1, D2, D3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xB2, 0xA3, 0xC7, 0x6B, 0xCD, 0xAB, 0x28, 0xAE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
