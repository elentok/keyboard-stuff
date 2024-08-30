# Iris Keyboard Layout

This is an example for the Iris keyboard.

- The core layout is 2x(3x5 + 3) = 36

```options
layoutFn = LAYOUT
```

```aliases
lock = c+g+q
```

```combos
lgui/d+l(f)/f = $
e+l(f)/f = [
lsft/s+lgui/d = c+a
# l(j)/j+rgui/k = esc
# l(j)/j+rgui/k = osl(j)
l(j)/j+rsft/l = _
u+i+o = c+s+g+i
rgui/k+rsft/l = :
w+e = ~
w+l(f)/f = `
l(j)/j+i = -
l(j)/j+o = =
l(m)/m+lalt/,+. = g+1
l(f)/f+r = [
l(j)/j+u = ]
rsft/l+rctl/; = right
rsft/l+. = right
rgui/k+lalt/, = up
l(j)/j+l(m)/m = down
h+n = left
# lgui/d+e = [
# rgui/k+i = ]
```

## Keyboard Structure

```structure
46 61 62 63 64 65    ||    66 67 68 69 70 47
40  1  2  3  4  5    ||     6  7  8  9 10 43
41 11 12 13 14 15    ||    16 17 18 19 20 44
42 21 22 23 24 25 54 || 55 26 27 28 29 30 45
            35 33 31 || 32 34 36
```

## Base layer

```layer:base
esc       1      2      3      4         5            ||     6         7        8       9      0      bs
tab       q      w      e      r         t            ||     y         u        i       o      p      \
osm(lgui) lctl/a lsft/s lgui/d l(f)/f    g            ||     h         l(j)/j   rgui/k  rsft/l rctl/; '
osm(lsft) z      x      lalt/c l(v)/v    b        spc || ent n         l(m)/m   lalt/,  .      /      osm(rsft)
                               osm(lctl) osl(exp) spc || ent osm(rsft) ralt
```

## Layer: F (when F is held)

```layer:f
esc       __     g+s+4  g+s+5  $         boot         ||     ^         &        *       -      =      __
tab       esc    __     __     __        __           ||     _         pgdn     s+tab   tab    pgup   \
__        __     __     __     __        to(game)     ||     left      down     up      right  $      '
__        __     __     __     __        __       __  || __  bs        ent      __      __     __     __
                               __        __       __  || __  __        f12
```

## Layer: J (when J is held)

```layer:j
esc       !      @      #      g+s+4     g+s+5        ||     boot      __       __      __     __     __
tab       `      :      (      )         ~            ||     __        __       __      __     __     __
=         _      -      [      ]         $            ||     to(one)   __       __      __     __     __
__        |      <      {      }         >        __  || __  __        __       __      __     __     __
                               __        __       __  || __  __        __
```

## Layer: V (when V is held)

```layer:v
__        __     __     __     __        __           ||     __        __       *       __     __     __
__        __     vol+   __     __        __           ||     +         7        8       9      =      __
__        c+a    __     play   __        __           ||     -         4        5       6      0      /
__        __     vol-   __     __        __       __  || __  0         1        2       3      .      __
                               __        __       __  || __  __        ,
```

## Layer: M (when M is held)

```layer:m
__        __     __     __     __        __           ||     __        __       __      __     __     __
__        __     __     __     __        __           ||     __        __       __      vol+   __     __
__        __     __     __     __        __           ||     __        __       __      play   __     __
__        __     __     __     __        __       __  || __  __        __       __      vol-   __     __
                               __        __       __  || __  __        __
```

## Layer: L1

```layer:L1
esc       !      @      #      g+s+4     g+s+5        ||     __        __       __      __     __     __
tab       `      :      (      )         ~            ||     __        __       __      __     __     __
=         _      -      [      ]         $            ||     to(one)   __       __      __     __     __
__        |      <      {      }         >        __  || __  __        __       __      __     __     __
                               __        __       __  || __  __        __
```

## Layer: Gaming

```layer:game
esc       1      2      3      4         5            ||     6         7        8       9      0      bs
tab       q      w      e      r         t            ||     y         u        i       o      p      \
lgui      a      s      d      f         g            ||     h         j        k       l      ;      '
lsft      z      x      c      v         b        spc || ent n         m        ,       .      /      rsft
                               lctl      osl(exp) spc || ent bs        to(base)
```

## Layer one-hand

```layer:one
__        __     __     __     __        __           ||     __        __       __      __     __     __
__        __     __     __     __        __           ||     to(base)  pgdn     g+s+tab g+tab  pgup   __
__        __     __     __     __        __           ||     left      down     up      right  __     __
__        __     __     __     __        __       __  || __  bs        ent      home    end    /      __
                               __        __       __  || __  __        to(base)
```

## Experimental layer

```layer:exp
esc       !      @      #      g+s+4     g+s+5        ||     boot      __       __      __     __     __
vol+      `      :      (      )         ~            ||     __        __       __      __     __     __
play      _      -      [      ]         $            ||     left      down     up      right  __     __
vol-      |      <      {      }         >        __  || __  bs        ent      home    end    __     __
                               play      __       __  || __  __        __
```

## Layer template

```disabled:layer
__   __     __     __      __     __            ||          __  __     __     __     __     __
__   __     __     __      __     __            ||          __  __     __     __     __     __
__   __     __     __      __     __            ||          __  __     __     __     __     __
__   __     __     __      __     __       __   || __       __  __     __     __     __     __
                           __     __       __   || __       __  __
```
