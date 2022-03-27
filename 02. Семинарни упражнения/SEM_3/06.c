#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x;
    double y;
    printf("x1=");
    scanf("%lf",&x1);
    printf("y1=");
    scanf("%lf",&y1);
    printf("x2=");
    scanf("%lf",&x2);
    printf("y2=");
    scanf("%f",&y2);
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%lf",&y);
    if((x1>=x || x<=x2)&&(y>=y1 || y<=y2)){
        printf("Inside");
    }else{
        printf("Outside");
    }
    return 0;
}
