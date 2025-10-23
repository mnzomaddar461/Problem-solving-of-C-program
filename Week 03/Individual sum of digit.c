#include<stdio.h>
#include<string.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    char digit[n + 1];
    scanf("%s", digit);
    int len = strlen(digit);
    for(int i = 0; i < len; i++){
        if(digit[i] >= '0' && digit[i] <= '9'){
            sum += digit[i] - '0';
        }
    }

    printf("%d", sum);
return 0;
}