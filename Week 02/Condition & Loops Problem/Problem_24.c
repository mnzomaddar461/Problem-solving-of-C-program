#include<stdio.h>
int main(){
    int n,count = 0;
    scanf("%d", &n);
    if(n == 1){
        printf("NO");
    }
    else if(n == 2){
        printf("YES");
    }
    else{
        for( int i = 2; i < n; i++){
        if(n % i == 0){
            count++;
        }
    }
            if(count == 0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
return 0;
}