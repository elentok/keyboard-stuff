import { expandAlias } from "./helpers.ts"
import { Keyboard, Layer, LayerName, layerNames, Layout } from "./types.ts"

const textEncoder = new TextEncoder()

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

  console.log("[david] [build.ts] build 1")

  const maxCellWidth = builtLayers.reduce((prevMax, layer) => {
    const maxRowCellWidth = layer.mappings.reduce((rowPrevMax, cell) => {
      return cell.length > rowPrevMax ? cell.length : rowPrevMax
    }, prevMax)

    return maxRowCellWidth
  }, 0)

  console.log("[david] [build.ts] build 2", maxCellWidth)

  for (const layer of builtLayers) {
    lines.push(`[${layer.name}] = LAYOUT(`)
    for (const row of layer.mappings) {
      lines.push(row.map((mapping) => mapping.padEnd(maxCellWidth)).join(", "))
    }
  }

  console.log("[david] [build.ts] build", lines)
}

function buildLayer<T extends string>(keyboard: Keyboard<T>, name: LayerName, layer: Layer<T>): BuiltLayer {
  // const lines = []
  const keyToMapping = { ...layer.row1, ...layer.row2, ...layer.row3, ...layer.thumb, ...layer.extra }
  const mappings = keyboard.rows.map((row) => {
    return row.map((key) => {
      const mapping = keyToMapping[key] ?? "_______"
      const aliasedMapping = expandAlias(mapping)
      return aliasedMapping ?? mapping

      // console.log(mapping)
      // Deno.writeSync(Deno.stdout.rid, newmapping)
      // Deno.stdout.writeSync(textEncoder.encode(`${mapping}, `))
    })
  })

  // for (const row of mappedLayer) {
  //   lines.push(row.join(", "))
  //   // for (const mapping of row) {
  //   //
  //   //   Deno.stdout.writeSync(textEncoder.encode(`${mapping}, `))
  //   // }
  // }

  return { name, mappings }
}
