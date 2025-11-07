#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1, speac = n-1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= speac; j++){
            printf(" ");
        }
        for(int k = 1; k <= star; k++){
            if(i % 2 != 0){
                printf("#");
            }
            else{
                printf("-");
            }
            
        }
        star += 2;
        speac--;
        printf("\n");
    }

    star -= 4;
    speac = 1;
    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= speac; j++){
            printf(" ");
        }
        for(int k = 1; k <= star; k++){
            if(i % 2 != 0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        star -= 2;
        speac++;
        printf("\n");
    }
return 0;
}