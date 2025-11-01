#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = 0;

    for(int k = 0; k < n; k++){
        scanf("%d", &arr[k]);
    }
    int x;
    scanf("%d" ,&x);

    for(int i = 0; i < n; i++){
        
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                count = 1;
                printf("YES\n");
                printf("%d %d", arr[i], arr[j]);
            }
        }
    }
    if(count == 0){
        printf("NO");
    }

return 0;
}