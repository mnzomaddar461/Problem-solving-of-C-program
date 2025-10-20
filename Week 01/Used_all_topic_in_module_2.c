#include<stdio.h>

int main(){
    int friend1, friend2, sum, cost, distance;

    printf("Deposit from first friend: TK ");
    scanf("%d", &friend1);
    printf("Deposit from first friend: TK ");
    scanf("%d", &friend2);

    sum = friend1 + friend2;

    printf("Total Deposit For First Tour is %dTK\n", sum);

    printf("Enter Travel Distance From home (km): ");
    scanf("%d", &distance);

    if(distance >= 150 && distance <= 200){
        printf("Tour cost 5500 TK.\n");
        cost = sum - 5500;
            printf("Current balance excluding expenses from first trip %d\n",cost);
    }
    else if(distance >= 200 && distance <= 500){
        printf("Tour cost 7500 TK.\n");
        cost = sum - 7500;
            printf("Current balance excluding expenses from first trip %d\n",cost);
    }
    else{
        printf("Tour cost 3500 TK.\n");
        cost = sum - 3500;
            printf("Current balance excluding expenses from first trip %d\n",cost);
    }

    if(cost >= 5000){
            printf("Next trip(1) or Sopping(2)\n");
                printf("Choice One next trip or sopping\n");
                scanf("%d %d", &friend1, &friend2);

                int decision = friend1 + friend2;

                if(decision == 2){
                    printf("Choice is Next trip\n");
                }
                else if(decision == 4){
                    printf("Choice is Sopping\n");
                }
                else{
                    printf("Back to home, Because decition don't same.\n");
                }
    }
    else{
        printf("Back to home, Because decition don't same\n");
    }

    return 0;
}
