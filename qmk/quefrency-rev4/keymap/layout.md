# Quefrency Keyboard Layout

Qwerty = 1->30
Numbers = 61 => 70
Left Space = 31
Right Space = 32

```aliases
lock = c+g+q
```

```structure
90 95 || 50 51 52 53 54 55 56 || 57 58 59 60 61 62 63    64
91 96 || 65    1  2  3  4  5  || 6  7  8  9  10 66 67    68
92 97 || 70    11 12 13 14 15 || 16 17 18 19 20 71 72    73
93 98 || 74    21 22 23 24 25 || 26 27 28 29 30    75 76 77
94 99 || 80 81 82 83    31 33 || 32    84 85 34    86 87 88
```

## Base layer

```layer:base
f1   esc  || `         1  2    3    4  5      6  || 7    8    9  0         -  =  bs             home
play vol+ || tab          q    w    e  r      t  || y    u    i  o         p  [  ]              end
pscr vol- || osm(lgui)    a    s    d  l(f)/f g  || h    j    k  l         ;  '  \              pgup
lock f12  || osm(lsft)    z    x    c  v      b  || n    m    ,  .         /     osm(rsft) up   pgdn
wbak wfwd || osm(lctl) a  lalt lgui    spc    __ || ent       a  osm(rctl) __    left      down right
```

## Layer: F (when F is held)

```layer:f
__   __   || __        __ __   __   __ __     __ || __   __   __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __   __   __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || left down up right     __ __ __             __
__   __   || __           __   __   __ __     __ || __   __   __ __        __    __        __   __
__   __   || __        __ __   __      __     __ || __        __ __        __    __        __   __
```

## Layer template

```disabled:layer
__   __   || __        __ __   __   __ __     __ || __  __ __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __  __ __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __  __ __ __        __ __ __             __
__   __   || __           __   __   __ __     __ || __  __ __ __        __    __        __   __
__   __   || __        __ __   __      __     __ || __     __ __        __    __        __   __
```
