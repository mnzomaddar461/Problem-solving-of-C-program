#include<stdio.h>

int main(){
    int take;

    printf("Enter Chake Value positive or negative: ");
    scanf("%d", &take);

    if( take < 0){
        printf("The Value Is Negative.\n");
    }
    else{
        printf("The Value Is Positive.\n");
    }

    return 0;
}