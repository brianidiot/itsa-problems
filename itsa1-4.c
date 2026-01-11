// 中英字典
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[100];
    char chname[100];
}dictionary;
int main() {
    dictionary dic[5]={
        {"dog","狗"},
        {"cat","貓"},
        {"duck","鴨"},
        {"cow","牛"},
        {"fox","狐"}
    };
    char input[100];
    scanf("%s",input);
    for(int i=0;i<5;i++){
        if (!strcmp(input,dic[i].name)) printf("%s",dic[i].chname);
        else if(!strcmp(input,dic[i].chname)) printf("%s",dic[i].name);
    }

	return 0;
}