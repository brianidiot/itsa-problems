// 拆解四位數並輸出反向
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int num,a,b,c,d;
    scanf("%d",&num);
    d=num%10;
    c=((num%100)-d)/10;
    b=((num%1000)-10 *c-d)/100;
    a=num/1000;
    printf("%d,%d,%d,%d\n",d, c, b, a);



	return 0;
}