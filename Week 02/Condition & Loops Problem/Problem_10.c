#include<stdio.h>
int main(){
    long long int n,m, sum = 0, sum2 = 0;
    scanf("%lld %lld", &n, &m);

    // For First Digit
    sum = n % 10;
    // For Secound Digit
    sum2 = m % 10;

    printf("%lld", sum + sum2);
return 0;
}