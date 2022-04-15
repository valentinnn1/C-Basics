#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="Valentin";
    CountEl(str);
    return 0;
    }

    void CountEl(char str[])
    {
    int count=0;
    for(int i=0;str[i];i++)
    {
    count++;
    }
    printf("The number of elements: %d",count);
    return 0;
}
