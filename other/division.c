#include <stdio.h>
void division1() {
  int a = 0x80000000;
  int b = a / -1;
  printf("%d\n", b);
}
void division2() {
  int a = 0x80000000;
  int b = -1;
  int c = a / b;
  printf("%d\n", c);
}
int main() {
  division1();
  division2();
  return 0;
}