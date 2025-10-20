#include<stdio.h>

int main(){
    
    int num1, num2, temp;

    printf("Enter The Frist Value: ");
    scanf("%d", &num1);

    printf("Enter The Secound Value: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Swap The Value: %d %d\n", num1, num2);
    return 0; 
}