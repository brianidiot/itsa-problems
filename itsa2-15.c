// 電話費計算
#include <stdio.h>
#include <stdlib.h>
// 800以下0.9
// 801~1499 全部0.9*0.9
// 1500以上 全部0.9*0.79
int main() {
  int num;
  scanf("%d", &num);
  if(num<=800){
    double fee = (double)num * 0.9;
    printf("%.1lf", fee);
  }else if(num>800 && num<1500){
    double fee = (double)num * 0.81;
    printf("%.1lf", fee);
  }else if(num>=1500){
    double fee = (double)num * 0.711;
    printf("%.1lf", fee);
  }
  return 0;
}