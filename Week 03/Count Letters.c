#include<stdio.h>
#include<string.h>
int main(){
    char letters[10000001];
    // int sum[26] = {0};

    scanf("%s", letters);
    int len = strlen(letters);
    int sum[26] = {0};
    for(int i = 0; i < len; i++){
        if(letters[i] >= 'a' && letters[i] <= 'z'){
            sum[letters[i] - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(sum[i] > 0){
            printf("%c : %d\n", 'a' + i, sum[i]);
        }
    }
return 0;
}