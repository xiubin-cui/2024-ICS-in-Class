// Digital logic circuit simulator
// version 1 with no macro
#include <stdio.h>
#include <unistd.h>
int main() {
  int X = 0, Y = 0;
  int X1 = 0, Y1 = 0;
  while (1) {
    printf("X =%d,Y = %d\n", X, Y);
    X1 = (!X && Y) || (X && !Y);
    Y1 = !Y;
    X = X1;
    Y = Y1;
    sleep(1);
  }
}
