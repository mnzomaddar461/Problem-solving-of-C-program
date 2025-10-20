#include<stdio.h>
int main(){
    long long int n,i,s,found = 0;
    scanf("%lld", &n);

    long long int arr[n];
    for(i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &s);
    for(i = 0; i < n; i++){
        if(s == arr[i]){
            printf("%lld", i);
            found = 1;
            break;

        }
    }
    if( found == 0){
        printf("-1");
    }
return 0;
}