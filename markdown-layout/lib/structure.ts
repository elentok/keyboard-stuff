import { isNotCommentOrBlank } from "./helpers.ts"
import { Cell, LayoutError, SingleStructure, Structure } from "./types.ts"

export function parseStructure(lines: string[]): Structure {
  const presentLines = lines.filter(isNotCommentOrBlank)

  const isSplitStructure = presentLines.some((line) => line.includes("|"))
  if (isSplitStructure) {
    const splitLines = presentLines.map((line) => {
      const halfs = line.split(" | ")
      if (halfs.length !== 2) {
        throw new LayoutError(`Invalid split keyboard structure line: '${line}'`)
      }
      return halfs
    })
    const leftLines = splitLines.map((halfs) => halfs[0])
    const rightLines = splitLines.map((halfs) => halfs[1])
    return {
      left: parseSingleStructure(leftLines),
      right: parseSingleStructure(rightLines),
    }
  } else {
    return parseSingleStructure(presentLines)
  }
}

function parseSingleStructure(presentLines: string[]): SingleStructure {
  const s: SingleStructure = { rows: [] }

  for (const line of presentLines) {
    if (!isStructureLineValid(line)) {
      throw new LayoutError(`Invalid structure line: '${line}'`)
    }
  }
  const columns = countColumns(presentLines)

  for (const line of presentLines) {
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

export function isStructureLineValid(line: string): boolean {
  return STRUCTURE_RE.test(line.trimEnd())
}

export function countColumns(validLines: string[]): number {
  const maxLength = validLines.reduce((max, line) => line.length > max ? line.length : max, 0)
  return Math.ceil(maxLength / 3)
}
