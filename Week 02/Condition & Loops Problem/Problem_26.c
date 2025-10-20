#include<stdio.h>
int main(){
    char ch = 97;
    scanf("%c", &ch);
    if(ch == 'z'){
        printf("%c", 'a');
    }
    else{
        printf("%c", ch+1);
    }

    
return 0;
}