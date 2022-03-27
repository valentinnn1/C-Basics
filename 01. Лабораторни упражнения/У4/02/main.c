#include <stdio.h>
#include <stdlib.h>
float AreaSq(float);
float Rectangle(float, float);
float Triangle(float, float);
float Circle(float);

int main()
{
     printf("Enter a number 1-4: ");
     int x;
     scanf("%d",&x);
     float a,b,r,area;
     switch(x)
     {
     case 1: printf("a= "); scanf("%f",&a); printf("%.1f",AreaSq(a));
break;
     case 2: printf("a= "); scanf("%f",&a); printf("b= ");
scanf("%f",&b); printf("%.1f",Rectangle(a,b)); break;
     case 3: printf("a= "); scanf("%f",&a); printf("b= ");
scanf("%f",&b); printf("%.1f",Triangle(a,b)); break;
     case 4: printf("r= "); scanf("%f",&r); printf("%.1f",Circle(r));
break;
     default: printf("Error");
     }
     return 0;
}

float AreaSq(float a)
{
     return a*a;
}

float Rectangle(float a,float b)
{
     return a*b;
}

float Triangle(float a,float b)
{
     return a*b/2;
}

float Circle(float r)
{
     return 3.1415*r*r;
}
