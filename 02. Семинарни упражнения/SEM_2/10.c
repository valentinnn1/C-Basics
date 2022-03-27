#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;

    printf("Angle: ");
    scanf("%f", &x);

    printf("sin:%f\n", sin(x));
    printf("cos:%f\n", cos(x));
    printf("tan:%f\n", tan(x));
    printf("cotan:%f\n", atan(x));

    return 0;
}
