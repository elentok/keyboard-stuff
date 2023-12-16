export interface Layout {
  structure: SingleStructure | SplitStructure
}

export type Structure = SingleStructure | SplitStructure

export interface SplitStructure {
  left: SingleStructure
  right: SingleStructure
}

export interface SingleStructure {
  rows: StructureRow[]
}

export type StructureRow = Array<StructureCell | null>

export interface StructureCell {
  keyIndex: number
}

export class LayoutError extends Error {}
