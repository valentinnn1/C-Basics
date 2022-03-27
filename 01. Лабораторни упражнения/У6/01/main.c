#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Enter number for array size: ");
    scanf("%d",&n);
    int a[n];
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum is: %d",sum);
    return 0;
}
