#include<stdio.h>
int main(){
    int a, b;
    char ch;

    scanf("%d %c %d", &a, &ch, &b);

    if((ch == '>' && a > b) || (ch == '=' && a == b) || (ch == '<' && a < b)){
        printf("Right");
    }
    else{
        printf("Wrong");
    }
return 0;
}