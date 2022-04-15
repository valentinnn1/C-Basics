#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int pointcount=0;
    int spacecount=0;
    int commacount=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='.')
        {
            pointcount++;
        }
        else if(str[i]==',')
        {
            commacount++;
        }
        else if(str[i]==' ')
        {
            spacecount++;
        }
    }
    printf("There are %d points\n",pointcount);
    printf("There are %d spaces\n",spacecount);
    printf("There are %d commas\n",commacount);
    return 0;
}
