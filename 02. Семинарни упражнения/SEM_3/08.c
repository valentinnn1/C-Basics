#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float initialVolume,poolsVolume,overflow;
    float p1;
    float p2;
    float h;
    printf("Initial volume of the pool:");
    scanf("%f",&initialVolume);
    printf("p1:");
    scanf("%f",&p1);
    printf("p2:");
    scanf("%f",&p2);
    printf("h:");
    scanf("%f",&h);
    poolsVolume=p1*h+p2*h;
    overflow=abs(poolsVolume-initialVolume);
    if(poolsVolume<initialVolume){
         printf("The p1: %.2f and p2:%.2f made the pool full with %g liters\n",p1,p2,poolsVolume);
    }else{
         printf("The pool overflows with %g liters",overflow);
    }


    return 0;
}
