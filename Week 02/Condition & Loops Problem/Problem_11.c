#include<stdio.h>
#include <string.h>
int main(){
    char f1[50],l1[50], f2[50],l2[50];
    scanf("%s %s", f1, l1);

    scanf("%s %s", f2, l2);

    if(strcmp(l1,l2) == 0){
        printf("ARE Brothers");
    }
    else{
        printf("NOT");
    }
return 0;
}