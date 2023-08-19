#pragma once

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

#define WS2812_DI_PIN F4
#define RGB_MATRIX_LED_COUNT 6
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xCB, 0x13, 0x80, 0x88, 0x63, 0xF4, 0x97, 0x61}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }