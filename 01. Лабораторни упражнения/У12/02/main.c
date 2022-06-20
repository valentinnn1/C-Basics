#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d[6]={1.2,2.3,4.5,3.2,5.7,1.1};
    FILE *fp;
    fp=fopen("newfile","wb");
    if(fp==NULL)
    {
        exit(1);
    }
    if(fwrite(d,sizeof d,1,fp)!=1)
    {
        printf("Error");
        exit(1);
    }
    fclose(fp);
    double value;
    fp=fopen("newfile","rb");
    if(fp==NULL)
    {
        exit(1);
    }
    fseek(fp,2*sizeof(double),SEEK_SET);
    fread(&value,sizeof(double),1,fp);
    printf("%f",value);
    return 0;
}
