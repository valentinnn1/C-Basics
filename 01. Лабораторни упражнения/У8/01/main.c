#include <stdio.h>
#include <stdlib.h>

int main()
{
 int count = 7;
 int n;
 int *arr;
 arr = (int *)malloc(count * sizeof(int));
 if(arr==NULL)
  {
  exit(1);
  }
 for(n=0;n<count;n++)
 {
arr[n] = n; // *(arr+n)=n
}
  for(n=0;n<count;n++)
  {
  printf("%d",arr[n]);
 }
printf("\n");
int *narr;
narr=arr;
arr=(int *)malloc(++count*sizeof(int)); //заделяме памет за 8 ел
for(n=0;n<count-1;n++)
{
  arr[n]=narr[n];
}
arr[count-1]=count;
free(narr);
for(n=0;n<count;n++)
{
  printf("%d",arr[n]);
}
printf("\n");

narr=arr;
int x = 3;
for(n=x;n<count;n++)
{
  narr[n-1]=narr[n];
}
arr=(int *)malloc(--count * sizeof(int));
for(n=0;n<count;n++)
{
  arr[n]=narr[n]; //01345678
}
free(narr);
for(n=0;n<count;n++)
{
   printf("%d",arr[n]);

}
free(arr);
}
