#include<stdio.h>
#include<string.h>
int main(){
    int test;
    scanf("%d", &test);

        while (test--)
        {
            char s[101], t[101], merge[202];
            scanf("%s %s", s, t);

            int lens = strlen(s);
            int lent = strlen(t);
            int k = 0;

            int maxlen = lens > lent ? lens : lent;

            for(int i = 0; i < maxlen; i++){
                if(i < lens){
                    merge[k++] = s[i];
                }
                if(i < lent){
                    merge[k++] = t[i];
                }
            }
            merge[k] = '\0';
            printf("%s\n", merge);
        }
        
return 0;
}