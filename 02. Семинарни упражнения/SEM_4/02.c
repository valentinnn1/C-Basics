#include<stdlib.h>
#include<stdio.h>

int main(){

    int n;

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

    for(int i = 2; i < n; i++){
        if (arr[i-2] < arr[i-1] && arr[i-1] > arr[i]) printf("\nTrue!");
        else { printf("\nFalse!"); }

        i += 3;
    }

    return 0;
}
