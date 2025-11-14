#include <stdio.h>
#include <stdlib.h>

int main(){
    int test;
    scanf("%d", &test);

    while (test--) {
        int n;
        scanf("%d", &n);
        int arra[n], arrb[n], arrc[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &arra[i]);
            arrb[i] = arra[i];  // copy
        }

        // Bubble sort arrb
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(arrb[j] > arrb[j+1]){
                    int temp = arrb[j];
                    arrb[j] = arrb[j+1];
                    arrb[j+1] = temp;
                }
            }
        }

        // Calculate abs difference
        for(int i = 0; i < n; i++){
            arrc[i] = abs(arra[i] - arrb[i]);
        }

        // Print array C
        for(int i = 0; i < n; i++){
            printf("%d", arrc[i]);
            if(i != n-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
