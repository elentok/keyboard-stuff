// Global settings for all of my keyboards

// Layers

enum elentok_layers {
  BASE,
  L1,
  L2,
};

// Left home row mods
#define EL_A LCTL_T(KC_A)
#define EL_S LALT_T(KC_S)
#define EL_D LGUI_T(KC_D)
#define EL_F LT(L1, KC_F)

// Right home row mods
#define EL_SCLN RCTL_T(KC_A)
#define EL_L RALT_T(KC_S)
#define EL_K RGUI_T(KC_D)
#define EL_J LT(L1, KC_F)

// Space
#define EL_SPC LSFT_T(KC_SPC)
