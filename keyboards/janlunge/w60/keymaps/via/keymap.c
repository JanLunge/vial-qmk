#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,    KC_1,    KC_2,    KC_3,  KC_4,   KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,	 KC_MINS,  KC_EQL,\
		KC_TAB,    KC_Q,    KC_W,    KC_E,  KC_R,   KC_T, KC_Y, KC_U, KC_I,    KC_O,    KC_P, 	 KC_LBRC,  KC_RBRC, \
		KC_TAB,    KC_A,    KC_S,    KC_D,  KC_F,   KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT,   KC_ENT,\
		KC_LSHIFT, KC_Z,    KC_X,    KC_C,  KC_V,   KC_B, KC_N, KC_M, KC_COMM, KC_DOT, 	KC_SLSH, KC_RSHIFT, KC_BSLS, \
		KC_LCTRL,  KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_A, KC_A, KC_A, KC_RALT, KC_RGUI, KC_A,    KC_RCTRL, KC_BSPC \
    ),

    [1] = LAYOUT(
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____
    ),

    [2] = LAYOUT(
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____
    ),

    [3] = LAYOUT(
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____,
        ____, ____, ____,____, ____, ____,____, ____, ____,____, ____, ____, ____
    ),
    
};

void raw_hid_receive_kb(uint8_t *data, uint8_t length) {
    if(data[0] == 0xFC){
        switch (data[1]) {
            case 0x01:{
                // move to layer
                data[1] = 0xFD;
                layer_move(data[2]);
                break;
            }
            case 0x02:{
                // turn on layer
                data[1] = 0xFD;
                layer_on(data[2]);
                break;
            }
            case 0x03:{
                // turn off layer
                data[1] = 0xFD;
                layer_off(data[2]);
                break;
            }
        }
    }
    raw_hid_send(data, length);
}
