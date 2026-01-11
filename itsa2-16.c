// 停車費計算
#include <stdio.h>
#include <stdlib.h>

int main() {
  int sth, stm, eh, em, result, temp;
  scanf("%d %d", &sth, &stm);
  scanf("%d %d", &eh, &em);
  // 2hr以內每半小時30
  // 2~4每半小時40
  // 4hr以上每半小時60
  // 未滿半小不計
  int start = sth * 60 + stm;
  int end = eh * 60 + em;
  int dur = end - start;
  int t = dur / 30;
  if(dur<=120) printf("%d\n", (t * 30));
  else if(dur>120 && dur<240){
    temp = dur - 120;
    result = (temp / 30) * 40 + 120;
    printf("%d\n", result);
  }else if(dur>=240){
    temp = dur - 240;
    result = (temp /30) * 60 + 160 + 120;
    printf("%d\n", result);
  }
  return 0;
}