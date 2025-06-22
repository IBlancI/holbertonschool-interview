# 0x00. Menger Sponge

## Description

This project implements a function to draw a 2D Menger sponge, a fractal pattern based on recursive square subdivision.

The Menger sponge at level `N` is built by dividing a square into 9 equal parts (like a tic-tac-toe board), removing the center square, and recursively repeating the process for each of the remaining 8 squares.

The size of a level `N` sponge is `3^N`.

---

## Requirements

- Ubuntu 14.04 LTS
- `gcc 4.8.4` with the flags: `-Wall -Werror -Wextra -pedantic`
- Code must follow the Betty style
- No global variables allowed
- Max 5 functions per file
- You must include the header file `menger.h` with proper include guards
- You are allowed to use the math library (compiled with `-lm`)

---

## Prototype

```c
void menger(int level);