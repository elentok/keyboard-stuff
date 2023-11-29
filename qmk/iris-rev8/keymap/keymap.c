// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "elentok.h"

// less bright version
#define HSV_CYAN1       128, 255, 100

void keyboard_post_init_user(void) {
  rgb_matrix_enable_noeeprom();
  rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
  rgb_matrix_sethsv_noeeprom(HSV_CYAN1);
}

// #define _QWERTY 0
// #define _LOWER 1
// #define _RAISE 2
// #define _ADJUST 3

// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   LOWER,
//   RAISE,
//   ADJUST,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, E_A,     E_S,     E_D,     E_F,     KC_G,                               KC_H,    E_J,     E_K,     E_L,     E_SCLN,  KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL, E_LTHM1, E_LTHM2,                   E_RTHM1, E_RTHM2, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [LF] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  QK_BOOT,                            KC_CIRC, KC_AMPR, KC_ASTR, EF_9,    EF_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EF_Q,    KC_2,    EF_E,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    EF_O,    EF_P,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, TO_GAME,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_PLUS, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     BL_STEP, _______, _______, _______, KC_DOWN, KC_LCBR, KC_LPRN,          KC_RPRN, EF_N,    EF_M,    EF_COMM, EF_DOT,  EF_SLSH, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  _______, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [LJ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, EF_9,    EF_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, EJ_Q,    EJ_W,    EJ_E,    EJ_R,    EJ_T,                               KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, EJ_A,    EJ_S,    EJ_D,    EJ_F,    EJ_G,                               KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, EJ_Z,    EJ_X,    EJ_C,    EJ_V,    EJ_B,    KC_F12,           _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [VI_NORM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     EVI_ESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EVI_Q,   EVI_W,   EVI_E,   EVI_R,   _______,                            EVI_Y,   EVI_U,   EVI_I,   EVI_O,   EVI_P,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EVI_A,   EVI_S,   EVI_D,   EVI_F,   EVI_G,                              EVI_H,   EVI_J,   EVI_K,   EVI_L,   EVI_CLN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EVI_Z,   EVI_X,   EVI_C,   EVI_V,   EVI_B,   KC_MPLY,          _______, EVI_N,   EVI_M,   EVI_COM, EVI_DOT, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, TO_BASE, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [VI_VIS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     EVV_ESC, _______, _______, _______, EVV_4,   _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EVV_Q,   EVV_W,   EVV_E,   _______, _______,                            EVV_Y,   _______, _______, _______, EVV_P,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, EVV_D,   _______, _______,                            EVV_H,   EVV_J,   EVV_K,   EVV_L,   _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, EVV_X,   EVV_C,   _______, EVV_B,   _______,          _______, _______, _______, EVV_COM, EVI_DOT, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, TO_NORM, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [GAME] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    TO_BASE,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL, KC_LSFT,  KC_SPC,                   KC_SPC,  KC_ENT,  KC_RALT // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EN_Q,    EN_W,    EN_E,    EN_R,    EN_T,                               KC_PLUS, KC_7,    KC_8,    KC_9,    KC_DOT,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EN_A,    EN_S,    EN_D,    EN_F,    EN_G,                               KC_MINS, KC_4,    RGUI_T(KC_5),    KC_6,    KC_ENT,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, EN_Z,    EN_X,    EN_C,    EN_V,    EN_B,    _______,          _______, KC_EQL,  KC_1,    KC_2,    KC_3,    KC_BSLS,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, TO_BASE, KC_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
)

// [_ADJUST] = LAYOUT(
// //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
//    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
// //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
//    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
// //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
//    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
// //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
// //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
//                                   _______, _______, _______,                   _______, _______, _______
//                               // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
// )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EC_VI_C:
      if (!record->event.pressed) {
        SEND_STRING(SS_TAP(X_DEL));
        layer_move(BASE);
      }
      break;
    case EC_VI_X:
      if (!record->event.pressed) {
        SEND_STRING(SS_LGUI("x"));
        layer_move(VI_NORM);
      }
      break;
    case EC_VI_O:
      if (!record->event.pressed) {
        // SEND_STRING(SS_TAP(X_ENT));
        SEND_STRING("\n");
        layer_move(BASE);
      }
      break;
    case EC_VI_Y: // yank
      if (!record->event.pressed) {
        // SEND_STRING(SS_TAP(X_ENT));
        SEND_STRING(SS_LGUI("c"));
        layer_move(VI_NORM);
      }
      break;
    case EC_ALFRED:
      if (!record->event.pressed) {
        SEND_STRING(SS_LGUI(" "));
        layer_move(BASE);
      }
      break;
    case EC_WIN:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_TAB));
      } else {
        SEND_STRING(SS_UP(X_LGUI));
      }
      break;
    // case QWERTY:
    //   if (record->event.pressed) {
    //     set_single_persistent_default_layer(_QWERTY);
    //   }
    //   return false;
    //   break;
    // case LOWER:
    //   if (record->event.pressed) {
    //     layer_on(_LOWER);
    //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
    //   } else {
    //     layer_off(_LOWER);
    //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
    //   }
    //   return false;
    //   break;
    // case RAISE:
    //   if (record->event.pressed) {
    //     layer_on(_RAISE);
    //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
    //   } else {
    //     layer_off(_RAISE);
    //     update_tri_layer(_LOWER, _RAISE, _ADJUST);
    //   }
    //   return false;
    //   break;
    // case ADJUST:
    //   if (record->event.pressed) {
    //     layer_on(_ADJUST);
    //   } else {
    //     layer_off(_ADJUST);
    //   }
    //   return false;
    //   break;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  switch(get_highest_layer(state)) {
  case VI_NORM:
    rgb_matrix_sethsv_noeeprom(HSV_GREEN);
    break;
  case VI_VIS:
    rgb_matrix_sethsv_noeeprom(HSV_BLUE);
    break;
  case GAME:
    rgb_matrix_sethsv_noeeprom(HSV_RED);
    break;
  case NUM:
    rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
    break;
  default:
    rgb_matrix_sethsv_noeeprom(HSV_CYAN1);
    break;
  }

  return state;
}
