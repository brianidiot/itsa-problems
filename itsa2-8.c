// 算平方及立方
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, a;
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    scanf("%d", &a);
    printf("%d %d %d\n", a, (a*a), (a*a*a));
  }
  return 0;
}