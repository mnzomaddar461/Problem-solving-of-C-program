#include<stdio.h>
void revaresrecartion(int i){
    if(i == 6){
        return;
    }
    revaresrecartion(i + 1);
    printf("%d\n", i);
}
int main(){
    int i = 1;
    revaresrecartion(i);
return 0;
}