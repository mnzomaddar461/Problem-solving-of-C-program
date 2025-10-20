#include<stdio.h>
int main(){
    long long int x,y;
    scanf("%lld %lld", &x,&y);

    //summation 
    long long int sum = x + y;
    printf("%lld + %lld = %lld\n", x, y, sum);
    //multiplication
    long long int mult = x * y;
    printf("%lld * %lld = %lld\n", x, y, mult);
    //subtraction 
    long long int sub = x - y;
    printf("%lld - %lld = %lld\n", x, y, sub);

return 0;
}