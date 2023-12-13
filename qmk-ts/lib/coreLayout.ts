import { LT, MT, OSM, to } from "./helpers.ts"
import { CoreLayout, layerNames, Layout, LayoutExtraKeys } from "./types.ts"

export const coreLayout: CoreLayout = {
  BASE: {
    row1: { q: "q", w: "w", e: "e", r: "r", t: "t", y: "y", u: "u", i: "i", o: "o", p: "p" },
    row2: {
      a: MT("LCTL", "a"),
      s: MT("LALT", "s"),
      d: MT("LGUI", "d"),
      f: LT("LF", "KC_F"),
      g: "g",
      h: "h",
      j: LT("LJ", "j"),
      k: MT("RGUI", "k"),
      l: MT("RALT", "l"),
      ";": MT("RCTL", ";"),
    },
    row3: {
      z: "z",
      x: "x",
      c: "c",
      v: "v",
      b: "b",
      n: "n",
      m: "m",
      ",": ",",
      ".": ".",
      "/": "/",
    },
    thumb: {
      "l-thumb1": "KC_SPC",
      "l-thumb2": OSM("LGUI"),
      "r-thumb1": OSM("LSFT"),
      "r-thumb2": "KC_ENT",
    },
  },
  LF: {
    row1: { q: "KC_ESC", w: "`", e: ":", u: "~", i: "+", o: "-", p: "_" },
    row2: { g: to("BASE"), h: "KC_LEFT", j: "KC_DOWN", k: "KC_UP", l: "KC_RIGHT" },
    row3: { n: "KC_BSPC", m: "KC_ENT", ",": "KC_HOME", ".": "KC_END", "/": "\\" },
    thumb: {},
  },
  LJ: {
    row1: {},
    row2: {},
    row3: {},
    thumb: {},
  },
}

export function createLayout<T extends string>(extraKeys: LayoutExtraKeys<T>): Layout<T> {
  const newLayout: Layout<T> = {}

  for (const layerName of layerNames) {
    newLayout[layerName] = { ...coreLayout[layerName], extra: extraKeys[layerName] ?? {} }
  }

  return newLayout
}
