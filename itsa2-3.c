// 計算正方形面積
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int num;
  double length;
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    scanf("%lf", &length);
    double result=length * length;
    double new_result = round(result * 10.0) / 10.0;
    printf("%.1lf\n", new_result);
  }




	return 0;
}