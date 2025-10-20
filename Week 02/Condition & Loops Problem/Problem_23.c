#include<stdio.h>
int main(){
    int x;
    long long int value,i,j, fact = 1;

    scanf("%d",&x);

    for( j = 1; j <= x; j++){
        scanf("%lld", &value);
        fact = 1;
        for( i = 1; i <= value; i++){
            fact = fact * i;
        }
        printf("%lld\n",fact );
    }
return 0;
}