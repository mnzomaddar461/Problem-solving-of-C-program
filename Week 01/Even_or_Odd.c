#include<stdio.h>

int main(){
    
    int chake, take, even; 

    printf("Enter Chake Value Even or Odd: ");
    scanf("%d", &take);

    chake = take % 2;
    even = chake;


    if (even == 0)
    {
        printf("The value Is Even. \n");
    }
    else{
        printf("The Value Is Odd. \n");
    }
    

    return 0;
}