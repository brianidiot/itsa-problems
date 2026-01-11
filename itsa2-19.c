// 輾轉相除法
#include <stdio.h>
#include <stdlib.h>
int gcd(int m, int n){
    if(n == 0){
        return m;
    }
    return gcd(n, m % n);
  }
int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  
  printf("%d", gcd(m, n));
  return 0;
}