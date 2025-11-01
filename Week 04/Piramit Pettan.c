#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i,j,k;
    int star = 1, spaec = n - 1;

    for(i = 0; i < n; i++){
        for(j = 0; j < spaec; j++){
            printf(" ");
        }
        for(k = 1; k <= star; k++){
            printf("*");
        }
        printf("\n");
        star += 2;
        spaec--;
    }
return 0;
}