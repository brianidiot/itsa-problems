// 英里轉公里
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int dist;
  scanf("%d", &dist);
  double k = (double)dist*1.6;
  printf("km=%.1lf", k);
  return 0;
}