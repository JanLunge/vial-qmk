#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

// 224x64
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, 1, 2, NO_LED },
  { 5, 4, 3, NO_LED },
}, {
  // LED Index to Physical Position
    { 0, 0}, { 112, 0}, { 224,0 },
    { 224, 64}, { 112,64 }, { 0, 64},
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4
} };

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	KC_B, KC_D, KC_F, ____,
        KC_A, KC_C, KC_E, KC_G
    ),

    [1] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [2] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [3] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____

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
