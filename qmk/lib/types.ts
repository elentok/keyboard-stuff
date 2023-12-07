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

export type Keymap<T extends string> = Partial<Record<T, string>>

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
