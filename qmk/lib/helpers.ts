import { CoreKey, Layer, LayerName, Row1Key, row1Keys } from "./types.ts"

const aliases = new Map<string, string>([
  ["~", "KC_TILDE"],
  ["=", "KC_EQL"],
  ["-", "KC_MINS"],
  ["+", "KC_PLUS"],
  ["_", "KC_UNDS"],
])

for (const key of "abcdefghijklmnopqrstuvwxyz".split("")) {
  aliases.set(key, `KC_${key.toUpperCase()}`)
}

export function expandAlias(char: string): string | undefined {
  const keyCode = aliases.get(char)
  return keyCode
}

export function to(layer: LayerName): string {
  return `TO(${layer})`
}

// export function getLayerMapping<TExtraKey extends string>(
//   layer: Layer<TExtraKey>,
//   key: CoreKey | TExtraKey,
// ): string | undefined {
//   if (row1Keys.includes(key)) {
//     return layer.row1[key as Row1Key]
//   }
//   return ""
//   // return layer.row1[key] ?? layer.row2[key] ?? layer.row3[key]
// }
