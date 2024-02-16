#include <stdio.h>
//%p print the address of a
void printptr(void *p) { printf("p = %p; *p = %016lx\n", p, *(long *)p); }
int x;
int main(int argc, char *argv[]) {
  // code
  printptr(main);
  printptr(&main);
  // data
  printptr(&x);
  // stack
  printptr(&argc);
  printptr(argv);
  printptr(&argv);
  printptr(argv[0]);
}
