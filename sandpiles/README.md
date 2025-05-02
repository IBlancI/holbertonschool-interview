This project is an implementation of the Abelian Sandpile Model, a mathematical model exhibiting self-organized criticality. Given two 3x3 grids (sandpiles), this program computes their sum and stabilizes the result by applying the "toppling" rule recursively until the sandpile is stable.


Requirements

Ubuntu 14.04 LTS
GCC 4.8.4 with the flags: -Wall -Werror -Wextra -pedantic
No use of global variables
Maximum 5 functions per file
Code must follow the Betty coding style
Header file: sandpiles.h (must be include-guarded)


Compilation

gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o sandpiles