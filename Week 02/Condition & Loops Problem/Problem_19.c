#include<stdio.h>
int main(){
    int i,n,mult;
    scanf("%d", &n);

    for(i = 1; i <= 12; i++){
        mult = n * i;
        printf("%d * %d = %d\n", n, i, mult);
    }

return 0;
}