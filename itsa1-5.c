// 拆解四位數，分別輸出星號
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
    int num,store[5];
    scanf("%d",&num);
    store[0]=num/10000;
    store[1]=(num/1000)%10;
    store[2]=(num/100)%10;
    store[3]=(num/10)%10;
    store[4]=num%10;

    for(int i=0;i<5;i++){
        int j=0;
        while(j<store[i]){
            printf("*");
            j++;
        } 
        printf("\n");
    }
	return 0;
}