#include<stdio.h>
int main(){
    long long int n,i, sum = 0;
    
    scanf("%lld", &n);
    int arr[n];

        for(i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
            sum = arr[i] + sum;
        }
                    if(sum <= 0){
                sum = -sum;
            }
            else{
                sum = sum;
            }
    printf("%lld", sum);
return 0;
}