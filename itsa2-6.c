// 計算兩數和的平方
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, a, b;
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    scanf("%d %d", &a, &b);
    int result = (a+b)*(a+b);
    printf("%d\n", result);
  }
  return 0;
}