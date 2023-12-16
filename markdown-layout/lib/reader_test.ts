import { assertEquals } from "https://deno.land/std@0.204.0/assert/assert_equals.ts"
import { findBlocks } from "./reader.ts"

const lines = [
  "",
  "```block1",
  "hello",
  "world",
  "```",
  "",
  "```block2",
  "hello1",
  "world1",
  "",
  "```",
  "",
]

Deno.test(function testFindBlocks() {
  assertEquals(findBlocks(lines), [
    {
      name: "block1",
      lines: ["hello", "world"],
      startLineNr: 2,
      endLineNr: 5,
    },
    {
      name: "block2",
      lines: ["hello1", "world1", ""],
      startLineNr: 7,
      endLineNr: 11,
    },
  ])
})
