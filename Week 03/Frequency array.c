#include<stdio.h>
int main(){
    int i, n , m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int fre[m + 1];

    for(i = 0; i <= m; i++){
        fre[i] = 0;
    }

    for( i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] <= m){
            fre[arr[i]]++;
        }
    }

    for(i = 1; i <= m; i++){
        printf("%d\n", fre[i]);
    }
return 0;
}