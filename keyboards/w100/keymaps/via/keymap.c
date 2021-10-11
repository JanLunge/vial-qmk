#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_h(
		KC_ESC,    KC_NO,    KC_F1,    KC_F2,  KC_F3,   KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUSE, KC_NO, KC_NO, KC_NO, KC_NO,\
        KC_NONUS_BSLASH, KC_1, KC_2,  KC_3,   KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_KP_SLASH, KC_KP_ASTERISK,KC_KP_MINUS,\
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_DEL, KC_END, KC_PGDN, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,\
		KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,\
		KC_LSFT, KC_GRAVE, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_RSFT, KC_NO, KC_UP, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,\
		KC_LCTRL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_1, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_KP_0, KC_NO, KC_KP_DOT, KC_NO \
    ),

    [1] = LAYOUT_h(
       KC_ESC,    KC_NO,    KC_F1,    KC_F2,  KC_F3,   KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUSE, KC_NO, KC_NO, KC_NO, KC_NO,\
        KC_NONUS_BSLASH, KC_1, KC_2,  KC_3,   KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_KP_SLASH, KC_KP_ASTERISK,KC_KP_MINUS,\
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_DEL, KC_END, KC_PGDN, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,\
		KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,\
		KC_LSFT, KC_GRAVE, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_RSFT, KC_NO, KC_UP, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,\
		KC_LCTRL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_1, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_KP_0, KC_NO, KC_KP_DOT, KC_NO \
    ),

    [2] = LAYOUT_h(
        KC_ESC,    KC_NO,    KC_F1,    KC_F2,  KC_F3,   KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUSE, KC_NO, KC_NO, KC_NO, KC_NO,\
        KC_NONUS_BSLASH, KC_1, KC_2,  KC_3,   KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_KP_SLASH, KC_KP_ASTERISK,KC_KP_MINUS,\
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_DEL, KC_END, KC_PGDN, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,\
		KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,\
		KC_LSFT, KC_GRAVE, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_RSFT, KC_NO, KC_UP, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,\
		KC_LCTRL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_1, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_KP_0, KC_NO, KC_KP_DOT, KC_NO \
    ),

    [3] = LAYOUT_h(
       KC_ESC,    KC_NO,    KC_F1,    KC_F2,  KC_F3,   KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUSE, KC_NO, KC_NO, KC_NO, KC_NO,\
        KC_NONUS_BSLASH, KC_1, KC_2,  KC_3,   KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_KP_SLASH, KC_KP_ASTERISK,KC_KP_MINUS,\
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_DEL, KC_END, KC_PGDN, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,\
		KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,\
		KC_LSFT, KC_GRAVE, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_RSFT, KC_NO, KC_UP, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,\
		KC_LCTRL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_1, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_KP_0, KC_NO, KC_KP_DOT, KC_NO \
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
    // raw_hid_send(data, length);
}
