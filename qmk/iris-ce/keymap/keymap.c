// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  TS_BRK,
};

#include "generated-layout.h"
#include "features/achordion.h"

#define HSV_CYAN1       128, 255, 100

void keyboard_post_init_user(void) {
  rgb_matrix_enable_noeeprom();
  rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
  rgb_matrix_sethsv_noeeprom(HSV_CYAN1);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {
    case TS_BRK:
      if (!record->event.pressed) {
        SEND_STRING("() => {  }");
        SEND_STRING(SS_TAP(X_LEFT));
        SEND_STRING(SS_TAP(X_LEFT));
      }
      break;
  }
  return true;
}

// Disable combos on the gaming layer
bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
  return !layer_state_is(LGAME);
}


layer_state_t layer_state_set_user(layer_state_t state) {
  switch(get_highest_layer(state)) {
  case LGAME:
    rgb_matrix_sethsv_noeeprom(HSV_RED);
    break;
  // case LONE:
  //   rgb_matrix_sethsv_noeeprom(HSV_ORANGE);
  //   break;
  default:
    rgb_matrix_sethsv_noeeprom(HSV_CYAN1);
    break;
  }

  return state;
}

void matrix_scan_user(void) {
  achordion_task();
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
  // If you quickly hold a tap-hold key after tapping it, the tap action is
  // repeated. Key repeating is useful e.g. for Vim navigation keys, but can
  // lead to missed triggers in fast typing. Here, returning 0 means we
  // instead want to "force hold" and disable key repeating.
  switch (keycode) {
    case KC_N:
    // Repeating is useful for Vim navigation keys.
    case LT(LJK, KC_J):
    case RGUI_T(KC_K):
    case RSFT_T(KC_L):
      return QUICK_TAP_TERM;  // Enable key repeating.
    default:
      return 0;  // Otherwise, force hold and disable key repeating.
  }
}
