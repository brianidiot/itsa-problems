// BMI計算
#include <stdio.h>
#include <stdlib.h>

int main() {
  int w,h;
  scanf("%d %d", &w, &h);
  double hcm = (double)h / 100.0;
  double bmi = (double)w / (hcm * hcm); 
  printf("%.2lf", bmi);
  return 0;
}