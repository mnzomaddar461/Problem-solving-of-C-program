#include<stdio.h>
#include<string.h>
int main(){
    char str[100001];
    fgets(str,100001,stdin);
    int len = strlen(str);
    if(str[len - 1] == '\n'){
        str[len -1] = '\0';
        len--;
    }
    int ispalindrom = 1;
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len - i - 1]){
            ispalindrom =0;
            break;
        }
    }
    if(ispalindrom){
        printf("YES");
    }
    else{
        printf("NO");
    }
return 0;
}