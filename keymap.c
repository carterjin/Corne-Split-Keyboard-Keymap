/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "rgb.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,LGUI_T(KC_Z),KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   TO(3),  KC_SPC,   LT(1,KC_SPC),MO(2),KC_SLSH
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_VOLU, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_ENT ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_SPC,     KC_SPC, XXXXXXX, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_DEL ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6  , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,                      KC_F12 , KC_INS , KC_HOME, KC_END , KC_PGUP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   TO(0),  KC_SPC,   LT(1,KC_SPC),TO(0), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV, KC_LNUM, KC_P7  , KC_P8  , KC_P9  ,KC_PMNS ,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,KC_PDOT , KC_P4  , KC_P5  , KC_P6  ,KC_PPLS ,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(5)  , TO(4)  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,KC_P0   , KC_P1  , KC_P2  , KC_P3  ,KC_ENT  ,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  TO(2) ,  KC_SPC,   LT(1,KC_SPC),TO(0), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_ESC  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z   , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                      KC_H   , KC_J   , KC_K   , KC_L   , KC_VOLU, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_B   , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                      KC_N   , KC_M   , XXXXXXX, XXXXXXX, KC_VOLD, KC_ENT ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        LALT(KC_C),KC_V   ,  KC_SPC,     KC_SPC, TO(0)  , KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      DM_REC1, DM_REC2, DM_PLY1, DM_PLY2, KC_RBRC,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_SPC,   LT(1,KC_SPC), TO(0), KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
layer_state_t layer_state_set_user(layer_state_t state) {
    /* For any layer other than default, save current RGB state and switch to layer-based RGB */
    //if (layer_state_cmp(state, 0)) {

    //} else {
        uint8_t layer = get_highest_layer(state);
        //if (layer_state_cmp(layer_state, 0)) save_rgb_config();
        rgb_by_layer(layer);
    return state;
}
#endif