import { expandMapping } from "./helpers.ts"
import { Keyboard, Layer, LayerName, layerNames, Layout } from "./types.ts"

interface BuiltLayer {
  name: string
  mappings: string[][]
}

export function build<T extends string>(keyboard: Keyboard<T>, layout: Layout<T>): string {
  const lines = []

  const builtLayers: BuiltLayer[] = []

  for (const layerName of layerNames) {
    const layer = layout[layerName]
    if (layer == null) continue

    builtLayers.push(buildLayer(keyboard, layerName, layer))
  }

  const maxCellWidth = builtLayers.reduce((prevMax, layer) => {
    const maxRowCellWidth = layer.mappings.reduce((rowPrevMax, cell) => {
      return cell.length > rowPrevMax ? cell.length : rowPrevMax
    }, prevMax)

    return maxRowCellWidth
  }, 0)

  for (const layer of builtLayers) {
    lines.push(`[${layer.name}] = LAYOUT(`)
    for (const row of layer.mappings) {
      const line = row.map((mapping) => `${mapping}, `.padEnd(maxCellWidth + 2)).join("").replace(/^, /, "")
      lines.push(`  ${line}`)
    }
  }
}

function buildLayer<T extends string>(keyboard: Keyboard<T>, name: LayerName, layer: Layer<T>): BuiltLayer {
  const keyToMapping = { ...layer.row1, ...layer.row2, ...layer.row3, ...layer.thumb, ...layer.extra }
  const mappings = keyboard.rows.map((row) => {
    return row.map((key) => {
      const mapping = keyToMapping[key] ?? "_______"
      const aliasedMapping = expandMapping(mapping)
      return aliasedMapping ?? mapping
    })
  })

  return { name, mappings }
}
