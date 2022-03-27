#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;

    printf("Levs:");
    scanf("%f", &c);

    printf("Dollars: %g\n", c*0.56);
    printf("Euro: %g\n", c*0.51);
    printf("Pounds: %g\n", c*0.42);

    return 0;
}

