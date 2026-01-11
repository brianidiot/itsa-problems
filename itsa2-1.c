// 計算三角形面積
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int floor, height;
  scanf("%d %d", &floor, &height);
  double result = (double)floor * (double)height / 2;
  printf("Triangle area:%.1lf", result);




	return 0;
}