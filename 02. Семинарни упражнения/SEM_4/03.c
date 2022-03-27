#include<stdlib.h>
#include<stdio.h>

int main(){

    int n, var;

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

    for(int i = 0; i < n/2; i++) {
        var = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = var;
    }
    printf("\n");

    for(int i = 0; i < n; i++) printf("%d\t", arr[i]);

    return 0;
}
