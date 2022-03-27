#include <stdio.h>
#include <stdlib.h>
float Area(float);

int main()
{
     float r,area;
     scanf("%f",&r);
     area=Area(r);
     printf("%f",area);
     return 0;
}

float Area(float radius)
{
     return radius*radius*3,14159;
}
