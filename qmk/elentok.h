// Global settings for all of my keyboards
// vim: foldmethod=marker

// Layer config {{{1

enum elentok_layers {
  L1 = 0, // Base layer
  L2, // Symbols
  L3, // Movement
  L4,

  LF, // When F is held
  LJ, // When J is held
  GAME,

  // Hillside-specific (for now)
  SYM,
  NAV,
  ADJUST,

  // Vi-mode
  VI_VIS,
};

// Custom keycodes {{{1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  EC_VI_C,
  EC_VI_X,
  EC_VI_O,
  EC_VI_Y,
  EC_WIN, // Win switch
  EC_LOCK,
  EC_RED,
  EC_NO_RED,
  EC_ALFRED,
};

// Misc {{{1

// Layer switching
#define TO_L1 TO(L1)
#define TO_L2 TO(L2)
#define TO_L3 TO(L3)
#define TO_L4 TO(L4)
#define TO_VIS TO(VI_VIS)
#define TO_GAME TO(GAME)

// Home row mods {{{1

// Left home row mods
#define E_A LCTL_T(KC_A)
// #define E_A KC_A
#define E_S LALT_T(KC_S)
#define E_D LGUI_T(KC_D)
#define E_F LT(LF, KC_F)

// Right home row mods
#define E_SCLN RCTL_T(KC_SCLN)
// #define E_SCLN KC_SCLN
#define E_L    RALT_T(KC_L)
#define E_K    RGUI_T(KC_K)
#define E_J    LT(LJ, KC_J)

// Thumbs {{{1
// TODO: rename from LSPC/RPSC to LTHM, RTHM
#define E_LTHM1 KC_SPC
#define E_LTHM2 OSM(MOD_LSFT)
// #define E_LSPC KC_SPC
// #define E_RSPC TD(TD_LSFT_CAPS)
// #define E_RTHM1 OSM(MOD_LSFT)
#define E_RTHM1 OSM(MOD_RCTL)
#define E_RTHM2 TO_L2
// #define E_RSPC OSM(MOD_LSFT)
// #define E_RSPC KC_LSFT

// Layer Num {{{1

#define EN_Q KC_GRV
#define EN_W KC_COLN
#define EN_E KC_LPRN
#define EN_R KC_RPRN
#define EN_T KC_TILDE

#define EN_A KC_EQUAL
#define EN_S KC_MINS
#define EN_D KC_LBRC
#define EN_F KC_RBRC
#define EN_G KC_TAB

#define EN_Z KC_PIPE
#define EN_X KC_UNDS
#define EN_C KC_LCBR
#define EN_V KC_RCBR
#define EN_B KC_MPLY

// Layer J {{{1
// Layer J - Row 1
#define EJ_Q KC_ESC
#define EJ_W KC_COLN
#define EJ_E KC_LPRN
#define EJ_R KC_RPRN
#define EJ_T LSFT(KC_TAB)

// Layer J - Row 2
#define EJ_A KC_SLSH
#define EJ_S KC_QUES
#define EJ_D KC_LBRC
#define EJ_F KC_RBRC
#define EJ_G KC_TAB

// TODO: remove
#define EJ_QUOT KC_BSPC

// Layer J - Row 3
#define EJ_Z KC_PIPE
#define EJ_X KC_UNDS
#define EJ_C KC_LCBR
#define EJ_V KC_RCBR
#define EJ_B KC_MPLY

#define EJ_N KC_ENT
#define EJ_M KC_BSPC

// Layer F {{{1
#define EF_9 KC_MINS
#define EF_0 KC_EQUAL

// Layer F - Row 1
#define EF_Q KC_ESC
#define EF_W KC_GRV
#define EF_E KC_COLN

#define EF_Y KC_TILDE
#define EF_U KC_PLUS
#define EF_I KC_MINS
#define EF_O KC_EQL
#define EF_P KC_UNDS

// Layer F - Row 2
#define EF_J KC_ENT
#define EF_K KC_BSPC
#define EF_G KC_TAB
#define EF_QUOT KC_BSPC

#define EF_SCLN KC_TAB

// Layer F - Row 3
#define EF_N KC_BSPC
#define EF_M KC_ENT
#define EF_COMM KC_HOME
#define EF_DOT KC_END
#define EF_SLSH KC_BSLS
#define EF_DEL KC_BSLS

// Layer F - Thumb
#define EF_LSPC KC_ENT
#define EF_RSPC KC_BSPC

// Layer VI {{{1

#define EVI_ESC TO_L1

// Layer VI - Row 1 {{{2
#define EVI_Q KC_ESC 
//TO_L1
#define EVI_W A(KC_RIGHT)
#define EVI_E A(KC_RIGHT)
#define EVI_R LGUI(S(KC_TAB))
// #define EVI_T EC_WIN

#define EVI_Y KC_WBAK
// LGUI(KC_C)
#define EVI_U LGUI(S(KC_LBRC))
// LGUI(KC_Z)
#define EVI_I LGUI(S(KC_RBRC))
// TO_L1
#define EVI_O KC_WFWD
// EC_VI_O
#define EVI_P KC_BSPC
// G(KC_V)

// Layer VI - Row 2 {{{2
// #define EVI_A   KC_VOLU
#define EVI_A KC_TAB
//LCTL_T(KC_VOLU)
// TODO: figure a better usage for this
#define EVI_S   KC_EQUAL
#define EVI_D   LGUI_T(KC_DEL)
// #define EVI_F   EC_ALFRED
#define EVI_F   KC_TAB
#define EVI_G   EC_WIN

#define EVI_H   KC_LEFT
#define EVI_J   KC_DOWN
#define EVI_K   KC_UP
#define EVI_L   KC_RIGHT
#define EVI_CLN KC_ENT
// #define EVI_CLN KC_PIPE

// Layer VI - Row 3 {{{2
#define EVI_Z KC_GRV
// KC_VOLD
#define EVI_X EC_VI_X
#define EVI_C EC_VI_C
#define EVI_V TO_VIS
#define EVI_B A(KC_LEFT)

#define EVI_N   LCTL(S(KC_TAB))
#define EVI_M   LCTL(KC_TAB)
#define EVI_COM G(KC_LEFT)
#define EVI_DOT G(KC_RIGHT)

// Layer VI Visual {{{1
#define EVV_ESC TO_L3
#define EVV_4 G(S(KC_RIGHT))
#define EVV_0 G(S(KC_LEFT))

// Layer VI Visual - Row1 {{{2
#define EVV_Q TO_L3
#define EVV_W A(S(KC_RIGHT))
#define EVV_E A(S(KC_RIGHT))

#define EVV_Y EC_VI_Y
#define EVV_P G(KC_V)

// Layer VI Visual - Row2 {{{2

#define EVV_D KC_DEL

#define EVV_H S(KC_LEFT)
#define EVV_J S(KC_DOWN)
#define EVV_K S(KC_UP)
#define EVV_L S(KC_RIGHT)

// Layer VI Visual - Row3 {{{2

#define EVV_X EC_VI_X
#define EVV_C EC_VI_C
#define EVV_B A(S(KC_LEFT))

#define EVV_COM G(S(KC_LEFT))
#define EVV_DOT G(S(KC_RIGHT))

