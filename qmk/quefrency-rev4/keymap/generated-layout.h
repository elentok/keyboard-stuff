// This file has been auto-generated by qmkmd (https://github.com/elentok/qmkmd)
enum layers {
  LBASE = 0,
  LF,
  LJ,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LBASE] = LAYOUT_65_with_macro(
    KC_F1,            KC_ESC,   /* || */  KC_GRV,        KC_1,    KC_2,    KC_3,    KC_4,         KC_5,    KC_6,     /* || */  KC_7,    KC_8,         KC_9,    KC_0,          KC_MINS, KC_EQL,  KC_DEL,        KC_BSPC, KC_HOME,
    KC_MPLY,          KC_VOLU,  /* || */  KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,         KC_T,              /* || */  KC_Y,    KC_U,         KC_I,    KC_O,          KC_P,    KC_LBRC, KC_RBRC,       KC_BSLS, KC_END,
    KC_PSCR,          KC_VOLD,  /* || */  OSM(MOD_LGUI), KC_A,    KC_S,    KC_D,    LT(LF, KC_F), KC_G,              /* || */  KC_H,    LT(LJ, KC_J), KC_K,    KC_L,          KC_SCLN, KC_QUOT, KC_ENT,                 KC_PGUP,
    LCTL(LGUI(KC_Q)), KC_F12,   /* || */  OSM(MOD_LSFT), KC_Z,    KC_X,    KC_C,    KC_V,         KC_B,              /* || */  KC_N,    KC_M,         KC_COMM, KC_DOT,        KC_SLSH,          OSM(MOD_RSFT), KC_UP,   KC_PGDN,
    KC_WBAK,          KC_WFWD,  /* || */  OSM(MOD_LCTL), KC_A,    KC_LALT, KC_LGUI,               KC_SPC,  _______,  /* || */  KC_ENT,                KC_A,    OSM(MOD_RCTL), _______,          KC_LEFT,       KC_DOWN, KC_RIGHT
  ),
  [LF] = LAYOUT_65_with_macro(
    _______,          _______,  /* || */  _______,       _______, _______, _______, _______,      _______, _______,  /* || */  _______, _______,      _______, _______,       _______, _______, _______,       _______, QK_BOOT,
    _______,          _______,  /* || */  _______,       _______, _______, _______, _______,      _______,           /* || */  _______, _______,      _______, _______,       _______, _______, _______,       _______, _______,
    _______,          _______,  /* || */  _______,       _______, _______, _______, _______,      _______,           /* || */  KC_LEFT, KC_DOWN,      KC_UP,   KC_RIGHT,      _______, _______, _______,                _______,
    _______,          _______,  /* || */  _______,       _______, _______, _______, _______,      _______,           /* || */  _______, _______,      _______, _______,       _______,          _______,       _______, _______,
    _______,          _______,  /* || */  _______,       _______, _______, _______,               _______, _______,  /* || */  _______,               _______, _______,       _______,          _______,       _______, _______
  ),
  [LJ] = LAYOUT_65_with_macro(
    _______,          _______,  /* || */  _______,       _______, _______, _______, _______,      _______, _______,  /* || */  _______, _______,      _______, _______,       _______, _______, _______,       _______, _______,
    _______,          _______,  /* || */  _______,       _______, _______, KC_LPRN, KC_RPRN,      _______,           /* || */  _______, _______,      _______, _______,       _______, _______, _______,       _______, _______,
    _______,          _______,  /* || */  _______,       _______, _______, KC_LBRC, KC_RBRC,      _______,           /* || */  _______, _______,      _______, _______,       _______, _______, _______,                _______,
    _______,          _______,  /* || */  _______,       _______, _______, KC_LCBR, KC_RCBR,      _______,           /* || */  _______, _______,      _______, _______,       _______,          _______,       _______, _______,
    _______,          _______,  /* || */  _______,       _______, _______, _______,               _______, _______,  /* || */  _______,               _______, _______,       _______,          _______,       _______, _______
  ),
};