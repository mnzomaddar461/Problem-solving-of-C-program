#include<stdio.h>
int main(){
    int n,x,y,start,end,sum;

    scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d %d", &x, &y);
            sum = 0;
            if(x > y){
                start = y + 1;
                end = x -1;
            }
            else{
                start = x + 1;
                end = y - 1;
            }
                for( int j = start; j <= end; j++){
                    if(j % 2 != 0){
                        sum += j;
                    }
                }
                printf("%d\n", sum);
        }
return 0;
}