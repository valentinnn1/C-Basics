#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    if(strlen(str1)==strlen(str2))
    {
        for(int i=0;str1[i];i++)
        {
            if(str1[i]==str2[i])
            {
                continue;
            }
            else
            {
                printf("They are not equal!");
                exit(1);
            }
        }
        printf("They are equal!");
    }
    else
    {
        printf("They are not equal!");
    }
    return 0;
}
