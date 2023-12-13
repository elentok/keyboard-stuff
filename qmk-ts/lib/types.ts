import { Keycode } from "./generated-types.ts"

export const rawAliases = {
  "`": "KC_GRV",
  ":": "KC_COLN",
  ";": "KC_SCLN",
  ",": "KC_COMM",
  ".": "KC_DOT",
  "[": "KC_LBRC",
  "]": "KC_RBRC",
  "<": "KC_LABK",
  ">": "KC_RABK",
  "{": "KC_LCBR",
  "}": "KC_RBRC",
  "(": "KC_LPRN",
  ")": "KC_RPRN",
  "~": "KC_TILD",
  "=": "KC_EQL",
  "-": "KC_MINS",
  "+": "KC_PLUS",
  "_": "KC_UNDS",
  "|": "KC_PIPE",
  "/": "KC_SLSH",
  "\\": "KC_BSLS",
  '"': "KC_DQUO",
  "?": "KC_QUES",
  "!": "KC_EXLM",
  "@": "KC_AT",
  "#": "KC_HASH",
  "$": "KC_DLR",
  "%": "KC_PERC",
  "^": "KC_CIRC",
  "&": "KC_AMPR",
  "*": "KC_ASTR",
  "a": "KC_A",
  "b": "KC_B",
  "c": "KC_C",
  "d": "KC_D",
  "e": "KC_E",
  "f": "KC_F",
  "g": "KC_G",
  "h": "KC_H",
  "i": "KC_I",
  "j": "KC_J",
  "k": "KC_K",
  "l": "KC_L",
  "m": "KC_M",
  "n": "KC_N",
  "o": "KC_O",
  "p": "KC_P",
  "q": "KC_Q",
  "r": "KC_R",
  "s": "KC_S",
  "t": "KC_T",
  "u": "KC_U",
  "v": "KC_V",
  "w": "KC_W",
  "x": "KC_X",
  "y": "KC_Y",
  "z": "KC_Z",
} as const

export type Alias = keyof typeof rawAliases
export const aliases = rawAliases as { [key: string]: Keycode }

export type Mod = "LCTL" | "LSFT" | "LALT" | "LGUI" | "RCTL" | "RSFT" | "RALT" | "RGUI"
export interface Expr {
  value: string
}
export type Mapping = Keycode | Alias | Expr

export type Keymap<T extends string> = Partial<Record<T, Mapping>>

export const row1Keys = ["q", "w", "e", "r", "t", "y", "u", "i", "o", "p"] as const
export const row2Keys = ["a", "s", "d", "f", "g", "h", "j", "k", "l", ";"] as const
export const row3Keys = ["z", "x", "c", "v", "b", "n", "m", ",", ".", "/"] as const
export const thumbKeys = ["l-thumb1", "l-thumb2", "r-thumb1", "r-thumb2"] as const

export type Row1Key = typeof row1Keys[number]
export type Row2Key = typeof row2Keys[number]
export type Row3Key = typeof row3Keys[number]
export type ThumbKey = typeof thumbKeys[number]

export type CoreKey = Row1Key | Row2Key | Row3Key | ThumbKey

// ----------------------------------------

export const layerNames = ["BASE", "LF", "LJ"] as const
export type LayerName = typeof layerNames[number]

// ----------------------------------------

export interface CoreLayer {
  row1: Keymap<Row1Key>
  row2: Keymap<Row2Key>
  row3: Keymap<Row3Key>
  thumb: Keymap<ThumbKey>
}

export type CoreLayout = Record<LayerName, CoreLayer>

// ----------------------------------------

export interface Layer<TExtraKey extends string> extends CoreLayer {
  extra: Keymap<TExtraKey>
}

export type LayerExtraKeys<TExtraKey extends string> = Keymap<TExtraKey>

export type LayoutExtraKeys<TExtraKey extends string> = Partial<Record<LayerName, LayerExtraKeys<TExtraKey>>>
export type Layout<TExtraKey extends string> = Partial<Record<LayerName, Layer<TExtraKey>>>

export interface Keyboard<TExtraKey extends string> {
  name: string
  rows: Array<Array<CoreKey | TExtraKey>>
}
