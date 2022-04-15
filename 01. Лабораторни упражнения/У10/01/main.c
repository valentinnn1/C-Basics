#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *arr;
    arr=malloc(100*sizeof(char));
    if(arr==NULL)
    {
        exit(1);
    }
    scanf("%[^\n]s",arr);

    int i;
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]==' ')
        {
            i++;
            while(arr[i]!='\0')
            {
                printf("%c",arr[i]);
                i++;
            }
        }
    }
    return 0;
}
