#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n-2;i++)
    {
        if(i%2==1)
        {
            //top
            for(int j=1;j<=n-2;j++)
                printf("%c",'*');
            printf("%c",92);
            printf("%c",' ');
            printf("%c",'/');
            for(int j=1;j<=n-2;j++)
                printf("%c",'*');
        }
        else
        {
            for(int j=1;j<=n-2;j++)
                printf("%c",'-');
            printf("%c",92);
            printf("%c",' ');
            printf("%c",'/');
            for(int j=1;j<=n-2;j++)
                printf("%c",'-');
        }
        printf("\n");
    }
    printf("%*c\n",n,'@');
    for(int i=1;i<=n-2;i++)
    {
        if(i%2==1)
        {
            //bottom
            for(int j=1;j<=n-2;j++)
                printf("%c",'*');
            printf("%c",'/');
            printf("%c",' ');
            printf("%c",92);
            for(int j=1;j<=n-2;j++)
                printf("%c",'*');
        }
        else
        {
            for(int j=1;j<=n-2;j++)
                printf("%c",'-');
            printf("%c",'/');
            printf("%c",' ');
            printf("%c",92);
            for(int j=1;j<=n-2;j++)
                printf("%c",'-');
        }
        printf("\n");
    }
    return 0;
}
