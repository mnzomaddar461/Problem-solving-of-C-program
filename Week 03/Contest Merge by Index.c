#include<stdio.h>
#include<string.h>
int main(){
    char s1[1001];
    char s2[1001];
    scanf("%s", s1);
    scanf("%s", s2);
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%s", s1);
    for(int i = num1; i <= num2; i++){
        printf("%c",s2[i]);
    }
    
return 0;
}