export interface Layout {
  structure: Structure | SplitStructure
}

export interface SplitStructure {
  left: Structure
  right: Structure
}

export interface Structure {
  rows: Row[]
}

export type Row = Array<Cell | null>

export interface Cell {
  keyIndex: number
  colSpan?: number
}
