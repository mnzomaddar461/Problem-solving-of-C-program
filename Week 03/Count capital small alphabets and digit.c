#include<string.h>
#include<stdio.h>
int main(){
    int test,t;
    scanf("%d", &test);
    char str[1000001];

    for(t = 0; t < test; t++){
        scanf("%s", &str[t]);
        int countCapital = 0;
        int countSmall = 0;
        int countdigit = 0;
        int len =strlen(str);
        for(int i = 0; i < len; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                countCapital++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z'){
                countSmall++;
            }
            else if(str[i] >= '0' && str[i] <= '9'){
                countdigit++;
            }
        }
        printf("%d %d %d\n", countCapital,countSmall, countdigit);
    }
return 0;
}