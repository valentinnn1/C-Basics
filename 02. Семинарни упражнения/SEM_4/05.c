#include<stdlib.h>
#include<stdio.h>

int main(){

    int n, var, k, p = 0;

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

    for(int i = n; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                var = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = var;
            }
        }
    }
    printf("\n");

    for(int i = 0; i < n; i++) printf("%d\t", arr[i]);

    for (int i = 0; i < n-1; i++) {
        if (arr[i] != arr[i+1]) {
            b[p] = arr[i];
            p++;
        }

        if(i == n-2){
            b[p] = arr[n-1];
            p++;
        }
    }
    printf("\n");

    for(int i = 0; i < p; i++) printf("%d\t", b[i]);
    printf("\n%d-iq po golemina elelment: %d", k, b[k-1]);

    return 0;
}
