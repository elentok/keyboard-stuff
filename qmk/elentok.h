// Global settings for all of my keyboards

// Layers

enum elentok_layers {
  BASE,
  LF, // When F is held
  LJ, // When J is held
};

// Left home row mods
#define EL_A LCTL_T(KC_A)
#define EL_S LALT_T(KC_S)
#define EL_D LGUI_T(KC_D)
#define EL_F LT(LF, KC_F)

// Right home row mods
#define EL_SCLN RCTL_T(KC_SCLN)
#define EL_L    RALT_T(KC_L)
#define EL_K    RGUI_T(KC_K)
#define EL_J    LT(LJ, KC_J)

// Space
#define EL_SPC LSFT_T(KC_SPC)

// Layer changes
#define EL_LF_Q KC_ESC
#define EL_LJ_Q KC_ESC
#define EL_LF_G KC_TAB
#define EL_LJ_G KC_TAB
#define EL_LF_N KC_ENT
#define EL_LJ_N KC_ENT
#define EL_LF_QUOT KC_BSPC
#define EL_LJ_QUOT KC_BSPC