#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    printf("/");
    for(int i=1;i<=n/2;i++)
        printf("%c",'^');
    printf("%c",92);
    for(int i=1;i<=n*2-n/2*2-4;i++)
        printf("%c",'_');
    printf("/");
    for(int i=1;i<=n/2;i++)
        printf("%c",'^');
    printf("%c\n",92);

    for(int i=3;i<n;i++)
        printf("|%*c\n",2*n-1,'|');
    printf("|%*c",(2*n-2-(n-1)/2-1)/2+1,' ');


    for(int i=1;i<=(n-1)/2-1;i++)
        printf("%c",'_');
    printf("%*c\n",(2*n-2-(n-1)/2)/2+2,'|');
    printf("%c",92);

    for(int i=1;i<=(2*n-2-(n-1)/2-1)/2;i++)
        printf("%c",'_');
    printf("/");
    for(int i=1;i<=(n-1)/2-1;i++)
        printf("%c",' ');
    printf("%c",92);
    for(int i = 1;i<=(2*n-2-(n-1)/2)/2;i++)
        printf("%c",'_');
    printf("/");

    return 0;
}
