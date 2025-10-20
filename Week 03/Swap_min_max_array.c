#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int minindex = 0, maxindex = 0;

    for(i = 1; i < n ; i++){
        if(arr[i] < arr[minindex]){
            minindex = i;
        }
        if(arr[i] > arr[maxindex]){
            maxindex = i;
        }
    }
    int swap = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = swap;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}

/*
diffrient way solve this problem
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0],minindex = 0,maxindex = 0;
    for(i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
            minindex = i;
        }
        if( max < arr[i]){
            max = arr[i];
            maxindex = i;
        }
    }
    int swap, pointer1 = minindex, pointer2 = maxindex;
    if(minindex > maxindex){
        pointer1 = maxindex;
        pointer2 = minindex;
            for(i = pointer1; i < pointer2; i++){
            swap = arr[i];
            arr[i] = arr[pointer2];
            arr[pointer2] = swap;
            //pointer2--;
        }
    }
    else{
        for(i = pointer1; i < pointer2; i++){
            swap = arr[i];
            arr[i] = arr[pointer2];
            arr[pointer2] = swap;
            pointer2--;
        }
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}
*/