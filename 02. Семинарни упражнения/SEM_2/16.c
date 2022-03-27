#include <stdio.h>
#include <stdlib.h>

int main()
{
    int DPM, USD_PD, M_USD;
    float MAT, M_BGN, USD_BGN;

    scanf("%d", &DPM);
    scanf("%d", &USD_PD);

    M_USD = DPM * USD_PD;

    scanf("%f", &USD_BGN);
    printf("\n");

    MAT = (M_USD * 14.5) - (M_USD * 14.5 / 4);
    M_BGN = MAT * USD_BGN;

    printf("Profit per year: %.2f BGN\n", M_BGN);
    printf("%.2f BGN per day\n", M_BGN / 365);

    return 0;
}
