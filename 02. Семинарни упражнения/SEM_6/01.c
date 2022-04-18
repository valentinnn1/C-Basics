#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guests=0;
    scanf("%d",&guests);
    char current[40];
    int table=0;
    int chair=0;
    int cups=0;
    int dishes=0;
    scanf("%s",current);
    while(strcmp(current,"PARTY!"))
    {
        if((strcmp(current,"Table"))==0)
        {
            table++;
        }
        else if((strcmp(current,"Chair"))==0)
        {
            chair++;
        }
        else if((strcmp(current,"Cups"))==0)
        {
            cups++;
        }
        else if((strcmp(current,"Dishes"))==0)
        {
            dishes++;
        }
        fflush(stdin);
        scanf("%s",current);
    }
    double price=0.0;
    price=table*42+chair*13.99+cups*5.98+dishes*21.02;
    printf("%.2f\n",price);
    if(table<guests/8.0)
    {
        printf("%d Tables\n",guests/8-table+1);
    }
    if(guests>chair)
    {
        printf("%d Chairs\n",guests-chair);
    }
    if(cups<guests/6.0)
    {
        printf("%d Cups\n",guests/6-cups+1);
    }
    if(dishes<guests/6.0)
    {
        printf("%d Dishes\n",guests/6-dishes+1);
    }
    return 0;
}
