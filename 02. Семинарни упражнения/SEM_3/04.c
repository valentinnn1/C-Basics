#include <stdio.h>
#include <stdlib.h>

int main()
{
    int points;
    scanf("%d",&points);
    double bonusPoints=0;
    double totalPoints;
    if(points<=100){
        bonusPoints+=5;
    }else if(points<1000){
        bonusPoints+=0.2*points;
    }else if(points>1000){
        bonusPoints+=0.10*points;
    }
    if(points%2==0){
        bonusPoints+=1;
    }else if(points%10==5){
        bonusPoints+=2;
    }
    totalPoints=points+bonusPoints;
    printf("%.1f\n",bonusPoints);
    printf("%.1f\n",totalPoints);
    return 0;
}
