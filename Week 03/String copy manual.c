#include<stdio.h>
#include<string.h>
int main(){
    printf("Type Original text: \n");
    char stra[100];
    scanf("%s", stra);

    printf("Type for copy text: \n");
    char strb[100];
    scanf("%s", strb);

    //rules for manual
    int len = strlen(strb);
    for(int i = 0; i <= len; i++){
        stra[i] = strb[i];
    }

    /*
    built-in-function
    strcpy(stra,strb);
    strcpy a function of string copy and strb copy to assin strb.
    */
    
    printf("Copy taxt hear: ");
    printf("%s ", stra);
return 0;
}