#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double km;
    printf("km:");
    scanf("%lf",&km);

    char timeOfDay;
    printf("timeOfDay:");
    scanf("%s",&timeOfDay);

    double price=0.0;

    if(km>=100){
        price=0.06*km;
    }else if(km>=20){
        price=0.09*km;
    }else{
        if(timeOfDay=="day"){
            price=0.70+0.79*km;
        }else if(timeOfDay=="night"){
            price=0.70+0.90*km;
        }
    }
    printf("%.2lf\n",price);


    return 0;
}
