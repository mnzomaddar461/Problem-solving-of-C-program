#include<stdio.h>
int main(){
    int n,i;
    int counttwo = 0, countthree = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            counttwo++;
        }
        if(a[i] % 3 == 0 && a[i] % 2 != 0){
            countthree++;
        }
    }

    printf("%d %d", counttwo, countthree);
return 0;
}