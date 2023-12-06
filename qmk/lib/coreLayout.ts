import { to } from "./helpers.ts"
import { CoreLayout, layerNames, Layout, LayoutExtraKeys } from "./types.ts"

export const coreLayout: CoreLayout = {
  BASE: {
    row1: { q: "q", w: "w", e: "e", r: "r", t: "t", y: "y", u: "u", i: "i", o: "o", p: "p" },
    row2: {
      a: "LCTL_T(KC_A)",
      s: "LALT_T(KC_S)",
      d: "LGUI_T(KC_D)",
      f: "LT(LF, KC_F)",
      g: "g",
      h: "h",
      j: "LT(LJ, KC_J)",
      k: "RGUI_T(KC_K)",
      l: "RALT_T(KC_L)",
      ";": "RCTL_T(KC_SCLN)",
    },
    row3: {
      z: "z",
      x: "x",
      c: "c",
      v: "v",
      b: "b",
      n: "n",
      m: "m",
      ",": "KC_COMM",
      ".": "KC_DOT",
      "/": "KC_SLSH",
    },
  },
  LF: {
    row1: { q: "KC_ESC", w: "KC_GRV", e: "KC_COLN", u: "~", i: "+", o: "-", p: "_" },
    row2: { g: to("BASE"), h: "KC_LEFT", j: "KC_DOWN", k: "KC_UP", l: "KC_RIGHT" },
    row3: { n: "KC_BSPC", m: "KC_ENT", ",": "KC_HOME", ".": "KC_END", "/": "KC_BSLS" },
  },
  LJ: {
    row1: {},
    row2: {},
    row3: {},
  },
}

export function createLayout<T>(extraKeys: LayoutExtraKeys<T>): Layout<T> {
  const newLayout: Layout<T> = {}

  for (const layerName of layerNames) {
    newLayout[layerName] = { ...coreLayout[layerName], extra: extraKeys[layerName] ?? {} }
  }

  return newLayout
}
