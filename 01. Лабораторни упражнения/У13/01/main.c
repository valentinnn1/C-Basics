#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("name1","wb");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    int n;
    scanf("%d",&n);

    fwrite(&n,sizeof(n),1,fp);
    int k;
    for(int i=0; i<n;i++)
    {

        scanf("%d",&k);
        fwrite(&k,sizeof(k),1,fp);
    }
    fclose(fp);

    fp=fopen("name1","rb");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fseek(fp,sizeof(int),SEEK_SET);

    int even=0;
    int odd=0;

    for(int j=0;j<n;j++)
    {
        fread(&k,sizeof(int),1,fp);
        if(k%2==0)
        {
            even++;
        }
        else if(k%2!=0)
        {
            odd++;
        }
    }
    fclose(fp);
    printf("Even numbers are: %d\n",even);
    printf("Odd numbers are: %d\n",odd);
    return 0;
}
