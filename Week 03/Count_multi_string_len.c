#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    char t[1001];
    scanf("%s", &s);
    scanf("%s",&t);
    int size = strlen(s);
    int size2 = strlen(t);
    printf("%d %d\n", size, size2);
    printf("%s %s", s, t);
return 0;
}