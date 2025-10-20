#include<stdio.h>
int main(){
    int n,i,even=0,odd=0,poi=0,neg=0,take;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d",&take);
        if(take % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        
        if(take >= 1 ){
            poi++;
        }
        else if(take <= -1){
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", poi);
    printf("Negative: %d\n", neg);
return 0;
}