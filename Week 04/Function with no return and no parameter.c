#include<stdio.h>
// Function no return + no parameter
void result(){
    int a,b,ans;
    scanf("%d %d", &a, &b);
    ans = a / b;
    printf("%d", ans);
}
int main(){
    result();
return 0;
}