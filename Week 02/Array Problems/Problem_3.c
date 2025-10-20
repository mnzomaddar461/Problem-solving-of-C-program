#include<stdio.h>
int main(){
    int n,i,max = 0;
    scanf("%d", &n);
    int arr[n];
        for( i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(max < arr[i]){
                max = arr[i];
            }
        }
        printf("%d\n", max);
return 0;
}