import { assertEquals } from "https://deno.land/std@0.204.0/assert/assert_equals.ts"
import { countColumns, findBlocks, isStructureLineValid, parseStructure } from "./reader.ts"

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

Deno.test(function testParseStructure() {
  assertEquals(
    parseStructure([
      "11 12 13 14 15",
      "16     1  2  3",
      "17  4  5  6  7",
      "",
    ]),
    {
      rows: [
        [
          { keyIndex: 11 },
          { keyIndex: 12 },
          { keyIndex: 13 },
          { keyIndex: 14 },
          { keyIndex: 15 },
        ],
        [
          { keyIndex: 16 },
          null,
          { keyIndex: 1 },
          { keyIndex: 2 },
          { keyIndex: 3 },
        ],
        [
          { keyIndex: 17 },
          { keyIndex: 4 },
          { keyIndex: 5 },
          { keyIndex: 6 },
          { keyIndex: 7 },
        ],
      ],
    },
  )
})

Deno.test(function testIsStructureLineValid() {
  function shouldBeValid(line: string) {
    assertEquals(isStructureLineValid(line), true, `Line '${line}' should be valid`)
  }
  function shouldNotBeValid(line: string) {
    assertEquals(isStructureLineValid(line), false, `Line '${line}' should not be valid`)
  }

  shouldBeValid("11 12 13")
  shouldBeValid("1  2  3")
  shouldBeValid(" 1  2  3")
  shouldBeValid(" 1     2")
  shouldBeValid("01     2   ")
  shouldBeValid("01     2 ")
  shouldNotBeValid("hello")
  shouldNotBeValid("11 12 1x")
})

Deno.test(function testCountColumns() {
  assertEquals(countColumns(["11 12 13"]), 3)
  assertEquals(countColumns(["11 12 13", "1"]), 3)
  assertEquals(countColumns([" 1  2 3"]), 3)
})
