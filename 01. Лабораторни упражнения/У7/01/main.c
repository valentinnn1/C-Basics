#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, row, column, sum=0;
    scanf("%d", &n);
    int square[n][n];
    for(row=0; row<n; row++)
    {
        for(column=0; column<n; column++)
        {
            scanf("%d", &square[row][column]);
        }
}
    printf("masiv: \n");

    for(row=0; row<n; row++)
    {
        for(column=0; column<n; column++)
        {
            printf("%d", square[row][column]);
            if(row>column)
                sum+=square[row][column];
        }
        printf("\n");
        }
        printf("\n Glaven diagonal: ");
        for(row=0; row<n; row++){
            printf("\n %d", square[row][row]);
            }
        printf("\n Vtorostepenen diagonal: ");
        for(row=0; row<n; row++)
        {
            printf("\n %d", square[row][n-row-1]);
        }
        printf("\n sumata pod glavniq diagonal: ");
        printf("\n %d", sum);

            return 0;
}
