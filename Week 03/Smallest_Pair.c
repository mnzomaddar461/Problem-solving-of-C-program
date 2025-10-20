#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int minsum = 999999999; // initial value because avoit garbace value.
        // formula Ai + Aj + j - i == (Ai - i) + (Aj + j); 
        //So Frist = (Ai - i) last = (Aj + j);
        int sumfrist = arr[0] - 0; 
        for(int j = 1; j < n; j++){
            int currentsum = sumfrist + arr[j] + j;
            if(currentsum < minsum){
                minsum = currentsum;
            }
            if(arr[j] - j < sumfrist){ // for update frist part of formula (Ai - i);
                sumfrist = arr[j] - j;
            }
        }
        printf("%d", minsum);
    }
return 0;
}