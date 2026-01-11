// 計算兩點距離
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int ax, ay, bx, by;
  scanf("%d %d", &ax, &ay);
  scanf("%d %d", &bx, &by);
  double diff_x = ax - bx;
  double diff_y = ay - by;
  double dist = sqrt(diff_x*diff_x + diff_y*diff_y);
  printf("%.2lf", dist);

  return 0;
}