#include QMK_KEYBOARD_H

#define ____ KC_TRNS

enum planck_layers {
  _NEO,
  _LOWER,
  _RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_NEO] = LAYOUT_planck_grid(
       	KC_TAB, KC_X, KC_V, KC_L, KC_C, KC_W, KC_K, KC_H, KC_G, KC_F, KC_Q, KC_BSPC, 
		KC_ESC, KC_U, KC_I, KC_A, KC_E, KC_O, KC_S, KC_N, KC_R, KC_T, KC_D, KC_Y, 
		KC_LSFT, KC_EQL, KC_MINS, KC_SLSH, KC_P, KC_Z, KC_B, KC_M, KC_COMM, KC_DOT, KC_J, KC_ENT, 
        KC_LCTL, KC_LALT, KC_UP, KC_DOWN, KC_BSPC, MO(1), MO(2), KC_SPC, KC_LEFT, KC_RGHT, KC_LEFT, KC_LGUI
    ),
    

    [1] = LAYOUT_planck_grid(
        ____, KC_PGUP, KC_BSPC,KC_UP, KC_DEL, KC_PGDN,____, KC_7, KC_8,KC_9, ____, ____,
        ____, KC_HOME, KC_LEFT,KC_DOWN, KC_RGHT, KC_END,____, KC_4, KC_5,KC_6, ____, ____,
        ____, LSFT(KC_TAB), KC_TAB,KC_SPC, KC_ENT, ____,____, KC_1, KC_2,KC_3, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, KC_0,KC_0, ____, ____
    ),


    [2] = LAYOUT_planck_grid(
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____
    ),

    [3] = LAYOUT_planck_grid(
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____

    ),
    [4] = LAYOUT_planck_grid(
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____

    ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef CONSOLE_ENABLE
        if (record->event.pressed) {
            uprintf("0x%04X,%u,%u,%u\n", keycode, record->event.key.row, record->event.key.col, get_highest_layer(layer_state));
        }
    #endif
    switch (keycode) {
    //...
    }
    return true;
}