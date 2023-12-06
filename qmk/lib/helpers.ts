import { LayerName } from "./types.ts"

const charToKeyCodeMap = new Map<string, string>([
  ["~", "KC_TILDE"],
  ["=", "KC_EQL"],
  ["-", "KC_MINS"],
  ["+", "KC_PLUS"],
  ["_", "KC_UNDS"],
])

export function charToKeyCode(char: string): string {
  const keyCode = charToKeyCodeMap.get(char)
  if (keyCode == null) {
    throw new Error(`No known key code for char '${char}'`)
  }
  return keyCode
}

export function to(layer: LayerName): string {
  return `TO(${layer})`
}
