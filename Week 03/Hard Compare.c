#include<math.h>
#include<stdio.h>
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);

    double left = b * log((double)a);
    double right = d * log((double)c);

    if(left > right){
        printf("YES");
    }
    else{
        printf("NO");
    }

return 0;
}