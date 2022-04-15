#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[];
    char bigstring[];
    while(1)
    {
        scanf("%s",input);
        int size1=strlen(input);
        if(!strcmp(input,"quit"))
        {
            break;
        }
        int size2=sizeof(bigstring);
        if(size1+size2>size2)
        {
            break;
        }
        strcat(input,bigstring);
        fflush(stdin);
    }
    puts(bigstring);
    return 0;
}
