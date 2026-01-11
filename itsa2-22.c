// 十進制轉二進制
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);    
  for(int i = 7; i >= 0; i--){
    if(n & (1U << i)){ 
      printf("1");
    }else{
      printf("0");
    }
  }
  return 0;
}