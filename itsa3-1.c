// 判斷正負數
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  scanf("%d", &num);
  if(num>0) printf("正數\n");
  else if(num<0) printf("負數\n");
  else printf("0\n");
  return 0;
}