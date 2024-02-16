#include <stdlib.h>

#include <iostream>

#define NAMES(X) X(Tom) X(Jerry) X(Tyke) X(Spike)
#define PRINT(x) puts("Hello, " #x "!");
#define PRINT2(x) puts("Goodbye, " #x "!");
int main() {
  NAMES(PRINT);
  NAMES(PRINT2);
  return 0;
}
