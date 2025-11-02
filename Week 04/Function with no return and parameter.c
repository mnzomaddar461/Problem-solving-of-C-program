#include<stdio.h>
//Function no return + parameter
void muiltplei(int a, int b){
    int result = a * b;
    printf("%d", result);
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    muiltplei(a,b);
return 0;
}