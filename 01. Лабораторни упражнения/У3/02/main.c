#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    if(num%8>4)
    {
        printf("Ostatuk po golyam ot 4 pri delenie s 8!");
    }
    return 0;
}
