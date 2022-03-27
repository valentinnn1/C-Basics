#include <stdio.h>
#include <stdlib.h>

void Biger(int a, int b){
    if (a>b){
        printf("nay golqmoto: a=%d\n",a);
    }
    else if (b>a){
        printf("nay golqmoto: b=%d\n", b);
    }
    else{
        printf("a=b");
    }
}

void Smallest(int a, int b){
    if (a<b){
        printf("nay malkoto: a=%d\n",a);
    }
    else if (b<a){
        printf("nay malkoto: b=%d\n", b);
    }
    else{
        printf("a=b");
    }
}

int main()
{
    int a,b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    Biger(a, b);
    Smallest(a, b);
    return 0;
}
