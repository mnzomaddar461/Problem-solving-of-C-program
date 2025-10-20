#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int ispelindrom = 1, left = 0, right = n-1;
    while (left < right)
    {
        if(arr[left] != arr[right]){
            ispelindrom = 0;
            break;
        }
        left++;
        right--;
    }
    if(ispelindrom){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
return 0;
}