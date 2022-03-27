#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   double p1;
   double p2;
   double p3;
   double p4;
   double p5;
   for(int i=1;i<=n;i++){
    int number;
    scanf("%d",&number);
    if(number<200){
        p1++;
    }else if(number<400){
        p2++;
    }else if(number<600){
        p3++;
    }else if(number<800){
        p4++;
    }else{
        p5++;
    }
   }
    printf("%.2f%%\n",p1/n*100);
    printf("%.2f%%\n",p2/n*100);
    printf("%.2f%%\n",p3/n*100);
    printf("%.2f%%\n",p4/n*100);
    printf("%.2f%%\n",p5/n*100);
    return 0;
}
