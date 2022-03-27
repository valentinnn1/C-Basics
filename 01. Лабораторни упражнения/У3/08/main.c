#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int N,K,M,counter;
    scanf("%d",&N);
    if(N>K && N%3==0)
    {
        counter++;
    }
    printf("Enter a number: ");
    scanf("%d",&K);
    for(int i=1;i<=N;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&M);
        if(M>K && M%3==0)
        {
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}
