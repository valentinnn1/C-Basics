#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s='1';
    for(int x=0;x<=8;x++)
    {
        printf("%c \n",s+x);
    }
    printf("-----------------\n");
    char z='A';
    for(int y=0;y<=25;y++)
    {
        printf("%c \n",z+y);
    }

    return 0;
}
