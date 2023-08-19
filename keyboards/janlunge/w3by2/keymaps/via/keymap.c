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
#define XXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	KC_B, KC_D, KC_F, XXXX,
        KC_A, KC_C, KC_E, TO(1)
    ),

    [1] = LAYOUT(
        ____, ____, ____, XXXX,
        ____, ____, ____, TO(2)
    ),

    [2] = LAYOUT(
        ____, ____, ____, XXXX,
        ____, ____, ____, TO(3)
    ),

    [3] = LAYOUT(
        ____, ____, ____, XXXX,
        ____, ____, ____, TO(0)

    ),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)  },
    [2] =   { ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [3] =   { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    //        Encoder 1          
};
#endif

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // the index of the led to set as an indicator
    const int led_index = 2;
    switch(get_highest_layer(layer_state)) {
        case 1:
            rgb_matrix_set_color(led_index, RGB_WHITE);
            return true;
        case 2:
            rgb_matrix_set_color(led_index, RGB_BLUE);
            return true;
        case 3:
            rgb_matrix_set_color(led_index, RGB_GREEN);
            return true;
        default:
            return false;
    }
}

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
