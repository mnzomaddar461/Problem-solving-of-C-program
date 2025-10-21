#include<stdio.h>
#include<string.h>
int main(){
    printf("Frist string: ");
    char stra[101];
    scanf("%s", stra);

    printf("Secound string: ");
    char strb[101];
    scanf("%s", strb);

    int i = 0;

    while(1){

        if(stra[i] == '\0'){
            printf("StrA small");
            break;
        }
        else if(strb[i] == '\0'){
            printf("StrB small");
            break;
        }
        else if(stra[i] == '\0' && strb[i] == '\0'){
            printf("StrA & StrB equal");
            break;
        }

        else if(stra[i] < strb[i]){
            printf("StrA small");
            break;
        }
        else if(stra[i] > strb[i]){
            printf("StrB small");
            break;
        }
        else if( stra[i] == strb[i]){
            i++;
        }
    }

    /*
    built-in-function
    strcmp(stra,strb);
    strcmp a function of string compear and strb compear to strb.
    if string a small then output -1
    if string b small then output 1
    if string a & b equal then output 0
    */

return 0;
}