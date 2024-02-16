#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void copyij(int src[2048][2048], int dst[2048][2048]) {
  int i, j;
  for (i = 0; i < 2048; i++)
    for (j = 0; j < 2048; j++) dst[i][j] = src[i][j];
}

void copyji(int src[2048][2048], int dst[2048][2048]) {
  int i, j;
  for (j = 0; j < 2048; j++)
    for (i = 0; i < 2048; i++) dst[i][j] = src[i][j];
}

int main() {
  int src[2048][2048];
  int dst[2048][2048];
  // 初始化 src 数组
  for (int i = 0; i < 2048; i++) {
    for (int j = 0; j < 2048; j++) {
      src[i][j] = i + j;  // 这里可以根据需要初始化
    }
  }
  double begin = clock();  // 记录开始时间
  copyij(src, dst);        // 调用拷贝函数
  double end = clock();    // 记录结束时间

  double time_spent = (end - begin);
  printf("%.2lf\n", time_spent);
  
  return 0;
}
