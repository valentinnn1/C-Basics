#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int i;
    int maxnum=0;

    do
    {
        printf("Enter a num between -100 and 100: ");
        scanf("%d",&arr[i]);
    }
    while(arr[i]>=-100 && arr[i]<=100)
    {
        if(arr[i]>maxnum)
        {
            maxnum=arr[i];
        }
    }
    printf("%d",maxnum);
}
