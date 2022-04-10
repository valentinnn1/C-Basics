#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int num;

    printf("n = ");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num);
        arr[i]=num;
    }
    
    for(int j=0; j<n; j++)
    {
        printf("%d\t",arr[j]);
    }
    int count=0;
    for(int k=0; k<n; k++)
    {

        if(arr[k] > arr[k+1])
        {
            arr1[k]=arr[k];
            count +=1;
            break;
        }
        else
        {
            arr1[k]=arr[k];
        }
        count +=1;
    }
    printf("\n");
    for(int j=0; j<count; j++)
    {
        printf("%d\t",arr1[j]);
    }


    return 0;
}
