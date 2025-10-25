#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    //int looplen = (n*4)-1;

    int current = 1;
    for(i = 1; i <= n; i++){
        for( j = 1; j <= 3; j++){
            printf("%d ", current);
            current++;
        }
        printf("PUM\n");
        current++;
    }
return 0;
}