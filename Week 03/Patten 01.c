#include<stdio.h>
int main(){
    int n,row;
    scanf("%d", &n);
    int star, speace;

    for(row = 1; row <= n; row++){
                for(speace = 1; speace <= n - row; speace++){
                    printf(" ");
                }
            for(star = 1; star <= row * 2 -1; star++){
                printf("*");
            }
            printf("\n");
    }
        for(row = n; row >= 0; row--){
                for(speace = 1; speace <= n - row; speace++){
                    printf(" ");
                }
            for(star = 1; star <= row * 2 -1; star++){
                printf("*");
            }
            printf("\n");
    }
return 0;
}