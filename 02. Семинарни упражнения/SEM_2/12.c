#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1x, p1y, p2x, p2y, p3x, p3y, a, h;

    printf("P1(x):");
    scanf("%f", &p1x);

    printf("P1(y):");
    scanf("%f", &p1y);

    printf("P2(x):");
    scanf("%f", &p2x);

    printf("P2(y):");
    scanf("%f", &p2y);

    printf("P3(x):");
    scanf("%f", &p3x);

    printf("P3(y):");
    scanf("%f", &p3y);

    a=abs(p1x-p2x);
    h=abs(p1y-p3y);

    printf("S=%f\n", (a*h)/2);

    return 0;
}
