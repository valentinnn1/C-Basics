#include <stdio.h>
#include <stdlib.h>
typedef struct PhoneBook
{
    char name[20];
    int code;
    char number[10];
}PhoneBook;

int main()
{
    char answer[4];
    PhoneBook p1;
    FILE *fp;
    fp=fopen("filename","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    do{
        printf("Enter name: ");
        scanf("%s",p1.name);
        printf("Enter code: ");
        scanf("%d",&p1.code);
        printf("Enter number: ");
        scanf("%s",p1.number);
        fprintf(fp,"%s %d %s",p1.name,p1.code,p1.number);
        printf("Continue? yes/no : ");
        scanf("%s",answer);
        if(strcmp(answer,"yes"))
        {
            break;
        }
    } while(1);
    fclose(fp);
    fp=fopen("filename","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    PhoneBook *pn;
    pn=(PhoneBook *)calloc(10,sizeof(PhoneBook));
    int i=0;
    while(!feof(fp))
    {
        fscanf(fp,"%s %d %s".pn[i].name,&pn[i].code,pn[i].number);
        i++;
    }
    fclose(fp);
    for()
        pn

    return 0;
}
