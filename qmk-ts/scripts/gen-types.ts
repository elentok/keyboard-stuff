#!/usr/bin/env -S deno run --allow-env --allow-read --allow-write

interface Keycode {
  name: string
  alias?: string
}

const TYPES_FILENAME = "lib/generated-types.ts"

function getKeycodes(): Keycode[] {
  return [...getKeycodes1(), ...getKeycodes2()]
}

function getKeycodes1(): Keycode[] {
  const lines = Deno.readTextFileSync(`${Deno.env.get("HOME")}/qmk_firmware/quantum/keycodes.h`).split("\n")

  const keycodes: Keycode[] = []
  let foundEnum = false

  for (const line of lines) {
    if (foundEnum) {
      if (line.match(/^}/)) {
        break
      }

      if (line.match(/ = /)) {
        const [keycode, value] = line.split(/\s*=\s*/)

        keycodes.push({
          name: keycode.trim(),
          alias: value.startsWith("0x") ? undefined : value.trim().replace(",", ""),
        })
      }
      // add enum to list
    } else if (line.match(/enum qk_keycode_defines/)) {
      foundEnum = true
    }
  }

  return keycodes
}

function getKeycodes2(): Keycode[] {
  const lines = Deno.readTextFileSync(`${Deno.env.get("HOME")}/qmk_firmware/quantum/keymap_extras/keymap_us.h`).split(
    "\n",
  )

  const keycodes: Keycode[] = []

  const re = /#define ([^ ]+) (.*)$/
  for (const line of lines) {
    if (line.startsWith("#define KC_")) {
      const match = line.match(re)
      if (match) {
        keycodes.push({
          name: match[1],
          alias: match[2],
        })
      }
    }
  }

  return keycodes
}

function writeKeycodes(keycodes: Keycode[]): void {
  const lines = [
    "export const KEYCODES = [",
    ...keycodes.map((kc) => {
      const alias = kc.alias != null ? ` // alias of ${kc.alias}` : ""
      return `  "${kc.name}",${alias}`
    }),
    "] as const",
    "",
    "export type Keycode = typeof KEYCODES[number]",
  ]

  Deno.writeTextFileSync(TYPES_FILENAME, lines.join("\n"))
}

const keycodes = getKeycodes()
writeKeycodes(keycodes)

console.log("[david] [gen-types.ts] L40", keycodes)
