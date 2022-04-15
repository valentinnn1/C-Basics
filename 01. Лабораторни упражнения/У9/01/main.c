#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30]="Hello ";
    char str2[]="TU";
    char str3[]="";
    strcpy(str3,strcat(str,str2));
    printf("%s\n",str3);
    printf("%d\n",strlen(str));
    printf("%d\n",strcmp(str,str2));
    printf("%d\n",strchr(str,'H'));
    return 0;
}
