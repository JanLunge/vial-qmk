#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H,
        KC_I, KC_J, KC_K, KC_L,
        KC_M, KC_N, KC_O, KC_P
    ),

    [1] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [2] = LAYOUT(
       ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

};