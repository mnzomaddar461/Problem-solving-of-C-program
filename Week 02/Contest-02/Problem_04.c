#include<stdio.h>
int main(){
    int n,i;
    int sump = 0, sumn = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if( arr[i] > 0){
            sump += arr[i];
        }
        else{
            sumn += arr[i];
        }
    }
    printf("%d %d \n", sump, sumn);
return 0;
}