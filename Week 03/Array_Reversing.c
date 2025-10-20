#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d" ,&arr[i]);
    }
    int pointer1 = 0, pointer2 = n -1, revers;
    for(i = pointer1; i < pointer2; i++){
        revers = arr[i]; 
        arr[i] = arr[pointer2];
        arr[pointer2] = revers;
        pointer2--;
    }
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
return 0;
}