#include<stdio.h>
int main(){
    int t;
    int w,h;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        //int w,h;
        scanf("%d %d", &w, &h);
            if(w == h){
            printf("Square\n");
        }
        if(w != h){
                printf("Rectangle\n");
        }
    }
    
return 0;
}