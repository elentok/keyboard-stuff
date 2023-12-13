import { build } from "../lib/build.ts"
import { createLayout } from "../lib/coreLayout.ts"
import { Keyboard } from "../lib/types.ts"

const irisExtraKeys = [
  "left1",
  "left2",
  "left3",
  "left4",
  "right1",
  "right2",
  "right3",
  "right4",
  "1",
  "2",
  "3",
  "4",
  "5",
  "6",
  "7",
  "8",
  "9",
  "0",
  "l-thumb3",
  "l-thumb4",
  "r-thumb3",
  "r-thumb4",
] as const

type IrisExtraKey = typeof irisExtraKeys[number]

export const irisKeyboard: Keyboard<IrisExtraKey> = {
  name: "Iris",
  rows: [
    ["left1", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "right1"],
    ["left2", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "right2"],
    ["left3", "a", "s", "d", "f", "g", "h", "j", "k", "l", "m", "right3"],
    ["left4", "z", "x", "c", "v", "b", "l-thumb4", "r-thumb4", "n", "m", ",", ".", "/", "right4"],
    ["l-thumb3", "l-thumb2", "l-thumb1", "r-thumb1", "r-thumb2", "r-thumb3"],
  ],
}

export const irisLayout = createLayout<IrisExtraKey>({
  BASE: { "left1": "KC_LEFT" },
})

build(irisKeyboard, irisLayout)
