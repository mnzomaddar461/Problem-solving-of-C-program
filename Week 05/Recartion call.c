#include<stdio.h>
void recartion(int i){

    if(i == 5){
        return;
    }
    printf("%d\n",i);
    recartion(i + 1);
}
int main(){
    int i = 1;
    recartion(i);
return 0;
}