#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,s;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter a number: ");
    scanf("%f",&b);
    s=a*b;
    printf("Area equals: %0.2f\n",s);
    return 0;
}
