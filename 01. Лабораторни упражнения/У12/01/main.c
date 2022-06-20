#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int num1,num2,num3;
    fp = fopen("file1","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fprintf(fp,"%d %f %s",1234,55.60,"hi");
    fclose(fp);
    fp=fopen("file1","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fscanf(fp,"%d %f %s",&num1,&num2,&num3);
    return 0;
}
