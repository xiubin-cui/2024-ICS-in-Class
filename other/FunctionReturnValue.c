#include <stdio.h>
double fun(int i) {
  volatile double d[1] = {3.14};
  volatile long int a[2];
  a[i] = 1073741824; /* Possibly out of bounds */
  return d[0];
}
int main() {
  fun(3);
  return 0;
}