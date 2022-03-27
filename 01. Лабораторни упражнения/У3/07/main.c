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
    int multipl=1;
    for(int i=m+1;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        else
        {
            multipl=multipl*i;
        }
    }
    printf("%d\n",sum);
    printf("%d",multipl);
    return 0;
}
