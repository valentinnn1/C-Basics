#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;

    printf("C: ");
    scanf("%f", &c);

    printf("F: %f\n", c*9./5+32);

    return 0;
}
