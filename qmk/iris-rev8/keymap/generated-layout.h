// This file has been auto-generated by qmkmd (https://github.com/elentok/qmkmd)
enum layers {
  LBASE = 0,
  LF,
  LJ,
  LV,
  LM,
  LGAME,
  LONE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LBASE] = LAYOUT(
    KC_ESC,           KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                    /* || */           KC_6,      KC_7,         KC_8,               KC_9,         KC_0,            KC_BSPC,
    KC_TAB,           KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                    /* || */           KC_Y,      KC_U,         KC_I,               KC_O,         KC_P,            KC_BSLS,
    KC_LGUI,          LCTL_T(KC_A), LSFT_T(KC_S), LGUI_T(KC_D), LT(LF, KC_F), KC_G,                    /* || */           KC_H,      LT(LJ, KC_J), RGUI_T(KC_K),       RSFT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,
    OSM(MOD_LSFT),    KC_Z,         KC_X,         LALT_T(KC_C), LT(LV, KC_V), KC_B,          KC_SPC,   /* || */  KC_ENT,  KC_N,      LT(LM, KC_M), LALT_T(KC_COMM),    KC_DOT,       KC_SLSH,         OSM(MOD_RSFT),
                                                                KC_LCTL,      OSM(MOD_LGUI), KC_SPC,   /* || */  KC_ENT,  KC_BSPC,   KC_RALT
  ),
  [LF] = LAYOUT(
    _______,          KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,       QK_BOOT,                 /* || */           KC_CIRC,   KC_AMPR,      KC_ASTR,            KC_MINS,      KC_EQL,          _______,
    _______,          KC_ESC,       _______,      _______,      _______,      _______,                 /* || */           KC_UNDS,   KC_PGDN,      LSFT(KC_TAB),       KC_TAB,       KC_PGUP,         _______,
    _______,          _______,      _______,      _______,      _______,      TO(LGAME),               /* || */           KC_LEFT,   KC_DOWN,      KC_UP,              KC_RIGHT,     KC_DLR,          _______,
    _______,          _______,      _______,      _______,      _______,      _______,       _______,  /* || */  _______, KC_BSPC,   KC_ENT,       _______,            _______,      _______,         _______,
                                                                _______,      _______,       _______,  /* || */  _______, _______,   KC_F12
  ),
  [LJ] = LAYOUT(
    LCTL(LGUI(KC_Q)), KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,       KC_5,                    /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    KC_ASTR,          KC_GRV,       KC_COLN,      KC_LPRN,      KC_RPRN,      KC_TILD,                 /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    KC_EQL,           KC_UNDS,      KC_MINS,      KC_LBRC,      KC_RBRC,      KC_DLR,                  /* || */           TO(LONE),  _______,      _______,            _______,      _______,         _______,
    _______,          KC_PIPE,      KC_LABK,      KC_LCBR,      KC_RCBR,      KC_RABK,       _______,  /* || */  _______, _______,   _______,      _______,            _______,      _______,         _______,
                                                                _______,      _______,       _______,  /* || */  _______, _______,   _______
  ),
  [LV] = LAYOUT(
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,          _______,      KC_VOLU,      _______,      _______,      _______,                 /* || */           KC_PLUS,   KC_7,         KC_8,               KC_9,         KC_EQL,          _______,
    _______,          LCTL(KC_A),   _______,      KC_MPLY,      _______,      _______,                 /* || */           KC_MINS,   KC_4,         KC_5,               KC_6,         KC_0,            _______,
    _______,          _______,      KC_VOLD,      _______,      _______,      _______,       _______,  /* || */  _______, KC_0,      KC_1,         KC_2,               KC_3,         KC_DOT,          _______,
                                                                _______,      _______,       _______,  /* || */  _______, _______,   KC_COMM
  ),
  [LM] = LAYOUT(
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           _______,   _______,      _______,            KC_VOLU,      _______,         _______,
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           _______,   _______,      _______,            KC_MPLY,      _______,         _______,
    _______,          _______,      _______,      _______,      _______,      _______,       _______,  /* || */  _______, _______,   _______,      _______,            KC_VOLD,      _______,         _______,
                                                                _______,      _______,       _______,  /* || */  _______, _______,   _______
  ),
  [LGAME] = LAYOUT(
    KC_ESC,           KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                    /* || */           KC_6,      KC_7,         KC_8,               KC_9,         KC_0,            KC_BSPC,
    KC_TAB,           KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                    /* || */           KC_Y,      KC_U,         KC_I,               KC_O,         KC_P,            KC_BSLS,
    KC_LGUI,          KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                    /* || */           KC_H,      KC_J,         KC_K,               KC_L,         KC_SCLN,         KC_QUOT,
    KC_LSFT,          KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,          KC_SPC,   /* || */  KC_ENT,  KC_N,      KC_M,         KC_COMM,            KC_DOT,       KC_SLSH,         KC_RSFT,
                                                                KC_LCTL,      OSM(MOD_LGUI), KC_SPC,   /* || */  KC_ENT,  KC_BSPC,   TO(LBASE)
  ),
  [LONE] = LAYOUT(
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           TO(LBASE), KC_PGDN,      LGUI(LSFT(KC_TAB)), LGUI(KC_TAB), KC_PGUP,         _______,
    _______,          _______,      _______,      _______,      _______,      _______,                 /* || */           KC_LEFT,   KC_DOWN,      KC_UP,              KC_RIGHT,     _______,         _______,
    _______,          _______,      _______,      _______,      _______,      _______,       _______,  /* || */  _______, KC_BSPC,   KC_ENT,       KC_HOME,            KC_END,       KC_SLSH,         _______,
                                                                _______,      _______,       _______,  /* || */  _______, _______,   _______
  ),
};