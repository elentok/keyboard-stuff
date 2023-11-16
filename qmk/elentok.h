// Global settings for all of my keyboards
// vim: foldmethod=marker

// Layer config {{{1

enum elentok_layers {
  BASE = 0,
  LF, // When F is held
  LJ, // When J is held
  GAME,

  // Hillside-specific (for now)
  SYM,
  NAV,
  ADJUST,

  // Vi-mode
  VI_NORM,
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

// Vi 
#define TO_NORM TO(VI_NORM)
#define TO_VIS TO(VI_VIS)
#define TO_BASE TO(BASE)

// Home row mods {{{1

// Left home row mods
// #define E_A LCTL_T(KC_A)
#define E_A KC_A
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
#define E_LSPC KC_SPC
// #define E_RSPC TD(TD_LSFT_CAPS)
#define E_RSPC OSM(MOD_LSFT)
// #define E_RSPC KC_LSFT

// Layer J {{{1
// Layer J - Row 1
#define EJ_Q KC_ESC
#define EJ_W KC_PLUS
#define EJ_E KC_LPRN
#define EJ_R KC_RPRN
#define EJ_T LSFT(KC_TAB)

// Layer J - Row 2
#define EJ_A KC_VOLU
#define EJ_S KC_MINS
#define EJ_D KC_LBRC
#define EJ_F KC_RBRC
#define EJ_G KC_TAB

// TODO: remove
#define EJ_QUOT KC_BSPC

// Layer J - Row 3
#define EJ_X KC_UNDS
#define EJ_C KC_LCBR
#define EJ_V KC_RCBR

#define EJ_N KC_ENT
#define EJ_M KC_BSPC

// Layer F {{{1
// Layer F - Row 1
#define EF_Q KC_ESC

// Layer F - Row 2
#define EF_G KC_TAB
#define EF_QUOT KC_BSPC

// Layer F - Row 3
#define EF_N KC_ENT
#define EF_M KC_BSPC

// Layer F - Thumb
#define EF_LSPC KC_ENT
#define EF_RSPC KC_BSPC

// Layer VI {{{1

#define EVI_ESC TO_BASE

// Layer VI - Row 1 {{{2
#define EVI_Q TO_BASE
#define EVI_W A(KC_RIGHT)
#define EVI_E A(KC_RIGHT)
#define EVI_R LGUI(S(KC_TAB))
// #define EVI_T EC_WIN

#define EVI_Y LGUI(KC_C)
#define EVI_U LGUI(KC_Z)
#define EVI_I TO_BASE
#define EVI_O EC_VI_O
#define EVI_P G(KC_V)

// Layer VI - Row 2 {{{2
#define EVI_A   KC_MINS
#define EVI_S   KC_EQUAL
#define EVI_D   KC_DEL
#define EVI_F   EC_ALFRED
#define EVI_G   EC_WIN

#define EVI_H   KC_LEFT
#define EVI_J   KC_DOWN
#define EVI_K   KC_UP
#define EVI_L   KC_RIGHT
#define EVI_CLN KC_PIPE

// Layer VI - Row 3 {{{2
// #define EVI_Z
#define EVI_Z KC_PLUS
#define EVI_X EC_VI_X
#define EVI_C EC_VI_C
#define EVI_V TO_VIS

#define EVI_N   LCTL(S(KC_TAB))
#define EVI_M   LCTL(KC_TAB)
#define EVI_COM G(KC_LEFT)
#define EVI_DOT G(KC_RIGHT)

// Layer VI Visual {{{1
#define EVV_ESC TO_NORM

// Layer VI Visual - Row1 {{{2
#define EVV_Q TO_NORM

// Layer VI Visual - Row2 {{{2
// Layer VI Visual - Row3 {{{2
