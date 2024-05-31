
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L1] = LAYOUT_65_with_macro(
    KC_F1,                 KC_ESC,   /*|*/ KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    /*|*/ KC_7,    KC_8,    KC_9,     KC_0,     KC_MINS, KC_EQL,     KC_DEL,  KC_BSPC, KC_HOME,
    KC_MEDIA_PLAY_PAUSE,   KC_VOLU,  /*|*/ KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             /*|*/ KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,    KC_LBRC,    KC_RBRC, KC_BSLS, KC_END,
    KC_PSCR,               KC_VOLD,  /*|*/ KC_LGUI, E_A,    E_S,    E_D,    E_F,    KC_G,             /*|*/ KC_H,    E_J,    E_K,     E_L,     E_SCLN, KC_QUOT,             KC_ENT,  KC_PGUP,
    EC_LOCK,               KC_F12,   /*|*/ KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             /*|*/ KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH, KC_RSFT,             KC_UP,   KC_PGDN,
    KC_WBAK,               KC_WFWD,  /*|*/ KC_LCTL, MO(LF),  KC_LALT, KC_LGUI, KC_SPC, _______,          /*|*/ KC_ENT, MO(LJ),  KC_RCTL,  _______,                       KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [LF] = LAYOUT_65_with_macro(
    _______,               _______,  /*|*/ KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   /*|*/ KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,  KC_F12,     KC_DEL,  KC_BSPC, QK_BOOT,
    RGB_TOG,               _______,  /*|*/ _______, EF_Q, KC_COLN, KC_RBRC, _______, _______,          /*|*/ _______, KC_PGUP, _______,  _______,  _______, _______,    _______, _______, QK_REBOOT,
    RGB_MOD,               _______,  /*|*/ _______, _______, _______, _______, _______, EF_G,          /*|*/ KC_LEFT, KC_DOWN, KC_UP  ,  KC_RIGHT, _______, EF_QUOT,          _______, _______,
    _______,               _______,  /*|*/ _______, _______, _______, _______, _______, _______,          /*|*/ EF_N, EF_M,    _______,  _______,  _______, _______,             DT_UP  , _______,
    _______,               _______,  /*|*/ _______, _______, _______, _______, EF_LSPC, _______,       /*|*/ EF_RSPC, _______, _______,  _______,                       _______, DT_DOWN, DT_PRNT
  ),

  [LJ] = LAYOUT_65_with_macro(
    _______,               _______,  /*|*/ KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   /*|*/ KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,  KC_F12,     KC_DEL,  KC_BSPC, QK_BOOT,
    RGB_TOG,               _______,  /*|*/ _______, EJ_Q, KC_LBRC, KC_RBRC, _______, _______,          /*|*/ _______, _______, EC_LOCK, _______,  _______, _______,    _______, _______, QK_REBOOT,
    RGB_MOD,               _______,  /*|*/ _______, _______, KC_LPRN, KC_RPRN, _______, EJ_G,          /*|*/ _______, _______, _______,  _______, _______, EF_QUOT,          _______, _______,
    _______,               _______,  /*|*/ _______, _______, KC_LCBR, KC_RCBR, _______, _______,          /*|*/ EJ_N, EJ_M, _______,  _______,  _______, _______,             _______, _______,
    _______,               _______,  /*|*/ _______, _______, _______, _______, _______, _______,          /*|*/ _______, _______, _______,  _______,                       _______, _______, _______
  )
};
