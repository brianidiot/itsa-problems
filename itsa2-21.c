// 計算能被2,3整除但不能被12整除的整數總和
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int sum = 0;
  scanf("%d", &n);
  for(int i=1;i<=n;i++){
    if(i%6==0 && i%12!=0) sum+=i;
  }
  printf("%d", sum);
  return 0;
}