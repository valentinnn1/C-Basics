#include<stdlib.h>
#include<stdio.h>

int main(){

    int n, var = 0, k;

    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    int arr[n], b[n];

    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++) printf("%d\t", arr[i]);

    printf("\nk: ");
    scanf("%d", &k);

    for(int i = n-k; i < n; i++) {
        b[var] = arr[i];
        var++;
    }

    for(int i = 0; i < n-k; i++) {
        b[var] = arr[i];
        var++;
    }
    printf("\n");

    for(int i = 0; i < n; i++) printf("%d\t", b[i]);

    return 0;
}
