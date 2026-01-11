// 數字自行輸出
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    while(scanf("%d",&num) != EOF){
        if(num < 0 || num > 9){
            printf("Input must be a single digit (0-9).\n");
            continue;
        }
    
    switch(num){
        case 0:
            printf("*****\n*   *\n*   *\n*   *\n*****\n");
            break;
        case 1:
            printf("    *\n    *\n    *\n    *\n    *\n");
            break;
        case 2:
            printf("*****\n    *\n*****\n*    \n*****\n");
            break;
        case 3:
            printf("*****\n    *\n*****\n    *\n*****\n");
            break;
        case 4:
            printf("*   *\n*   *\n*****\n    *\n    *\n");
            break;
        case 5:
            printf("*****\n*    \n*****\n    *\n*****\n");
            break;
        case 6:
            printf("*    \n*    \n*****\n*   *\n*****\n");
            break;
        case 7:
            printf("*****\n    *\n    *\n    *\n    *\n");
            break;
        case 8:
            printf("*****\n*   *\n*****\n*   *\n*****\n");
            break;
        case 9:
            printf("*****\n*   *\n*****\n    *\n*****\n");
            break;
    }
    }
    
    return 0;
}