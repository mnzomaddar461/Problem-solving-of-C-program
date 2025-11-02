#include<stdio.h>
// funtion return + peramrter

int sum(int a, int b){
    int ans = a + b;
    return ans;
}
int main(){
    int a,b,ans;
    scanf("%d %d", &a, &b);


    ans = sum(a,b);
    printf("%d", ans);
    
return 0;
}