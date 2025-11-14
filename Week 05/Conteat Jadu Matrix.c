#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col], i, j, flag = 1;

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    if(row != col){
        printf("NO");
        return 0;
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            if (i == j || i + j == row - 1) {
                if (arr[i][j] != 1) {
                    flag = 0;
                    break;
                }
            } else {
                if (arr[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0) break;
    }
    
    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }
return 0;
}