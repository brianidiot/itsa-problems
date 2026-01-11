// 計算總和,乘積,差,商和餘數
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  printf("%d+%d=%d\n",a,b,(a+b));
  printf("%d*%d=%d\n",a,b,(a*b));
  printf("%d-%d=%d\n",a,b,(a-b));
  if((a%b)>0||(a%b)==0) printf("%d/%d=%d...%d\n",a,b,(a/b),(a%b));
  else printf("%d/%d=%d...%d\n",a,b,((a/b)-1),(-(a%b)));
  return 0;
}