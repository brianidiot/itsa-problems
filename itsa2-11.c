// 攝氏轉華氏
#include <stdio.h>
#include <stdlib.h>

int main() {
  double tc, tt;
  scanf("%lf", &tc);
  tt = (tc * 9.0 / 5.0) + 32.0;
  printf("%.1lf", tt);
  return 0;
}