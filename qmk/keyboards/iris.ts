import { createLayout } from "../lib/coreLayout.ts"

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
] as const

type IrisExtraKey = typeof irisExtraKeys[number]

export const irisLayout = createLayout<IrisExtraKey>({
  BASE: { "left1": "KC_LEFT" },
})
