type LeftLetter = "q" | "w" | "e" | "r" | "t" | "a" | "s" | "d" | "f" | "g" | "z" | "x" | "v" | "b"
type RightLetter = "y" | "u" | "i" | "o" | "p" | "h" | "j" | "k" | "l" | ";" | "b" | "n" | "m" | "," | "." | "/"
type Letter = LeftLetter | RightLetter

type HalfRow = [
  string,
  string,
  string,
  string,
  string,
]
type Row = { left: HalfRow; right: HalfRow }
type Layer = [Row, Row, Row]
type Layout = Record<string, Layer>

type Layer2 = Record<Letter, string>

const BASE_LAYER: Layer2 = {
  ...{ q: "KC_Q", w: "KC_W", e: "KC_E", r: "KC_R", t: "KC_T", y: "KC_Y", u: "KC_U", i: "KC_I", o: "KC_O", p: "KC_P" },
  ...{
    a: "LCTL_T(KC_A)",
    s: "LALT_T(KC_S)",
    d: "LGUI_T(KC_D)",
    f: "LT(LF, KC_F)",
    g: "KC_G",
    h: "KC_H",
    j: "E_J",
    k: "E_K",
    l: "E_L",
    ";": "E_SCLN",
  },
  ...{
    z: "KC_Z",
    x: "KC_X",
    c: "KC_C",
    v: "KC_V",
    b: "KC_B",
    n: "KC_N",
    m: "KC_M",
    ",": "KC_COMM",
    ".": "KC_DOT",
    "/": "KC_SLSH",
  },
}

const ___ = "_______"

const layout: Layout = {
  BASE: [
    {
      left: ["KC_Q", "KC_W", "KC_E", "KC_R", "KC_T"],
      right: ["KC_Y", "KC_U", "KC_I", "KC_O", "KC_P"],
    },
    {
      left: ["LCTL_T(KC_A)", "LALT_T(KC_S)", "LGUI_T(KC_D)", "LT(LF, KC_F)", "KC_G"],
      right: ["KC_H", "E_J", "E_K", "E_L", "E_SCLN"],
    },
    {
      left: ["KC_Z", "KC_X", "KC_C", "KC_V", "KC_B"],
      right: ["KC_N", "KC_M", "KC_COMM", "KC_DOT", "KC_SLSH"],
    },
  ],
  // LF: [
  //   {
  //     left: ["KC_ESC", "KC_GRV", "KC_COLN", ___, ___],
  //     right: ["KC_TILDE", "KC_PLUS", "KC_MINS", "KC_EQL", "KC_UNDS"],
  //   },
  //   {
  //     left: ["KC_ESC", "KC_GRV", "KC_COLN", ___, ___],
  //     right: ["KC_TILDE", "KC_PLUS", "KC_MINS", "KC_EQL", "KC_UNDS"],
  //   },
  // ],
}

console.info(layout)
