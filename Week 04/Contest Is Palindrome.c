#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]){
    int num = strlen(str);
    int return_value = 1;
    for(int i = 1; i < num / 2; i++){
        if(str[i] != str[num - i - 1]){
            return_value = 0;
        }
    }
    return return_value;
}
int main(){
    char str[1004];
    scanf("%s", str);
    int result = is_palindrome(str);
    if(result == 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
return 0;
}