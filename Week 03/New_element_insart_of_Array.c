#include<stdio.h>
int main(){
    int n,i;
    printf("Enter The Array Size: ");
    scanf("%d", &n);
    int arr[n + 1]; //arr[n + 1] because speace for new element in array.
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int index, value;
    printf("Enter Your targeted value and index: \n");
    scanf("%d %d", &value, &index);
    for( i = n; i >= index + 1; i--){
        //i >= index + 1 because swap value next index and stop target index.
        arr[i] = arr[i - 1]; // swaping value in next index.
    }
    arr[index] = value;
    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}