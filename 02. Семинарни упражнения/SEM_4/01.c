#include<stdlib.h>
#include<stdio.h>

int main(){

    int n, br = 1, var, max;

    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++) printf("%d\t", arr[i]);
    max = br;

    for (int i = 1; i < n; i++) {
        if (arr[i-1]==arr[i]) br++;
        else { br = 1; }

        if (br>max){
            max = br;
            var = arr[i];
        }
    }

    printf("\n%d --- %d\n", max, var);

    return 0;
}
