#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    float a,b,function;
    scanf("%f",&a);
    printf("Enter a number: ");
    scanf("%f",&b);
    for(float i=a;i<=b;i++)
    {
        function=i*i-4;
        printf("%.2f\n",function);
    }
    return 0;
}
