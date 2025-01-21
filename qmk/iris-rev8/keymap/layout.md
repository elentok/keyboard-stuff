# Iris Keyboard Layout

This is an example for the Iris keyboard.

- The core layout is 2x(3x5 + 3) = 36

```options
layoutFn = LAYOUT
```

```aliases
lock = c+g+q
hf = f
hj = j
hk = k
hd = d
```

```combos
hd+hf = $
# e+hf = [
e+hf = lgui
lsft/s+hd = c+a
# hj+hk = esc
# hj+hk = osl(j)
hj+rsft/l = _
u+i+o = c+s+g+i
# hk+rsft/l = :
# w+e = ~
w+hf = `
# hj+i = -
hj+l = esc
hj+i = rgui
hj+o = =
m+,+. = g+1
hf+r = [
hj+u = ]
rsft/l+rctl/; = right
rsft/l+. = right
hk+lalt/, = up
hj+m = down
h+n = left
# hd+e = [
# hk+i = ]
hk+l = rsft
s+hd = lsft
hj+hk = mo(j)
hd+hf = mo(f)
c+v = mo(v)
x+c = lalt
,+. = ralt
# ,+. = comdot
-+( = =
v+b = mo(fkeys)
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
esc   1      2       3     4     5            ||     6        7        8       9           0      bs
tab   q      w       e     r     t            ||     y        u        i       o           p      \
lgui  lctl/a s       hd    hf    g            ||     h        hj       hk      l           rctl/; '
lsft  z      x       c     v     b        spc || ent n        m        ,       .           /      rsft
                           lctl  mo(exp)  spc || ent rsft     ralt
```

## Layer: DF (when DF are held/tapped)

```layer:f
__    __     g+s+4   g+s+5 $     boot         ||     ^        &        *       -           =      __
__    lalt   lsft    __    __    __           ||     _        -        s+tab   tab         pgup   \
__    lctl   lgui    __    __    to(game)     ||     left     down     up      right       $      '
__    lctl   lalt    __    __    __       __  || __  __       bs       ent     __          __     __
                           __    lalt     __  || __  __       f12
```

## Layer: JK (when JK are held/tapped)

```layer:j
esc   !      g+s+tab g+tab g+s+4 g+s+5        ||     boot     __       __      __          __     __
tab   `      -       (     )     ~            ||     __       __       __      rsft        ralt   __
=     _      :       [     ]     $            ||     __       __       __      rgui        rctl   __
s+tab =      <       {     }     >        __  || __  __       __       __      ralt        rctl   __
                           __    lalt     __  || __  __       __
```

## Layer: CV (when CV is held)

```layer:v
__    __     __      __    __    __           ||     __       __       *       __          __     __
__    __     vol+    __    __    __           ||     +        7        8       9           =      __
__    c+a    lgui    play  __    __           ||     -        4        5       6           0      /
__    __     lsft    __    __    __       __  || __  0        1        2       3           .      __
                           __    __       __  || __  __       ,
```

## Layer: COMDOT (when comma and dot are held/tapped)

```layer:comdot
__    f1     f2      f3    f4    f5           ||     __       __       __      __          __     __
__    __     __      pgup  vol+  __           ||     __       __       __      __          __     __
__    __     __      pgdn  vol-  __           ||     __       __       __      __          __     __
__    __     __      __    play  __       __  || __  __       __       __      __          __     __
                           __    __       __  || __  __       __
```

## Layer: Gaming

```layer:game
esc   1      2       3     4     5            ||     6        7        8       9           0      bs
tab   q      w       e     r     t            ||     y        u        i       o           p      \
lgui  a      s       d     f     g            ||     h        j        k       l           ;      '
lsft  z      x       c     v     b        spc || ent n        m        ,       .           /      rsft
                           lctl  mo(exp)  spc || ent bs       to(base)
```

## Layer one-hand

```layer:one
__    __     __      __    __    __           ||     __       __       __      __          __     __
__    __     __      __    __    __           ||     to(base) pgdn     g+s+tab g+tab       pgup   __
__    __     __      __    __    __           ||     left     down     up      right       __     __
__    __     __      __    __    __       __  || __  bs       ent      home    end         /      __
                           __    __       __  || __  __       to(base)
```

## Experimental layer

```layer:exp
lock  !      vol-    play  vol+  boot         ||     boot     __       -       +           =      __
esc   `      -       (     )     ~            ||     =        (        [       ]           )      __
__    esc    :       [     esc   $            ||     left     down     up      right       __     __
__    lsft   lalt    {     }     >        __  || __  home     ent      bs      raw(TS_BRK) __     del
                           __    __       __  || __  __       __
```

## Layer template

```layer:fkeys
__    __     __      __    __    __           ||     __       f10      f11     f12         __     __
__    __     __      __    __    __           ||     __       f7       f8      f9          __     __
__    __     __      __    __    __           ||     __       f4       f5      f6          __     __
__    __     __      __    __    __       __  || __  __       f1       f2      f3          __     __
                           __    __       __  || __  __       __
```

## Layer template

```disabled:layer
__   __     __     __      __     __            ||          __  __     __     __     __     __
__   __     __     __      __     __            ||          __  __     __     __     __     __
__   __     __     __      __     __            ||          __  __     __     __     __     __
__   __     __     __      __     __       __   || __       __  __     __     __     __     __
                           __     __       __   || __       __  __
```
