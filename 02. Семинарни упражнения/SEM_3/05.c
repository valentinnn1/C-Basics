#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comp1;
    int comp2;
    int comp3;
    scanf("%d",&comp1);
    scanf("%d",&comp2);
    scanf("%d",&comp3);
    int totalTime=comp1+comp2+comp3;
    int h=totalTime/60;
    int min=totalTime%60;
    printf("%d:%.02d",h,min);

    return 0;
}
