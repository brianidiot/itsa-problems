// 計算梯形面積
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int up, down, height;
  scanf("%d %d %d", &up, &down, &height);
  double result = ((double)up + (double)down) * (double)height / 2;
  printf("Trapezoid area:%.1lf", result);




	return 0;
}