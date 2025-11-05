#include<stdio.h>
void function(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    arr[3] = 42;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    function(arr,n);
    printf("Index 4: %d\n", arr[3]);
return 0;
}