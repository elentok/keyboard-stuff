export interface Layout {
  structure: SingleStructure | SplitStructure
}

export type Structure = SingleStructure | SplitStructure

export interface SplitStructure {
  left: SingleStructure
  right: SingleStructure
}

export interface SingleStructure {
  rows: Row[]
}

export type Row = Array<Cell | null>

export interface Cell {
  keyIndex: number
}

export class LayoutError extends Error {}
