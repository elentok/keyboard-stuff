import { isNotCommentOrBlank, splitLinesForSplitKeyboard } from "./helpers.ts"
import { Layer, LayerRow, LayoutError, SingleLayer, SingleStructure, Structure } from "./types.ts"

export function parseLayer(name: string, lines: string[], structure: Structure): Layer {
  const presentLines = lines.filter(isNotCommentOrBlank)

  // const isSplit = presentLines.some((line) => line.includes("||"))
  if ("left" in structure) {
    const { left, right } = splitLinesForSplitKeyboard(presentLines)
    return {
      left: parseSingleLayer(name, left, structure.left),
      right: parseSingleLayer(name, right, structure.right),
    }
  } else {
    return parseSingleLayer(name, presentLines, structure)
  }
}

function parseSingleLayer(name: string, lines: string[], structure: SingleStructure): SingleLayer {
  if (lines.length !== structure.rows.length) {
    throw new LayoutError(
      `Layer ${name} has ${lines.length} rows while the structure has ${structure.rows.length} rows`,
    )
  }

  const layerRows = structure.rows.map((structureRow, rowIndex) => {
    const line = lines[rowIndex]
    const mappings = line.split(/\s+/)
    const nonNullCells = structureRow.filter((c) => c != null).length
    if (mappings.length !== nonNullCells) {
      throw new LayoutError(
        `Layer ${name} row ${
          rowIndex + 1
        } has ${mappings.length} mappings, but the structure specifies ${nonNullCells}`,
      )
    }

    let nextMappingIndex = 0
    return structureRow.map((cell) => {
      if (cell != null) {
        return { mapping: mappings[nextMappingIndex++] }
      } else {
        return null
      }
    }) as LayerRow
  })

  return { rows: layerRows }
}
