// 計算兩整數間所有整數的總和
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, m, n, i;
  int sum = 0;
  scanf("%d", &num);

  for(int k=0;k<num;k++){
    scanf("%d %d", &m, &n);
    if(m>n){
      int temp = m;
      m = n;
      n = temp;
    }
    i=m;
    while(i<=n){
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    sum = 0;
  }
  return 0;
}