#include <stdio.h>
#include <stdlib.h>
int add(int arr[], int n){
    int x;
    printf("\nEnter the number you want to add: ");
    scanf("%d", &x);
    int arr1[n+1];
    for(int i=0; i<n; i++){
        arr1[i]= arr[i];
    }
    arr1[n]=x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr1[j]>arr1[j+1]){
                int temp = arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n+1; i++){
        printf("%d ", arr1[i]);
    }
    return arr1;

}
void delete(int arr[], int n){
    int x;
    printf("Enter the number you want to delete: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            continue;
        } else{
            printf("%d ", arr[i]);
        }
    }
}

int small(int arr[], int n){
    int small, i=0;
    small=arr[i];
    for(i=0; i<n; i++){
        if(small>arr[i]){
            small = arr[i];
        }
        i++;
    }

    return small;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The numbers are: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    int operation;
    printf("\nWhich operation(1-add; 2-delete; 3-smallest number): ");
    scanf("%d", &operation);
    if(operation==1){
        int newarr;
    newarr = add(arr, n);
    }
    if(operation==2){
        delete(arr, n);
    }
    if(operation==3){
        int findsmall;
    findsmall = small(arr, n);
    printf("\nThe smallest element is: %d", findsmall);
    }

    return 0;
}
