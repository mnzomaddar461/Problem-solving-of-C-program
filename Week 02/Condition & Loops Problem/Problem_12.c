#include<stdio.h>
#include<math.h>
int main(){
    int a,b,result;
    char ch;
    scanf("%d %c %d", &a,&ch, &b);

    if(ch == '+'){
        result = a + b;
        printf("%d",result);
    }
    else if(ch == '-'){
        result = a - b;
        printf("%d",result);
    }
    else if(ch == '*'){
        result = a * b;
        printf("%d",result);
    }
    else if(ch == '/'){
        result = a / b;
        printf("%d",result);
    }
return 0;
}