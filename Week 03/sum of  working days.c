#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);

    float newdays = 0,totaldays = 0;

    int farmer1,farmer2,days,i;
    for(i = 0; i < test; i++){
        scanf("%d %d %d", &farmer1, &farmer2, &days);
        newdays = (farmer1 * days) / (farmer1 + farmer2);
        totaldays = newdays - days;
        totaldays = -totaldays;
        /*
        int finaldays = (int)totaldays;    Decimal part will be omitted
        int finaldays = (floor)totaldays;  Lower integer
        int finaldays = ceil(totaldays);   Upper integer
        int finaldays = round(totaldays);  Nearest integer
        */
        int finaldays = (int)totaldays;
        printf("%d\n", finaldays);
    }
return 0;
}