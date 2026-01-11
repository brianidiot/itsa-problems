// 計算2的i次方
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int num,i;
  scanf("%d", &num);
  for(int k=0;k<num;k++){
    scanf("%d", &i);
    int result = 1<<i;
    if(i>31)printf("Value of more than 31\n");
    else printf("%d\n", result);
  }
  return 0;
}