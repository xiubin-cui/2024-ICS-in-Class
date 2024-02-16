// Digital logic circuit simulator with macro
//  version 3
#include <stdio.h>
#include <unistd.h>
#define FORALL_REGS(_) _(Z) _(X) _(Y)
#define LOGIC                  \
  X1 = (!X && Y) || (X && !Y); \
  Y1 = !Y;                     \
  Z1 = (!Z && X && Y) || (Z && !X && !Y) || (Z && X1);
#define DEFINE(X) static int X, X##1;
#define UPDATE(X) X = X##1;
#define PRINT(X) printf(#X " = %d; ", X);
int main() {
  FORALL_REGS(DEFINE);
  while (1) {  // clock
    FORALL_REGS(PRINT);
    putchar('\n');
    sleep(1);
    LOGIC;
    FORALL_REGS(UPDATE);
  }
}
