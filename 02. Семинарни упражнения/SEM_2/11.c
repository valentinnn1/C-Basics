#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1x, p1y, p2x, p2y, a, b;

    printf("P1(x):");
    scanf("%f", &p1x);

    printf("P1(y):");
    scanf("%f", &p1y);

    printf("P2(x):");
    scanf("%f", &p2x);

    printf("P2(y):");
    scanf("%f", &p2y);

    a=abs(p1x-p2x);
    b=abs(p1y-p2y);

    printf("S=%f\n", a*b);

    return 0;
}
