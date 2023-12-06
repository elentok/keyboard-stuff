export const row1Keys = ["q", "w", "e", "r", "t", "y", "u", "i", "o", "p"] as const
export const row2Keys = ["a", "s", "d", "f", "g", "h", "j", "k", "l", ";"] as const
export const row3Keys = ["z", "x", "c", "v", "b", "n", "m", ",", ".", "/"] as const

export type Row1Key = typeof row1Keys[number]
export type Row2Key = typeof row2Keys[number]
export type Row3Key = typeof row3Keys[number]

export const layerNames = ["BASE", "LF", "LJ"] as const
export type LayerName = typeof layerNames[number]

export interface CoreLayer {
  row1: Partial<Record<Row1Key, string>>
  row2: Partial<Record<Row2Key, string>>
  row3: Partial<Record<Row3Key, string>>
}

export interface Layer<TExtraKey extends string> extends CoreLayer {
  extra: Partial<Record<TExtraKey, string>>
}

export type LayerExtraKeys<T extends string> = Partial<Record<T, string>>
export type LayoutExtraKeys<T extends string> = Partial<Record<LayerName, LayerExtraKeys<T>>>

export type CoreLayout = Record<LayerName, CoreLayer>
export type Layout<TExtraKey extends string> = Partial<Record<LayerName, Layer<TExtraKey>>>
