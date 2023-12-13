import { Keycode, KEYCODES } from "./generated-types.ts"
import { Alias, aliases, Expr, LayerName, Mod } from "./types.ts"

/** Mod-Tap */
export function MT(mod: Mod, key: Keycode | Alias): Expr {
  return { value: `${mod}_T(${expandAlias(key)})` }
}

/** Layer-Tap */
export function LT(layer: LayerName, key: Keycode | Alias): Expr {
  return { value: `LT(${layer}, ${expandAlias(key)})` }
}

export function OSM(mod: Mod): Expr {
  return { value: `OSM(${mod})` }
}

export function expandMapping(key: Keycode | Alias | Expr): string {
  if (typeof key === "object") {
    return key.value
  }

  return expandAlias(key)
}

export function expandAlias(key: Keycode | Alias): Keycode {
  const keyString = key as string
  if (keyString in aliases) {
    return aliases[keyString]
  }
  if (isKeycode(key)) {
    return key
  }

  throw new Error(`Invalid key: ${JSON.stringify(key)}`)
}

function isKeycode(key: string): key is Keycode {
  return KEYCODES.includes(key as Keycode)
}

// export function expandAlias(char: string): string | undefined {
//   return aliases[char as Alias]
// }

export function to(layer: LayerName): Expr {
  return { value: `TO(${layer})` }
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
