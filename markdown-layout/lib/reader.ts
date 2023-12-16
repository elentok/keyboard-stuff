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
