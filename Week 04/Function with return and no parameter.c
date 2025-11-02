#include<stdio.h>
//Function without parameter 
int sub(){
    int a,b;
    scanf("%d %d", &a, &b);
    int result = a - b;
    return result;
}
int main(){
    int result;
    result = sub();
    printf("%d", result);
return 0;
}