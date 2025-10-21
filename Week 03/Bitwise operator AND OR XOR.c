#include<stdio.h>
int main(){
    int n,k;
    scanf("%d\n%d", &n, &k);
    int maxAnd = 0, maxOr = 0, maxXor = 0;
    int a = 1, b = a + 1;
    int andvalue = a & b;
    int orvalue = a & b;
    int xorvalue = a & b;
    for( a = 1; a <= n; a++){
        for(b = a + 1; b <= n; b++){
            andvalue = a & b;
            orvalue = a | b;
            xorvalue = a ^ b;

            if(andvalue < k && andvalue > maxAnd){
                maxAnd = andvalue;
            }
            if(orvalue < k && orvalue > maxOr){
                maxOr = orvalue;
            }
            if(xorvalue < k && xorvalue > maxXor){
                maxXor = xorvalue;
            }
        }
    }
    printf("%d\n%d\n%d",maxAnd,maxOr,maxXor);
return 0;
}