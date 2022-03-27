#include <stdio.h>
#include <stdlib.h>

float Average(int arr[],int size);

float Average(int arr[],int size)
{
    int i;
    float sum=0;
    float average=0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    average=sum/size;
    return average;
}

int main()
{
    int a[]={3,5,10,2,-2,-24};
    float result;
    result=Average(a,6);
    printf("%.2f",result);
    return 0;
}
