// 時間組合計算
#include <stdio.h>
#include <stdlib.h>
#define hours 24 
#define mins 60
#define secs 60
int main() {
  int num;
  scanf("%d", &num);
  int d, hr, m, s;
  d = num / (hours * mins * secs);
  hr = num % (hours * mins * secs) / (60 * 60);
  m = (num % (hours * mins * secs)) % (60 * 60) / 60;
  s = (num % (hours * mins * secs)) % (60 * 60) % 60;
  printf("%d days\n%d hours\n%d minutes\n%d seconds\n", d, hr, m, s);
  return 0;
}