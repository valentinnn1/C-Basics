#include <stdio.h>
#include <stdlib.h>

int main()
{
int count;
printf("Enter size of arr: ");
scanf("%d",&count);
int n;
int *arr;
arr = (int *)malloc(count * sizeof(int));
if(arr==NULL)
{
   exit(1);
}
for(n=0;n<count;n++)
{
   int num;
   scanf("%d",&num);
   arr[n] = num;
}
for(n=0;n<count;n++)
{
   printf("%d",arr[n]);

}
printf("\n");

int newcount;
printf("Enter a new size of arr: ");
scanf("%d",&newcount);
arr=(int *)realloc(arr,newcount*sizeof(int));
if(newcount>count)
{
   for(n=count;n<newcount;n++)
   {
     int num;
     scanf("%d",&num);
     arr[n] = num;
   }
}

for(n=0;n<newcount;n++)
{
   printf("%d",arr[n]);
}
printf("\n");
free(arr);
}
