#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int m;
    scanf("%d",&m);
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int sum;
    for(int i=m+1;i<n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
