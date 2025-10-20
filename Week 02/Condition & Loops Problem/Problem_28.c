#include<stdio.h>
int main(){
    int n,digit1,digit2;
    scanf("%d", &n);

    digit1 = n % 10;
    digit2 = n / 10;

    printf("%d\n", digit1);
    printf("%d\n", digit2);

    if(digit1 % digit2 == 0){
        printf("YES");
    }
    else if(digit2 % digit1 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
return 0;
}