// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "quantum/rgblight/rgblight.h"
// #include "quantum.h"
// #include "split_util.h"
// #include "rgblight.h"

// #undef RGBLIGHT_EFFECT_STATIC_GRADIENT
// #undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 128
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 100
#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_SPLIT

enum sinc_layers {
  BASE,
  L1,
};

// Left home row mods
#define LHRM1 MOD_LCTL
#define LHRM2 MOD_LALT
#define LHRM3 MOD_LGUI
#define LHRM4 L1

// Right home row mods
#define RHRM1 MOD_RCTL
#define RHRM2 MOD_RALT
#define RHRM3 MOD_RGUI
#define RHRM4 L1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  MY_KC_LOCK,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_80_with_macro(
    KC_MUTE,             /*HOLE*/             KC_ESC,  KC_F1,           KC_F2,           KC_F3,           KC_F4,          KC_F5,          KC_F6,  KC_F7,           KC_F8,           KC_F9,           KC_F10,             KC_F11,  KC_F12,           KC_DEL,  KC_INS,
    MY_KC_LOCK,          KC_MEDIA_PLAY_PAUSE, KC_GRV,  KC_1,            KC_2,            KC_3,            KC_4,           KC_5,           KC_6,   KC_7,            KC_8,            KC_9,            KC_0,               KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, KC_HOME,
    KC_MEDIA_PLAY_PAUSE, KC_VOLU,             KC_TAB,  KC_Q,            KC_W,            KC_E,            KC_R,           KC_T,           KC_Y,   KC_U,            KC_I,            KC_O,            KC_P,               KC_LBRC, KC_RBRC, KC_BSLS, KC_END,
    KC_F5,               KC_VOLD,             KC_LCTL, MT(LHRM1, KC_A), MT(LHRM2, KC_S), MT(LHRM3, KC_D), LT(L1, KC_F),  KC_G,           KC_H,   LT(L1, KC_J), MT(RHRM3, KC_K), MT(RHRM2, KC_L), MT(RHRM1, KC_SCLN), KC_QUOT, KC_ENT,  KC_PGUP,
    KC_F7,               KC_F8,               KC_LSFT, KC_Z,            KC_X,            KC_C,            KC_V,           KC_B,           KC_N,   KC_M,            KC_COMM,         KC_DOT,          KC_SLSH,            KC_RSFT, KC_UP,   KC_PGDN,
    KC_F9,               KC_F10,              KC_LCTL, MO(L1),         KC_LALT,         KC_LGUI,         LSFT_T(KC_SPC), RSFT_T(KC_SPC), MO(L1),  RSFT_T(KC_SPC),  KC_RGUI,         MO(L1),           KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [L1] = LAYOUT_80_with_macro(
    QK_CLEAR_EEPROM,     _______, _______,      _______,      _______,      _______,     _______,    _______, _______,     _______,      _______,      _______,  _______, _______, _______, _______,
    RGB_HUI,             RGB_HUD,             QK_GESC, KC_F1,        KC_F2,        KC_F3,        KC_F4,       KC_F5,      KC_F6,   KC_F7,       KC_F8,        KC_F9,        KC_F10,   KC_F11,  KC_F12,  _______, _______, _______,
    RGB_SAI,             RGB_SAD,             RGB_TOG, RGB_MOD,      KC_LBRC,      KC_RBRC,      KC_TAB,      _______,    _______, _______,     _______,      _______,      _______,  _______, _______, _______, _______,
    RGB_VAI,             RGB_VAD,             _______, _______,      KC_LPRN,      KC_RPRN,      MY_KC_LOCK,  _______,    KC_LEFT, KC_DOWN,     KC_UP  ,      KC_RIGHT,     _______,  _______,          _______, _______,
    _______,             _______,             _______, _______,      KC_LCBR,      KC_RCBR,      _______,     _______,    KC_BSPC, _______,      _______,      _______,  _______, _______, _______, _______,
    QK_REBOOT,           _______,             _______, _______,      _______,      _______,      _______,     _______, _______, _______,      _______,      _______,  _______, _______, _______, _______
  ),
};

// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//   for (uint8_t i = led_min; i < led_max; i++) {
//     HSV hsv = {0, 0, 100}; // white
//
//     switch(get_highest_layer(layer_state|default_layer_state)) {
//       case 2:
//         // green
//         hsv.h = 85;
//         hsv.s = 255;
//         break;
//       case 1:
//         // cyan
//         hsv.h = 128;
//         hsv.s = 255;
//         break;
//       default:
//         break;
//     }
//
//     RGB rgb = hsv_to_rgb(hsv);
//     rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
//   }
//   // RGB_MATRIX_INDICATOR_SET_COLOR(index, red, green, blue);
//   return false;
// }

// void eeconfig_init_kb(void) {
//   rgblight_enable();
//   rgblight_sethsv(HSV_BLUE);
//   rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//   switch(biton32(state)) {
//   case 0:
//     // Green
//     rgblight_enable();
//     // rgblight_sethsv(HSV_GREEN);
//     rgblight_sethsv(HSV_GREEN);
//     break;
//   case 1:
//     // Red
//     rgblight_enable();
//     // rgblight_sethsv(HSV_RED);
//     rgblight_sethsv(HSV_RED);
//     break;
//   default:
//     // Yellow
//     rgblight_enable();
//     rgblight_sethsv(HSV_YELLOW);
//     // rgblight_sethsv(HSV_YELLOW);
//     break;
//   }
//   return state;
// }
//
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MY_KC_LOCK:
      if (!record->event.pressed) {
        // SEND_STRING(SS_DOWN(LGUI) SS_LCTL("q") SS_UP(LGUI));
        SEND_STRING(SS_LCTL(SS_LGUI("q")));
      }
      break;
  }

  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}
