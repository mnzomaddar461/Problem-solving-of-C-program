#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int odd = 0, i, j;

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if((arr[i] + arr[j]) % 2 != 0){
                odd++;
            }
        }
    }
    printf("%d", odd);
return 0;
}