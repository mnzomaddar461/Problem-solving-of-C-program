#include<stdio.h>
int main(){
    long long int n,i;
    scanf("%lld", &n);
    long long int fibo1 = 0, fibo2 = 1, fibonext;

    if( n == 1){
        printf("%lld", fibo1);
        return 0;
    }
    else if(n == 2){
        printf("%lld", fibo2);
        return 0;
    }

    for(i = 3; i <= n; i++){
        fibonext = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibonext;
    }

    printf("%lld", fibonext);
return 0;
}