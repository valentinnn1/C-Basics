#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>6)
    {
        printf("n > 6");
    }
    else
    {
        printf("n < 6");
    }
    return 0;
}
