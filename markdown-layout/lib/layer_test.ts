import { assertEquals } from "https://deno.land/std@0.204.0/assert/assert_equals.ts"
import { parseLayer, stringifyLayer } from "./layer.ts"
import { parseStructure } from "./structure.ts"

Deno.test(function testParseLayer_SingleLayer() {
  const structure = parseStructure([
    "10 11 12",
    "13    14",
    "15 16",
  ])

  const lines = [
    "a b   c",
    "d l(f)/f",
    "x y",
  ]
  assertEquals(parseLayer("layer1", lines, structure), {
    rows: [
      [{ mapping: "a" }, { mapping: "b" }, { mapping: "c" }],
      [{ mapping: "d" }, null, { mapping: "l(f)/f" }],
      [{ mapping: "x" }, { mapping: "y" }, null],
    ],
  })
})

Deno.test(function testParseLayer_SplitLayer() {
  const structure = parseStructure([
    "10 11 12 ||  1  2  3",
    "13    14 ||  4  5",
    "15 16    ||  6",
  ])

  const lines = [
    "a b   c || e f rctl/g",
    "d l(f)/f || h i",
    "x y || j",
  ]
  assertEquals(parseLayer("layer1", lines, structure), {
    left: {
      rows: [
        [{ mapping: "a" }, { mapping: "b" }, { mapping: "c" }],
        [{ mapping: "d" }, null, { mapping: "l(f)/f" }],
        [{ mapping: "x" }, { mapping: "y" }, null],
      ],
    },
    right: {
      rows: [
        [{ mapping: "e" }, { mapping: "f" }, { mapping: "rctl/g" }],
        [{ mapping: "h" }, { mapping: "i" }, null],
        [{ mapping: "j" }, null, null],
      ],
    },
  })
})

Deno.test(function testStringifyLayer_SingleLayer() {
  const structure = parseStructure([
    "10 11 12",
    "13    14",
    "15 16",
  ])

  const layer = parseLayer("1", [
    "a b   c   ",
    "d l(f)/f",
    "x y",
  ], structure)

  assertEquals(stringifyLayer(layer, structure), [
    "a      b      c",
    "d             l(f)/f",
    "x      y",
  ])
})

Deno.test(function testStringifyLayer_SplitLayer() {
  const structure = parseStructure([
    "10 11 12 ||  1  2  3",
    "13    14 ||  4  5",
    "15 16    ||  6",
  ])

  const layer = parseLayer("1", [
    "a b   c || e f rctl/g",
    "d l(f)/f || h i",
    "x y || j",
  ], structure)

  assertEquals(stringifyLayer(layer, structure), [
    "a      b      c      || e      f      rctl/g",
    "d             l(f)/f || h      i",
    "x      y             || j",
  ])
})
