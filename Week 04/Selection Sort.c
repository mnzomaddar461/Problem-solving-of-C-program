#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i, j, temp;

    // Input elements
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in ascending order
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){   // <-- fixed condition here
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}