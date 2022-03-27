#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void main()
{
    int x,y;
    scanf("%i",&x);
    scanf("%i",&y);
    swap(&x,&y);
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}
