#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, m, max, min, r, k, r1, k1, temp;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    int arr[n][m];
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d][%d]:", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    max=arr[0][0];

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j]>max){
                max=arr[i][j];
                r=i;
                k=j;
            }
        }
    }
    printf("max element is %d on %d line, %d column\n", max, r, k);

    min=arr[0][0];

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j]<min){
                min=arr[i][j];
                r1=i;
                k1=j;
            }
        }
    }
    printf("min element is %d on %d line, %d column\n", min, r1, k1);

    for (int j=0; j<m; j++){
        temp=arr[r][j];
        arr[r][j]=arr[r1][j];
        arr[r1][j]=temp;
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
