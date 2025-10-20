#include<stdio.h>
int main(){
    int n,i,min = 0;
    scanf("%d", &n);
    int arr[n];
    min = arr[0];
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] < min){
                min = arr[i];
            }
        }
        printf("%d\n", min);
return 0;
}