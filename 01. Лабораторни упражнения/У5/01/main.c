#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,*x1;
    double y,*y1;
    char z,*z1;
    x1=&x;
    *x1=5;
    y1=&y;
    *y1=2.1;
    z1=&z;
    *z1='Z';

    printf("%d %.1f %c\n",*x1,*y1,*z1);
    printf("%p %p %p",x1,y1,z1);
    return 0;
}
