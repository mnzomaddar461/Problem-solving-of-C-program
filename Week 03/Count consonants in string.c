#include<string.h>
#include<stdio.h>
int main(){
    char s[100000];
    scanf("%s", s);

    int len = strlen(s);
    int count = 0;
    int sum = 0;

    for(int i = 0; i < len; i++){
        sum++;
        if(s[i] == 'a' || s[i] == 'e' || s[i] =='i'){
            count++;
        }
        if(s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }

    sum = sum - count;
    printf("%d", sum);
    
return 0;
}