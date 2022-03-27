#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, h, S;

    printf("a=");
    scanf("%f", &a);

    printf("b=");
    scanf("%f", &b);

    printf("h=");
    scanf("%f", &h);

    S=((a+b)*h)/2;
    printf("S=%g", S);

    return 0;
}
