#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200];
    scanf("%[^\n]s",str);
    int word=1;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            word++;
        }
    }
    printf("The number of words: %d",word);
    return 0;
}
