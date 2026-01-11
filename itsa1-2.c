// 拆解四位數
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int num;
    scanf("%d",&num);
    int a,b,c,d;
    d=num%10;
    c=((num%100)-d)/10;
    b=((num%1000)-10 *c-d)/100;
    a=num/1000;
    printf("%d\n%d\n%d\n%d\n",a, b, c, d);

	return 0;
}