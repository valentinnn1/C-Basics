#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;

    scanf("%c", &a);
    printf("\n");

    printf("    %c\n", a);
    printf("   %c %c\n", a, a);
    printf("  %c   %c\n", a, a);
    printf(" %c     %c\n", a, a);
    printf("%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a);

    printf("\n");

    printf("%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a);
    printf(" %c     %c\n", a, a);
    printf("  %c   %c\n", a, a);
    printf("   %c %c\n", a, a);
    printf("    %c\n", a);

    return 0;
}
