// 相遇時間計算
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 每秒追0.238m
int main() {
  int dist;
  scanf("%d", &dist);
  double t = (double)dist / 0.238;
  int result = (int)ceil(t);
  printf("%d", result);
  return 0;
}