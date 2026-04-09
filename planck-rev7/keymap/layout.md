# Planck Keyboard Layout

- The core layout is 2x(3x5 + 3) = 36

```options
layoutFn = LAYOUT
```

```aliases
lock = c+g+q
```

## Keyboard Structure

```structure
40  1  2  3  4  5  6  7  8  9 10 43
41 11 12 13 14 15 16 17 18 19 20 44
42 21 22 23 24 25 26 27 28 29 30 45
46 83 82 35 33 31 32 34 36 80 81 47
```

## Base layer

```layer:base
tab       q      w      e      r         t        y        u      i       o      p      bs
lgui      lctl/a lsft/s lgui/d l(f)/f    g        h        l(j)/j rgui/k  rsft/l rctl/; '
esc       z      x      lalt/c l(v)/v    b        n        l(m)/m lalt/,  .      /      \
osm(lsft) __     __     __     lctl      spc      spc      ent    bs      ralt   \      osm(rsft)
```

## Layer: F (when F is held)

```layer:f
boot      esc    __     __     __        __       _        pgdn   s+tab   tab    pgup   __
__        __     __     __     __        to(game) left     down   up      right  $      __
__        __     __     __     __        __       bs       ent    home    end    /      __
__        __     __     __     __        __       __       __     __      __     __     __
```

## Layer: J (when J is held)

```layer:j
*         `      :      (      )         ~        __       __     __      __     __     __
=         _      -      [      ]         $        to(one)  __     __      __     __     __
__        |      <      {      }         >        __       __     __      __     __     __
lock      __     __     __     __        __       __       __     __      __     __     __
```

## Layer: V (when V is held)

```layer:v
__        __     vol+   __     __        __       +        7      8       9      =      __
__        __     __     play   __        __       -        4      5       6      0      __
__        __     vol-   __     __        __       0        1      2       3      .      __
__        __     __     __     __        __       __       __     ,       __     __     __
```

## Layer: M (when M is held)

```layer:m
__        __     __     __     __        __       __       __     __      vol+   __     __
__        __     __     __     __        __       __       __     __      play   __     __
__        __     __     __     __        __       __       __     __      vol-   __     __
__        __     __     __     __        __       __       __     __      __     __     __
```

## Layer: Gaming

```layer:game
tab       q      w      e      r         t        y        u      i       o      p      \
lgui      a      s      d      f         g        h        j      k       l      ;      '
lsft      z      x      c      v         b        n        m      ,       .      /      rsft
esc       __     __     lctl   osm(lgui) spc      ent      bs     ralt    __     __     bs
```

## Layer one-hand

```layer:one
__        __     __     __     __        __       to(base) pgdn   g+s+tab g+tab  pgup   __
__        __     __     __     __        __       left     down   up      right  __     __
__        __     __     __     __        __       bs       ent    home    end    /      __
__        __     __     __     __        __       __       __     __      __     __     __
```

## Layer template

```disabled:layer
__ __ __ __ __ __ __ __ __ __ __ __
__ __ __ __ __ __ __ __ __ __ __ __
__ __ __ __ __ __ __ __ __ __ __ __
__ __ __ __ __ __ __ __ __ __ __ __
```
