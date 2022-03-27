#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    int min;
    scanf("%d",&h);
    scanf("%d",&min);
    int totalMinutes=h*60+min;
    int finalMinutes=totalMinutes+15;
    int newHour=finalMinutes/60;
    int newMin=finalMinutes%60;
    if(newHour==24){
        newHour=0;
    }
    printf("%d:%02d",newHour,newMin);

    return 0;
}
