#include <stdio.h>
#include <time.h>
#include<windows.h>

int main() {

  double start = clock();
  // for (int i = 0; i < 10000000000000000000000000; ++i) {
  //   int result = i * i;
  // }
  Sleep(10);
  double end = clock();
  double result = (end - start);
  printf("%f\n", result );
  return 0;
}
