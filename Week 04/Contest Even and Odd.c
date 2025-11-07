#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i,odd = 0, even = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0){
            odd++;
        }
        else if(arr[i] % 2 == 0){
            even++;
        }
    }

    printf("%d %d", even, odd);

}
int main(){
    odd_even();
return 0;
}