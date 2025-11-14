#include<stdio.h>
void arrrecartion(int arr[], int n,int i){
    if(i == n){
        return;
    }
    printf("%d ", arr[i]);
    arrrecartion(arr,n,i + 1);
}
int main(){
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    arrrecartion(arr,n,0);
return 0;
}