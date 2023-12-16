import { Cell, Layout, SingleStructure } from "./types.ts"

class LayoutError extends Error {}

export function readLayout(filename: string): void {
  const lines = Deno.readTextFileSync(filename).split("\n")

  const blocks = findBlocks(lines)
  console.log(blocks)
}

interface Block {
  name: string
  lines: string[]
  startLineNr: number
  endLineNr: number
}

export function findBlocks(lines: string[]): Block[] {
  const blocks: Block[] = []

  let block: Omit<Block, "endLineNr"> | null = null

  let lineNr = 0
  for (const line of lines) {
    lineNr++
    if (block == null) {
      if (line.startsWith("```")) {
        block = {
          name: line.substring(3),
          lines: [],
          startLineNr: lineNr,
        }
      }
    } else {
      if (line === "```") {
        blocks.push({ ...block, endLineNr: lineNr })
        block = null
      } else {
        block.lines.push(line)
      }
    }
  }

  return blocks
}

export function parseStructure(lines: string[]): SingleStructure {
  const s: SingleStructure = { rows: [] }

  const validLines = lines.filter(isNotCommentOrBlank)
  for (const line of validLines) {
    if (!isStructureLineValid(line)) {
      throw new LayoutError(`Invalid structure line: '${line}'`)
    }
  }
  const columns = countColumns(validLines)

  for (const line of validLines) {
    const row: Array<Cell | null> = []
    for (let i = 0; i < columns; i++) {
      const value = line.substring(i * 3, i * 3 + 3).trim()
      if (value.length === 0) {
        row.push(null)
      } else {
        row.push({ keyIndex: Number(value) })
      }
    }
    s.rows.push(row)
  }

  return s
}

const STRUCTURE_RE = /^([\d ][\d ] )*( \d|\d\d?)$/

function isNotCommentOrBlank(line: string): boolean {
  return !/^\s*$/.test(line) && !line.startsWith("#")
}

export function isStructureLineValid(line: string): boolean {
  return STRUCTURE_RE.test(line.trimEnd())
}

export function countColumns(validLines: string[]): number {
  const maxLength = validLines.reduce((max, line) => line.length > max ? line.length : max, 0)
  return Math.ceil(maxLength / 3)
}
