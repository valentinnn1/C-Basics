#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int i,len,temp;
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("%s",str);
    return 0;
}
