#include<string.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    char ch;
    int even = 0, odd = 0, i, j;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf(" %c", &ch);

    if(ch == 'g'){
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                even += arr[i];
            }
        }
    }
    else if(ch == 'b'){
        for(i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                odd += arr[i];
            }
        }
    }
    if(ch == 'b'){
        printf("%d", odd);
    }
    else if(ch == 'g'){
        printf("%d", even);
    }
return 0;
}