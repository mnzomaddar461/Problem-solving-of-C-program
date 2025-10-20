#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,take;
    int max = INT_MIN;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &take);
        if(take > max){
            max = take;
        }
    }
    printf("%d",max);
return 0;
}