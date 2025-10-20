#include<stdio.h>
int main(){
    int n, result;
    scanf("%d",&n);
    result = n /1000;
    if(result % 2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
return 0;
}