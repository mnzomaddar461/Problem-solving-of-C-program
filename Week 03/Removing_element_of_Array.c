#include<stdio.h>
int main(){
    int n,i;
    printf("Enter The Array size: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d" ,&arr[i]);
    }
    int index;
    printf("Enter The index for Removing value: \n");
    scanf("%d", &index);
    for( i = index; i <= n; i++){
        arr[i] = arr[i + 1];
    }
    for(i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
return 0;
}