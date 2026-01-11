// 薪水計算
#include <stdio.h>
#include <stdlib.h>

int main() {
  int t, pay,temp;
  double final_pay;
  scanf("%d %d", &t, &pay);
  if(t<=60){
    final_pay = (double)t * (double)pay;
    printf("%.1lf\n", final_pay);
  }else if(t>60 && t<=120){
    temp = t - 60;
    final_pay = (double)temp * (double)pay * 1.33 + 60.0 * (double)pay;
    printf("%.1lf\n", final_pay);
  }else if(t>120){
    temp = t - 120;
    final_pay = (double)temp * (double)pay * 1.66 + 60.0 * 1.33 * (double)pay + 60.0 * (double)pay;
    printf("%.1lf\n", final_pay);
  }
  return 0;
}