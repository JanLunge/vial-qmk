#pragma once

// #include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2022
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jan Lunge
#define PRODUCT         w65

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16


#define MATRIX_ROW_PINS { D1, C0, B0, B1, B3 }
#define MATRIX_COL_PINS { B16, B17, D0, A1, A2, D7, B2, D4, D2, D3, C3, C4, C6, C7, E30, C5 }
// #define UNUSED_PINS { C1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x0A, 0x2B, 0xCE, 0xEC, 0xFA, 0x91, 0x40, 0x3F}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// i2c_master defines
// #define I2C1_SCL_PIN B0 // A2 on pinout = B0
// #define I2C1_SDA_PIN B1 // A3 on pinout = B1
// #define I2C1_SCL_PAL_MODE PAL_MODE_ALTERNATIVE_2
// #define I2C1_SDA_PAL_MODE PAL_MODE_ALTERNATIVE_2

#define DYNAMIC_KEYMAP_LAYER_COUNT 2
