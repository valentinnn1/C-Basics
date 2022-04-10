#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, m;
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

    for (int i=0; i<n; i++){
        for(int j=1; j<m-1; j++){
            if (arr[i][j-1]+arr[i][j+1]==arr[i][j]){
                printf("stoynostta na %d-iq element na %d-iq red e sbora na okolnite elementi po red: %d\n", j+1, i+1, arr[i][j]);
            }
        }
    }

    for (int i=1; i<n-1; i++){
        for(int j=1; j<m-1; j++){
            if (arr[i-1][j-1]+arr[i+1][j+1]==arr[i][j]){
                printf("stoynostta na %d-iq element na %d-iq red e sbora na okolnite elementi po glaven diagonal: %d\n", j+1, i+1, arr[i][j]);
            }
        }
    }

    for (int i=1; i<n-1; i++){
        for(int j=1; j<m-1; j++){
            if (arr[i-1][j+1]+arr[i+1][j-1]==arr[i][j]){
                printf("stoynostta na %d-iq element na %d-iq red e sbora na okolnite elementi po vtorostepenen diagonal: %d\n", j+1, i+1, arr[i][j]);
            }
        }
    }

    for (int i=0; i<m; i++){
        for(int j=1; j<n-1; j++){
            if (arr[j-1][i]+arr[j+1][i]==arr[j][i]){
                printf("stoynostta na %d-iq element na %d-iq red e sbora na okolnite elementi po kolona: %d\n", i+1, j+1, arr[j][i]);
            }
        }
    }

    return 0;
}
