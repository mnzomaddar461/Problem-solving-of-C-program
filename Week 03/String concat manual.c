#include<stdio.h>
#include<string.h>
int main(){
    printf("Type frist string: ");
    char stra[101];
    scanf("%s", stra);
    printf("\n");
    printf("Type secound string: ");
    char strb[101];
    scanf("%s", strb);

    int lena = strlen(stra);
    int lenb = strlen(strb);

    for(int i = 0; i <= lenb; i++){
        stra[i + lena] = strb[i];
    }
    /*
    built-in-function
    strcat(stra,strb);
    strcat a function of string concat and strb concat to assin strb.
    */

    printf("\n");
    printf("Concat string is: %s ", stra);

return 0;
}