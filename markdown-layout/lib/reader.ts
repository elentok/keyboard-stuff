import { Layout } from "./types.ts"

export function readLayout(filename: string): Layout {
  const lines = Deno.readTextFileSync(filename).split("\n")

  const blocks = findBlocks(lines)
  console.log(blocks)
}

class InputError extends Error {}

function findBlocks(lines: string[]): Map<string, string[]> {
  const map = new Map<string, string[]>()

  let block: { name: string; lines: string[] } | null = null

  for (const line of lines) {
    if (block == null) {
      if (line.startsWith("```")) {
        block = {
          name: line.substring(3),
          lines: [],
        }
      }
    } else {
      if (line === "```") {
        if (map.has(block.name)) {
          throw new InputError(`File already includes code block "${block.name}"`)
        }
        map.set(block.name, block.lines)
        block = null
      } else {
        block.lines.push(line)
      }
    }
  }

  return map
}
