#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e;

    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    printf("\n");

    printf("%.2f min.\n", ((a*2-d*e)/b*c)*0.2);

    return 0;
}
