

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int star = 1, space = n - 1;

    // 🔺 Upper pyramid
    for(int i = 0; i < n; i++){
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for(int k = 1; k <= star; k++){
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }


    star -= 2;   // adjust star count from top half
    space = 0;   // start with one space

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int s = 1; s <= star; s++){
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    return 0;
}
