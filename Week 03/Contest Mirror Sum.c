#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arra[n];
    int arrb[n];
    int arrc[n];
    int i,j,k;

    for(i = 0; i < n; i++){
        scanf("%d", &arra[i]);
    }
    for(j = 0; j < n; j++){
        scanf("%d", &arrb[j]);
    }

    for(k = 0; k < n; k++){
        arrc[k] = arra[k] + arrb[n - 1 - k] ;
    }
    for(k = 0; k < n; k++){
        printf("%d ", arrc[k]);
    }
return 0;
}