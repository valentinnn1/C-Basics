#include <stdio.h>
#include <stdlib.h>

void function (int *c)
{
    if(*c<100)
    {
        *c*=10;
    }
    else if(*c>100 && *c<1000)
    {
        *c+=10;
    }
    else if(*c>1000)
    {
        *c/=10;
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    function(&x);
    printf("%d\n",x);
    return 0;
}
