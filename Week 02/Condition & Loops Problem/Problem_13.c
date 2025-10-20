#include<stdio.h>
int main(){
    int n,months, chake,days;

    scanf("%d",&n);
    int years = n /365;
        printf("%d years\n", years);
        chake = n - (years * 365);
        months = chake;
        months = chake / 30;
        printf("%d months\n", months);

        days = chake - (months * 30);
        printf("%d days\n", days);
return 0;
}