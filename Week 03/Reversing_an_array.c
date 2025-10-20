#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Original Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    int pointer1 = 0, pointer2 = n-1, reversing;
    for( i = pointer1; i < pointer2; i++){
        //swaping last and first value;
        reversing = arr[i];
        arr[i] = arr[pointer2];
        arr[pointer2] = reversing;
        pointer2--;
    }
    /*
    another way to solve this reversing.
    for(i = pointer1, pointer2 = n - 1; i < pointer2; i++, pointer2--){
        //swaping last and first value;
        reversing = arr[i];
        arr[i] = arr[pointer2];
        arr[pointer2] = reversing;
    }
    */
    printf("\n");
    printf("Reversing Array: ");
    for(i = 0 ;i < n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}