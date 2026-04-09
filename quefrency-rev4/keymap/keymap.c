// Copyright 2022 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "elentok.h"

#include "./generated-layout.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
// enum custom_layer {
//     _BASE,
//     _FN1,
// };

// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   ELC_LOCK,
// };

// KC_MPLY = KC_MEDIA_PLAY_PAUSE
// EE_CLR = QK_CLEAR_EEPROM - Reinitializes the keyboard's EEPROM (persistent memory)                                                                                          |

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case EC_LOCK:
//       if (!record->event.pressed) {
//         // SEND_STRING(SS_DOWN(LGUI) SS_LCTL("q") SS_UP(LGUI));
//         SEND_STRING(SS_LCTL(SS_LGUI("q")));
//       }
//       break;
//   }
//
//   return true;
// }

// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) {
//         if (clockwise) {
//             tap_code(KC_PGDN);
//         } else {
//             tap_code(KC_PGUP);
//         }
//     }
//     else if (index == 1) {
//         if (clockwise) {
//             tap_code(KC_VOLU);
//         } else {
//             tap_code(KC_VOLD);
//         }
//     }
//     return false;
// }
