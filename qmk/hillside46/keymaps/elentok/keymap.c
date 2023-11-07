// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "elentok.h"

#define xxxxxxx KC_NO

// #define LY_NAV MO(NAV)
#define LY_NAV LT(NAV, KC_BSPC)
// #define LY_SYM MO(SYM)
#define LY_SYM LT(SYM, KC_ENT)
#define LY_ADJ MO(ADJUST)
#define ALT_GR OSM(MOD_RALT)
#define OSM_SFT OSM(MOD_LSFT)
#define PLY_PAU  KC_MEDIA_PLAY_PAUSE

#define UNDO LCTL(KC_Z)
#define CUT  LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define REDO LCTL(KC_Y)
// (For OS X, you'll want to change these editing keys to LGUI(KC_Z) etc.)

#define EL_LANG LGUI(KC_1)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
     KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
     KC_TAB,  EL_A,    EL_S,    EL_D,    EL_F,    KC_G,                                           KC_H,    EL_J,    EL_K,    EL_L,    EL_SCLN, KC_ENT,
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,                       CW_TOGG, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
                                         KC_LGUI, KC_LALT, KC_LSFT, KC_SPC,     LY_NAV , LY_SYM,  KC_LALT, KC_RGUI
    ),

//  [??] = LAYOUT(
//   _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______, _______,
//                                       _______, _______, _______, _______,    _______, _______, _______, _______
//  ),

    [LF] = LAYOUT(
     _______, EL_LF_Q, KC_COLN, EL_LANG, _______, _______,                                        _______, _______, _______, _______, _______, _______,
     _______, _______, _______, KC_BSPC, _______, EL_LF_G,                                        KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, _______, _______,
     _______, _______, _______, _______, _______, _______, _______,                      QK_BOOT, _______, _______, _______, _______, _______, _______,
                                         _______, _______, _______, _______,    _______, _______, _______, _______
    ),

    [LJ] = LAYOUT(
     _______, EL_LJ_Q,KC_COLON, KC_LPRN, KC_RPRN, EL_LJ_T,                                        _______, _______, _______, _______, _______, _______,
     _______, _______, _______, KC_LBRC, KC_RBRC, EL_LJ_G,                                        _______, _______, _______, _______, _______, _______,
     _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______,                      _______, _______, _______, _______, _______, _______, _______,
                                         _______, _______, _______, _______,    _______, _______, _______, _______
    ),

    [NAV] = LAYOUT(
     KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TAB ,                                        KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_PGDN, KC_PGDN,
     _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , UNDO   ,                      REDO   , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_RCTL,
                                         _______, _______, _______, _______,    LY_ADJ , _______, _______, _______
    ),
    [SYM] = LAYOUT(
     KC_ESC,  KC_EXLM, KC_AT  , KC_HASH, KC_DLR , _______,                                        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
     xxxxxxx, KC_BSLS, KC_PERC, KC_LBRC, KC_RBRC, _______,                                         KC_EQL, KC_PLUS, KC_RCTL, KC_LALT, KC_RGUI, KC_END,
     _______, KC_PIPE, _______, KC_LCBR, KC_RCBR, _______,  ALT_GR ,                      KC_APP , KC_UNDS, KC_MINS, KC_VOLU, KC_MPLY, xxxxxxx, KC_RCTL,
                                         _______, _______, _______, LY_ADJ ,    _______, _______, _______, _______ 
    ),
    [ADJUST] = LAYOUT(
     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, AG_SWAP, CG_SWAP,                                        xxxxxxx, KC_F11 , KC_F12 , KC_PSCR, xxxxxxx, EE_CLR,
     xxxxxxx, xxxxxxx, KC_BRID, KC_BRIU, AG_NORM, CG_NORM,                                        RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, xxxxxxx, xxxxxxx, 
     xxxxxxx, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, xxxxxxx, xxxxxxx,                     RGB_TOG, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, xxxxxxx, QK_BOOT,
                                         xxxxxxx, xxxxxxx, xxxxxxx, _______,    _______, xxxxxxx, xxxxxxx, xxxxxxx
    ),
};

//  Template:
//    [_INDEX] = LAYOUT(
//     _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, 
//     _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, 
//     _______, _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______, _______,
//                                         _______, _______, _______, _______,    _______, _______, _______, _______
//    ),
