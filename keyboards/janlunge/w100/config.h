#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2021
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jan Lunge
#define PRODUCT         w100

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 21

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { B5, F1, F0, E6, E7, B1 }
#define MATRIX_COL_PINS { D1, D2, D3, D4, D5, D6, D7, E0, E1, C0, C1, C2, C3, C4, C5, C6, C7, F7,F6, F5, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x63, 0x63, 0xFE, 0xEC, 0x7B, 0x27, 0x52, 0x0A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }
