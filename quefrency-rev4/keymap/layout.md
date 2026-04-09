# Quefrency Keyboard Layout

Qwerty = 1->30
Numbers = 61 => 70
Left Space = 31
Right Space = 32

```options
layoutFn = LAYOUT_65_with_macro
```

```aliases
lock = c+g+q
```

```structure
90 95 || 50 51 52 53 54 55 56 || 57 58 59 60 61 62 63 64 65
91 96 || 66 1  2  3  4  5     || 6  7  8  9  10 67 68 69 70
92 97 || 71 11 12 13 14 15    || 16 17 18 19 20 72 73    74
93 98 || 75 21 22 23 24 25    || 26 27 28 29 30    76 77 78
94 99 || 80 81 82 83    31 33 || 32    84 85 34    86 87 88
```

## Base layer

```layer:base
f1   esc  || `         1  2    3      4      5   6  || 7    8      9  0         -  =  del       bs   home
play vol+ || tab       q  w    e      r      t      || y    u      i  o         p  [  ]         \    end
pscr vol- || osm(lgui) a  s    lgui/d l(f)/f g      || h    l(j)/j k  l         ;  '  ent            pgup
lock f12  || osm(lsft) z  x    c      v      b      || n    m      ,  .         /     osm(rsft) up   pgdn
wbak wfwd || osm(lctl) a  lalt lgui          spc __ || ent         a  osm(rctl) __    left      down right
```

## Layer: F (when F is held)

```layer:f
__   __   || __        __ __   __     __     __  __ || __   __     __ __        __ __ __        __   boot
__   __   || __        __ __   __     __     __     || __   __     __ __        __ __ __        __   __
__   __   || __        __ __   __     __     __     || left down   up right     __ __ __             __
__   __   || __        __ __   __     __     __     || bs   ent    __ __        __    __        __   __
__   __   || __        __ __   __            __  __ || __          __ __        __    __        __   __
```

## Layer: J (when J is held)

```layer:j
__   __   || __        __ __   __     __     __  __ || __   __     __ __        __ __ __        __   __
__   __   || __        __ __   (      )      __     || __   __     __ __        __ __ __        __   __
__   __   || __        __ __   [      ]      __     || __   __     __ __        __ __ __             __
__   __   || __        __ __   {      }      __     || __   __     __ __        __    __        __   __
__   __   || __        __ __   __            __  __ || __          __ __        __    __        __   __
```

## Layer template

```disabled:layer
__   __   || __        __ __   __   __ __     __ || __  __ __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __  __ __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __  __ __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __  __ __ __        __    __        __   __
__   __   || __        __ __   __      __     __ || __     __ __        __    __        __   __
```
