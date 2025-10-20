#include<stdio.h>
#include<string.h>
int main(){
    int t,i;
    scanf("%d", &t);
    for( i = 0; i < t; i++ ){
        char str[100];
        scanf("%s", str);
        int len = strlen(str);
        if(len > 10){
            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
        else{
            printf("%s\n",str );
        }
    }
return 0;
}