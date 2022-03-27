#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    int c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("Profit is %.2f Euro.\n", (a*c+b*d)*1.95);

    return 0;
}
