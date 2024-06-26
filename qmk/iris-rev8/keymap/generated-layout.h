// This file has been auto-generated by qmkmd (https://github.com/elentok/qmkmd)
enum layers {
  LBASE = 0,
  LF,
  LJ,
  LV,
  LM,
  LGAME,
  LONE,
  LEXP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LBASE] = LAYOUT(
    KC_ESC,        KC_1,         KC_2,             KC_3,             KC_4,             KC_5,                       /* || */           KC_6,      KC_7,         KC_8,               KC_9,         KC_0,            KC_BSPC,
    KC_TAB,        KC_Q,         KC_W,             KC_E,             KC_R,             KC_T,                       /* || */           KC_Y,      KC_U,         KC_I,               KC_O,         KC_P,            KC_BSLS,
    OSM(MOD_LGUI), LCTL_T(KC_A), LSFT_T(KC_S),     LGUI_T(KC_D),     LT(LF, KC_F),     KC_G,                       /* || */           KC_H,      LT(LJ, KC_J), RGUI_T(KC_K),       RSFT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,
    OSM(MOD_LSFT), KC_Z,         KC_X,             LALT_T(KC_C),     LT(LV, KC_V),     KC_B,             KC_SPC,   /* || */  KC_ENT,  KC_N,      LT(LM, KC_M), LALT_T(KC_COMM),    KC_DOT,       KC_SLSH,         OSM(MOD_RSFT),
                                                                     OSM(MOD_LCTL),    OSM(MOD_LSFT),    KC_SPC,   /* || */  KC_ENT,  KC_BSPC,   KC_RALT
  ),
  [LF] = LAYOUT(
    KC_ESC,        _______,      LGUI(LSFT(KC_4)), LGUI(LSFT(KC_5)), KC_DLR,           QK_BOOT,                    /* || */           KC_CIRC,   KC_AMPR,      KC_ASTR,            KC_MINS,      KC_EQL,          _______,
    KC_TAB,        KC_ESC,       _______,          _______,          _______,          _______,                    /* || */           KC_UNDS,   KC_PGDN,      LSFT(KC_TAB),       KC_TAB,       KC_PGUP,         KC_BSLS,
    _______,       _______,      _______,          _______,          _______,          TO(LGAME),                  /* || */           KC_LEFT,   KC_DOWN,      KC_UP,              KC_RIGHT,     KC_DLR,          KC_QUOT,
    _______,       _______,      _______,          _______,          _______,          _______,          _______,  /* || */  _______, KC_BSPC,   KC_ENT,       _______,            _______,      _______,         _______,
                                                                     _______,          _______,          _______,  /* || */  _______, _______,   KC_F12
  ),
  [LJ] = LAYOUT(
    KC_ESC,        KC_EXLM,      KC_AT,            KC_HASH,          LGUI(LSFT(KC_4)), LGUI(LSFT(KC_5)),           /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    KC_TAB,        KC_GRV,       KC_COLN,          KC_LPRN,          KC_RPRN,          KC_TILD,                    /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    KC_EQL,        KC_UNDS,      KC_MINS,          KC_LBRC,          KC_RBRC,          KC_DLR,                     /* || */           TO(LONE),  _______,      _______,            _______,      _______,         _______,
    _______,       KC_PIPE,      KC_LABK,          KC_LCBR,          KC_RCBR,          KC_RABK,          _______,  /* || */  _______, _______,   _______,      _______,            _______,      _______,         _______,
                                                                     _______,          _______,          _______,  /* || */  _______, _______,   _______
  ),
  [LV] = LAYOUT(
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           _______,   _______,      KC_ASTR,            _______,      _______,         _______,
    _______,       _______,      KC_VOLU,          _______,          _______,          _______,                    /* || */           KC_PLUS,   KC_7,         KC_8,               KC_9,         KC_EQL,          _______,
    _______,       LCTL(KC_A),   _______,          KC_MPLY,          _______,          _______,                    /* || */           KC_MINS,   KC_4,         KC_5,               KC_6,         KC_0,            KC_SLSH,
    _______,       _______,      KC_VOLD,          _______,          _______,          _______,          _______,  /* || */  _______, KC_0,      KC_1,         KC_2,               KC_3,         KC_DOT,          _______,
                                                                     _______,          _______,          _______,  /* || */  _______, _______,   KC_COMM
  ),
  [LM] = LAYOUT(
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           _______,   _______,      _______,            KC_VOLU,      _______,         _______,
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           _______,   _______,      _______,            KC_MPLY,      _______,         _______,
    _______,       _______,      _______,          _______,          _______,          _______,          _______,  /* || */  _______, _______,   _______,      _______,            KC_VOLD,      _______,         _______,
                                                                     _______,          _______,          _______,  /* || */  _______, _______,   _______
  ),
  [LGAME] = LAYOUT(
    KC_ESC,        KC_1,         KC_2,             KC_3,             KC_4,             KC_5,                       /* || */           KC_6,      KC_7,         KC_8,               KC_9,         KC_0,            KC_BSPC,
    KC_TAB,        KC_Q,         KC_W,             KC_E,             KC_R,             KC_T,                       /* || */           KC_Y,      KC_U,         KC_I,               KC_O,         KC_P,            KC_BSLS,
    KC_LGUI,       KC_A,         KC_S,             KC_D,             KC_F,             KC_G,                       /* || */           KC_H,      KC_J,         KC_K,               KC_L,         KC_SCLN,         KC_QUOT,
    KC_LSFT,       KC_Z,         KC_X,             KC_C,             KC_V,             KC_B,             KC_SPC,   /* || */  KC_ENT,  KC_N,      KC_M,         KC_COMM,            KC_DOT,       KC_SLSH,         KC_RSFT,
                                                                     KC_LCTL,          OSM(MOD_LGUI),    KC_SPC,   /* || */  KC_ENT,  KC_BSPC,   TO(LBASE)
  ),
  [LONE] = LAYOUT(
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           TO(LBASE), KC_PGDN,      LGUI(LSFT(KC_TAB)), LGUI(KC_TAB), KC_PGUP,         _______,
    _______,       _______,      _______,          _______,          _______,          _______,                    /* || */           KC_LEFT,   KC_DOWN,      KC_UP,              KC_RIGHT,     _______,         _______,
    _______,       _______,      _______,          _______,          _______,          _______,          _______,  /* || */  _______, KC_BSPC,   KC_ENT,       KC_HOME,            KC_END,       KC_SLSH,         _______,
                                                                     _______,          _______,          _______,  /* || */  _______, _______,   TO(LBASE)
  ),
  [LEXP] = LAYOUT(
    KC_ESC,        KC_EXLM,      KC_AT,            KC_HASH,          LGUI(LSFT(KC_4)), LGUI(LSFT(KC_5)),           /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,       KC_GRV,       KC_COLN,          KC_LPRN,          KC_RPRN,          KC_TILD,                    /* || */           _______,   _______,      _______,            _______,      _______,         _______,
    _______,       KC_UNDS,      KC_MINS,          KC_LBRC,          KC_RBRC,          KC_DLR,                     /* || */           KC_LEFT,   KC_DOWN,      KC_UP,              KC_RIGHT,     _______,         _______,
    _______,       KC_PIPE,      KC_LABK,          KC_LCBR,          KC_RCBR,          KC_RABK,          _______,  /* || */  _______, KC_BSPC,   KC_ENT,       KC_HOME,            KC_END,       _______,         _______,
                                                                     _______,          _______,          _______,  /* || */  _______, _______,   _______
  ),
};
const uint16_t PROGMEM combo0[] = {LGUI_T(KC_D), LT(LF, KC_F), COMBO_END};
const uint16_t PROGMEM combo1[] = {KC_E, LT(LF, KC_F), COMBO_END};
const uint16_t PROGMEM combo2[] = {LSFT_T(KC_S), LGUI_T(KC_D), COMBO_END};
const uint16_t PROGMEM combo3[] = {LT(LJ, KC_J), RGUI_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo4[] = {LT(LJ, KC_J), RSFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo5[] = {KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo6[] = {RGUI_T(KC_K), RSFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo7[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo8[] = {KC_W, LT(LF, KC_F), COMBO_END};
const uint16_t PROGMEM combo9[] = {LT(LJ, KC_J), KC_I, COMBO_END};
const uint16_t PROGMEM combo10[] = {LT(LJ, KC_J), KC_O, COMBO_END};
const uint16_t PROGMEM combo11[] = {LT(LM, KC_M), LALT_T(KC_COMM), KC_DOT, COMBO_END};
const uint16_t PROGMEM combo12[] = {LT(LF, KC_F), KC_R, COMBO_END};
const uint16_t PROGMEM combo13[] = {LT(LJ, KC_J), KC_U, COMBO_END};
const uint16_t PROGMEM combo14[] = {RSFT_T(KC_L), RCTL_T(KC_SCLN), COMBO_END};

combo_t key_combos[15] = {
  COMBO(combo0, KC_DLR),
  COMBO(combo1, KC_LBRC),
  COMBO(combo2, LCTL(KC_A)),
  COMBO(combo3, KC_ESC),
  COMBO(combo4, KC_UNDS),
  COMBO(combo5, LCTL(LSFT(LGUI(KC_I)))),
  COMBO(combo6, KC_COLN),
  COMBO(combo7, KC_TILD),
  COMBO(combo8, KC_GRV),
  COMBO(combo9, KC_MINS),
  COMBO(combo10, KC_EQL),
  COMBO(combo11, LGUI(KC_1)),
  COMBO(combo12, KC_LBRC),
  COMBO(combo13, KC_RBRC),
  COMBO(combo14, KC_RIGHT),
};