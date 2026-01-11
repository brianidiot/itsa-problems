// 找靠近一數的最大質數
#include <stdio.h>
#include <stdlib.h>
int is_prime(int num){
    if(num<=1) return 0;

    for(int i = 2;i * i<num;i++){
        if(num % i ==0) return 0;
    }
    return 1;
}

int main() {
  int num;
  scanf("%d", &num);
  for(int j=1;j<=num-2;j++){
    if(is_prime(num-j)){
        printf("%d", num-j);
        break;
    }
  }
  return 0;
}