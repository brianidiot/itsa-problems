// 比大小
#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  int max = a;
  if(b>a) max=b;
  if(c>a&&c>b) max=c;
  printf("%d",max);
  return 0;
}