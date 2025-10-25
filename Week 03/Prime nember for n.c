#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    scanf("%d",&n);
    int isprime = 1;

    for(i = 2; i <= n; i++){
        isprime = 1;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
            isprime = 0;
            break;
        }
        }
        if(isprime){
            printf("%d ", i);
        }
    }
    return 0;
}
