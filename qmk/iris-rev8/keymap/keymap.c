// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "elentok.h"
#include "generated-layout.h"
// #include "iris-layout.h"
// #include "features/achordion.h"

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {
    // case EC_VI_C:
    //   if (!record->event.pressed) {
    //     SEND_STRING(SS_TAP(X_DEL));
    //     layer_move(L1);
    //   }
    //   break;
    // case EC_VI_X:
    //   if (!record->event.pressed) {
    //     SEND_STRING(SS_LGUI("x"));
    //     layer_move(L3);
    //   }
    //   break;
    // case EC_VI_O:
    //   if (!record->event.pressed) {
    //     // SEND_STRING(SS_TAP(X_ENT));
    //     SEND_STRING("\n");
    //     layer_move(L1);
    //   }
    //   break;
    // case EC_VI_Y: // yank
    //   if (!record->event.pressed) {
    //     // SEND_STRING(SS_TAP(X_ENT));
    //     SEND_STRING(SS_LGUI("c"));
    //     layer_move(L3);
    //   }
    //   break;
    // case EC_ALFRED:
    //   if (!record->event.pressed) {
    //     SEND_STRING(SS_LGUI(" "));
    //     layer_move(L1);
    //   }
    //   break;
    // case EC_WIN:
    //   if (record->event.pressed) {
    //     SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_TAB));
    //   } else {
    //     SEND_STRING(SS_UP(X_LGUI));
    //   }
    //   break;
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
  // case L2:
  //   rgb_matrix_sethsv_noeeprom(HSV_ORANGE);
  //   break;
  // case L3:
  //   rgb_matrix_sethsv_noeeprom(HSV_GREEN);
  //   break;
  // case L4:
  //   rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
  //   break;
  // case VI_VIS:
  //   rgb_matrix_sethsv_noeeprom(HSV_BLUE);
  //   break;
  case LGAME:
    rgb_matrix_sethsv_noeeprom(HSV_RED);
    break;
  case LONE:
    rgb_matrix_sethsv_noeeprom(HSV_ORANGE);
    break;
  default:
    rgb_matrix_sethsv_noeeprom(HSV_CYAN1);
    break;
  }

  return state;
}

// void matrix_scan_user(void) {
//   achordion_task();
// }

const uint16_t PROGMEM test_combo1[] = {LGUI_T(KC_D), LT(LF, KC_F), COMBO_END};
const uint16_t PROGMEM test_combo2[] = {LSFT_T(KC_S), LGUI_T(KC_D), COMBO_END};
const uint16_t PROGMEM test_combo3[] = {LT(LJ, KC_J), RGUI_T(KC_K), COMBO_END};
const uint16_t PROGMEM test_combo4[] = {RGUI_T(KC_K), RSFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM test_combo5[] = {KC_W, KC_E, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_LBRC),
    COMBO(test_combo2, LCTL(KC_A)), // keycodes with modifiers are possible too!
    COMBO(test_combo3, KC_ESC),
    COMBO(test_combo4, KC_COLON),
    COMBO(test_combo5, KC_ESC),
};
