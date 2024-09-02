// This file has been auto-generated by qmkmd (https://github.com/elentok/qmkmd)
enum layers {
  LBASE = 0,
  LF,
  LJ,
  LV,
  LM,
  LL1,
  LGAME,
  LONE,
  LEXP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LBASE] = LAYOUT(
    KC_ESC,           KC_1,         KC_2,               KC_3,             KC_4,             KC_5,                       /* || */           KC_6,          KC_7,         KC_8,               KC_9,         KC_0,            KC_BSPC,
    KC_TAB,           KC_Q,         KC_W,               KC_E,             KC_R,             KC_T,                       /* || */           KC_Y,          KC_U,         KC_I,               KC_O,         KC_P,            KC_BSLS,
    OSM(MOD_LGUI),    LCTL_T(KC_A), KC_S,               KC_D,             KC_F,             KC_G,                       /* || */           KC_H,          KC_J,         KC_K,               KC_L,         RCTL_T(KC_SCLN), KC_QUOT,
    OSM(MOD_LSFT),    KC_Z,         KC_X,               LALT_T(KC_C),     LT(LV, KC_V),     KC_B,             KC_SPC,   /* || */  KC_ENT,  KC_N,          LT(LM, KC_M), LALT_T(KC_COMM),    KC_DOT,       KC_SLSH,         OSM(MOD_RSFT),
                                                                          OSM(MOD_LCTL),    OSL(LEXP),        KC_SPC,   /* || */  KC_ENT,  OSM(MOD_RSFT), KC_RALT
  ),
  [LF] = LAYOUT(
    _______,          _______,      LGUI(LSFT(KC_4)),   LGUI(LSFT(KC_5)), KC_DLR,           QK_BOOT,                    /* || */           KC_CIRC,       KC_AMPR,      KC_ASTR,            KC_MINS,      KC_EQL,          _______,
    _______,          KC_LALT,      KC_LSFT,            _______,          _______,          _______,                    /* || */           KC_UNDS,       KC_MINS,      LSFT(KC_TAB),       KC_TAB,       KC_PGUP,         KC_BSLS,
    _______,          KC_LCTL,      KC_LGUI,            _______,          _______,          TO(LGAME),                  /* || */           KC_LEFT,       KC_DOWN,      KC_UP,              KC_RIGHT,     KC_DLR,          KC_QUOT,
    _______,          _______,      _______,            _______,          _______,          _______,          _______,  /* || */  _______, _______,       KC_BSPC,      KC_ENT,             _______,      _______,         _______,
                                                                          _______,          _______,          _______,  /* || */  _______, _______,       KC_F12
  ),
  [LJ] = LAYOUT(
    KC_ESC,           KC_EXLM,      LGUI(LSFT(KC_TAB)), LGUI(KC_TAB),     LGUI(LSFT(KC_4)), LGUI(LSFT(KC_5)),           /* || */           QK_BOOT,       _______,      _______,            _______,      _______,         _______,
    KC_TAB,           KC_GRV,       KC_COLN,            KC_LPRN,          KC_RPRN,          KC_TILD,                    /* || */           _______,       _______,      _______,            KC_RSFT,      KC_LALT,         _______,
    KC_EQL,           KC_UNDS,      KC_MINS,            KC_LBRC,          KC_RBRC,          KC_DLR,                     /* || */           TO(LONE),      _______,      _______,            KC_RGUI,      KC_RCTL,         _______,
    _______,          KC_PIPE,      KC_LABK,            KC_LCBR,          KC_RCBR,          KC_RABK,          _______,  /* || */  _______, _______,       _______,      _______,            _______,      _______,         _______,
                                                                          _______,          _______,          _______,  /* || */  _______, _______,       _______
  ),
  [LV] = LAYOUT(
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           _______,       _______,      KC_ASTR,            _______,      _______,         _______,
    _______,          _______,      KC_VOLU,            _______,          _______,          _______,                    /* || */           KC_PLUS,       KC_7,         KC_8,               KC_9,         KC_EQL,          _______,
    _______,          LCTL(KC_A),   KC_LGUI,            KC_MPLY,          _______,          _______,                    /* || */           KC_MINS,       KC_4,         KC_5,               KC_6,         KC_0,            KC_SLSH,
    _______,          _______,      KC_LSFT,            _______,          _______,          _______,          _______,  /* || */  _______, KC_0,          KC_1,         KC_2,               KC_3,         KC_DOT,          _______,
                                                                          _______,          _______,          _______,  /* || */  _______, _______,       KC_COMM
  ),
  [LM] = LAYOUT(
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           _______,       _______,      _______,            _______,      _______,         _______,
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           _______,       _______,      _______,            KC_VOLU,      _______,         _______,
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           _______,       _______,      _______,            KC_MPLY,      _______,         _______,
    _______,          _______,      _______,            _______,          _______,          _______,          _______,  /* || */  _______, _______,       _______,      _______,            KC_VOLD,      _______,         _______,
                                                                          _______,          _______,          _______,  /* || */  _______, _______,       _______
  ),
  [LL1] = LAYOUT(
    KC_ESC,           KC_EXLM,      KC_AT,              KC_HASH,          LGUI(LSFT(KC_4)), LGUI(LSFT(KC_5)),           /* || */           _______,       _______,      _______,            _______,      _______,         _______,
    KC_TAB,           KC_GRV,       KC_COLN,            KC_LPRN,          KC_RPRN,          KC_TILD,                    /* || */           _______,       _______,      _______,            _______,      _______,         _______,
    KC_EQL,           KC_UNDS,      KC_MINS,            KC_LBRC,          KC_RBRC,          KC_DLR,                     /* || */           TO(LONE),      _______,      _______,            _______,      _______,         _______,
    _______,          KC_PIPE,      KC_LABK,            KC_LCBR,          KC_RCBR,          KC_RABK,          _______,  /* || */  _______, _______,       _______,      _______,            _______,      _______,         _______,
                                                                          _______,          _______,          _______,  /* || */  _______, _______,       _______
  ),
  [LGAME] = LAYOUT(
    KC_ESC,           KC_1,         KC_2,               KC_3,             KC_4,             KC_5,                       /* || */           KC_6,          KC_7,         KC_8,               KC_9,         KC_0,            KC_BSPC,
    KC_TAB,           KC_Q,         KC_W,               KC_E,             KC_R,             KC_T,                       /* || */           KC_Y,          KC_U,         KC_I,               KC_O,         KC_P,            KC_BSLS,
    KC_LGUI,          KC_A,         KC_S,               KC_D,             KC_F,             KC_G,                       /* || */           KC_H,          KC_J,         KC_K,               KC_L,         KC_SCLN,         KC_QUOT,
    KC_LSFT,          KC_Z,         KC_X,               KC_C,             KC_V,             KC_B,             KC_SPC,   /* || */  KC_ENT,  KC_N,          KC_M,         KC_COMM,            KC_DOT,       KC_SLSH,         KC_RSFT,
                                                                          KC_LCTL,          OSL(LEXP),        KC_SPC,   /* || */  KC_ENT,  KC_BSPC,       TO(LBASE)
  ),
  [LONE] = LAYOUT(
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           _______,       _______,      _______,            _______,      _______,         _______,
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           TO(LBASE),     KC_PGDN,      LGUI(LSFT(KC_TAB)), LGUI(KC_TAB), KC_PGUP,         _______,
    _______,          _______,      _______,            _______,          _______,          _______,                    /* || */           KC_LEFT,       KC_DOWN,      KC_UP,              KC_RIGHT,     _______,         _______,
    _______,          _______,      _______,            _______,          _______,          _______,          _______,  /* || */  _______, KC_BSPC,       KC_ENT,       KC_HOME,            KC_END,       KC_SLSH,         _______,
                                                                          _______,          _______,          _______,  /* || */  _______, _______,       TO(LBASE)
  ),
  [LEXP] = LAYOUT(
    LCTL(LGUI(KC_Q)), KC_EXLM,      LGUI(KC_TAB),       KC_HASH,          LGUI(LSFT(KC_4)), QK_BOOT,                    /* || */           QK_BOOT,       _______,      _______,            _______,      _______,         _______,
    KC_VOLU,          KC_GRV,       KC_COLN,            KC_LPRN,          KC_RPRN,          KC_TILD,                    /* || */           _______,       _______,      _______,            _______,      _______,         _______,
    KC_MPLY,          KC_UNDS,      KC_MINS,            KC_LBRC,          KC_RBRC,          TO(LGAME),                  /* || */           KC_LEFT,       KC_DOWN,      KC_UP,              KC_RIGHT,     _______,         _______,
    KC_VOLD,          KC_PIPE,      KC_LABK,            LGUI(KC_C),       LGUI(KC_V),       KC_RABK,          _______,  /* || */  _______, KC_BSPC,       KC_ENT,       KC_HOME,            KC_END,       _______,         _______,
                                                                          KC_MPLY,          _______,          _______,  /* || */  _______, _______,       _______
  ),
};
const uint16_t PROGMEM combo0[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo1[] = {KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = {LSFT_T(KC_S), KC_D, COMBO_END};
const uint16_t PROGMEM combo3[] = {KC_J, RSFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo4[] = {KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo5[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo6[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo7[] = {KC_J, KC_I, COMBO_END};
const uint16_t PROGMEM combo8[] = {KC_J, KC_O, COMBO_END};
const uint16_t PROGMEM combo9[] = {LT(LM, KC_M), LALT_T(KC_COMM), KC_DOT, COMBO_END};
const uint16_t PROGMEM combo10[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM combo11[] = {KC_J, KC_U, COMBO_END};
const uint16_t PROGMEM combo12[] = {RSFT_T(KC_L), RCTL_T(KC_SCLN), COMBO_END};
const uint16_t PROGMEM combo13[] = {RSFT_T(KC_L), KC_DOT, COMBO_END};
const uint16_t PROGMEM combo14[] = {KC_K, LALT_T(KC_COMM), COMBO_END};
const uint16_t PROGMEM combo15[] = {KC_J, LT(LM, KC_M), COMBO_END};
const uint16_t PROGMEM combo16[] = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM combo17[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo18[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo19[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo20[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo21[] = {LALT_T(KC_C), LT(LV, KC_V), COMBO_END};

combo_t key_combos[22] = {
  COMBO(combo0, KC_DLR),
  COMBO(combo1, OSM(MOD_LGUI)),
  COMBO(combo2, LCTL(KC_A)),
  COMBO(combo3, KC_UNDS),
  COMBO(combo4, LCTL(LSFT(LGUI(KC_I)))),
  COMBO(combo5, KC_TILD),
  COMBO(combo6, KC_GRV),
  COMBO(combo7, OSM(MOD_RGUI)),
  COMBO(combo8, KC_EQL),
  COMBO(combo9, LGUI(KC_1)),
  COMBO(combo10, KC_LBRC),
  COMBO(combo11, KC_RBRC),
  COMBO(combo12, KC_RIGHT),
  COMBO(combo13, KC_RIGHT),
  COMBO(combo14, KC_UP),
  COMBO(combo15, KC_DOWN),
  COMBO(combo16, KC_LEFT),
  COMBO(combo17, OSM(MOD_RSFT)),
  COMBO(combo18, OSM(MOD_LSFT)),
  COMBO(combo19, OSL(LJ)),
  COMBO(combo20, OSL(LF)),
  COMBO(combo21, OSL(LV)),
};