#include<stdio.h>
int main(){
    int i,n;
    long long int fibo1 = 0,fibo2 = 1,fibo;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%lld ", fibo1);
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo;
    }
return 0;
}