type Row1Chars = "q" | "w" | "e" | "r" | "t" | "y" | "u" | "i" | "o" | "p"
type Row2Chars = "a" | "s" | "d" | "f" | "g" | "h" | "j" | "k" | "l" | ";"
type Row3Chars = "z" | "x" | "c" | "v" | "b" | "n" | "m" | "," | "." | "/"

type LayerName = "BASE" | "LF" | "LJ"

type Layer = [
  Partial<Record<Row1Chars, string>>,
  Partial<Record<Row2Chars, string>>,
  Partial<Record<Row3Chars, string>>,
]

type Layout = Partial<Record<LayerName, Layer>>

const CharToCode = new Map<string, string>([
  ["~", "KC_TILDE"],
  ["=", "KC_EQL"],
  ["-", "KC_MINS"],
  ["+", "KC_PLUS"],
  ["_", "KC_UNDS"],
])

function to(layer: LayerName): string {
  return `TO(${layer})`
}

const layout: Layout = {
  BASE: [
    { q: "q", w: "w", e: "e", r: "r", t: "t", y: "y", u: "u", i: "i", o: "o", p: "p" },
    {
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
    {
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
  ],
  LF: [
    { q: "KC_ESC", w: "KC_GRV", e: "KC_COLN", u: "~", i: "+", o: "-", p: "_" },
    { g: to("BASE"), h: "KC_LEFT", j: "KC_DOWN", k: "KC_UP", l: "KC_RIGHT" },
    { n: "KC_BSPC", m: "KC_ENT", ",": "KC_HOME", ".": "KC_END", "/": "KC_BSLS" },
  ],
}

console.info(layout)
