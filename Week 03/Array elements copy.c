#include<stdio.h>
int main(){
    int a,b,i;
    printf("Enter Frist array size and value: \n");
    scanf("%d", &a);
    int arra[a];
    for(i = 0; i < a; i++){
        scanf("%d", &arra[i]);
    }
    //second arr[b]
    printf("Enter Secound array size and value: \n");
    scanf("%d", &b);
    int arrb[b];
    for(i = 0; i < b; i++){
        scanf("%d", &arrb[i]);
    }
    // Final array arr[c]
    int arrc[a + b];
    for(i = 0; i < a; i++){
        arrc[i] = arra[i];
    }
    for(i = 0; i < b; i++){
        arrc[i + a] = arrb[i];
    }
    printf("Final Array: ");
    for(i = 0; i < a + b; i++){
        printf("%d ", arrc[i]);
    }

return 0;
}