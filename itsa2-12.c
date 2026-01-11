// 購票計算
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  scanf("%d", &num);
  int ten, fiv, one;
  ten = num / 10;
  fiv = (num % 10) / 5;
  one = num % 5;
  printf("NT10=%d\nNT5=%d\nNT1=%d", ten, fiv, one);
  return 0;
}