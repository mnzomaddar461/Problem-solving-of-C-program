#include<stdio.h>
int main(){
    int n;
    while( scanf("%d",&n)){
                // scanf("%d",&n);
                // printf("%d\n", n);
        if(n == 1999){
            printf("Correct");
            break; 
        }
        else{
            printf("Wrong");
        }
        printf("\n");
    }
return 0;
}