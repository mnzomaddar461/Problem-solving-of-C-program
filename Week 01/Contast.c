/*Problem 01

#include<stdio.h>

int main(){

    printf("Hello, world! I am learning C programming language. ^_^\n");
    printf("Programming is fun and challenging. /\\/\\/\\ \n");
    printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");

    return 0;
}
*/

/* Problem 02
#include<stdio.h>

int main(){

    long long int a, b, multiplication = 0;
    scanf("%lld %lld", &a, &b);

    multiplication = a * b;

    printf("%lld ", multiplication);
    return 0;
}
*/

/*Problem 04
#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    if(n % 3 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
*/

/*Problem 05
#include<stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 7 == 0){
            printf("%d\n", i);
        }
    }
}
*/

/* Problem 06*/

#include<stdio.h>
int main(){

    int n,minus;

    scanf("%d", &n);
    if (n > 1000){
        printf("I will buy Punjabi\n");
        minus = n - 1000;
        if( minus >= 500){
            printf("I will buy new shoes\n");
                    if( minus >= 500){
            printf("Alisa will buy new shoes\n");
        }
        }
    }
    else{
        printf("Bad luck!\n");
    }

    return 0;
}