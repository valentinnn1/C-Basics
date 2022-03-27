#include <stdio.h>
#include <stdlib.h>

int main()
{
   float w,h;

   scanf("%f%f", &w, &h);
   printf("Mesta: %.0f" ,((w * 100) / 120) * (((h * 100) - 100) / 70) - 3);

   return 0;
}

