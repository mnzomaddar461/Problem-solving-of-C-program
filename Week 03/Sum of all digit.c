#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int mod = 0;
    int result = 0;
    while( n != 0){
        mod = n % 10;
        n = n /10;
        result += mod;
    }
    printf("%d ", result);
return 0;
}