#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area;
    printf("square m of the vine:");
    scanf("%d",&area);

    double YkgGrapesForOneMgrapes;
    printf("kg grapes of 1 square meters vine:");
    scanf("%lf",&YkgGrapesForOneMgrapes);

    int wineForSale;
    printf("wine for sale:");
    scanf("%d",&wineForSale);

    int numOfWorkers;
    printf("Num of workers:");
    scanf("%d",&numOfWorkers);

    int totalGrapes=area*YkgGrapesForOneMgrapes;
    double wineForLiter=0.4*totalGrapes/2.5;
    if(wineForLiter>wineForSale){
        printf("%.0lf liters left, %.0lf per person",wineForLiter-wineForSale,(wineForLiter-wineForSale)/numOfWorkers);
    }else{
        printf("%.0lf liters are needed",wineForSale-wineForLiter);
    }

    return 0;
}
