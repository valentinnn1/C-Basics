#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("inch:");
    scanf("%f", &num);

    printf("m: %g\n", num * 0.0254);
    printf("cm: %g\n", num * 2.54);
    printf("dm: %g\n", num * 0.254);
    printf("mm: %g\n", num * 25.4);

    return 0;
}
