// 星號畫三角形
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
            for(int i=1;i<=5;i++){
                if(i!=5){
                    int blanks=(9-(2*i)+1)/2;
                    for(int j=1;j<=blanks;j++){
                        printf(" ");
                    } 
                    if(i!=1){
                        printf("*");
                        for(int k=1;k<=2*i-3;k++) printf(" ");
                        printf("*");
                    }else if(i==1) printf("*");
                    printf("\n");
                }else if(i==5){
                    printf("*********\n");
                }
                
            }
            break;
        case 2:
            for(int i=1;i<=5;i++){
                int blanks=(9-(2*i)+1)/2;
                for(int j=1;j<=blanks;j++) printf(" ");
                for(int k=1;k<=2*i-1;k++) printf("*");
                printf("\n");
            }
            break;
        case 3:
            for(int i=5;i>=1;i--){
                int blanks=(9-(2*i)+1)/2;
                for(int j=1;j<=blanks;j++) printf(" ");
                for(int k=1;k<=2*i-1;k++) printf("*");
                printf("\n");
            }
            break;
    }

	return 0;
}