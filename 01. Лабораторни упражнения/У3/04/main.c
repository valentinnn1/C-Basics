#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        for(int c=1;c<=b;c++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
