#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, m, br=0;
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
        for(int j=1; j<m; j++){
            if (arr[i][j-1]>=arr[i][j]){
                printf("v %d-iq red ima namalqvashti elementi! Matricata e nevqrna!", i+1);
                br++;
                return 0;
            }
        }
        if (br!=0){
            return 0;
        }
    }

    br=0;

        for (int i=0; i<m; i++){
        for(int j=1; j<n; j++){
            if (arr[j-1][i]<=arr[j][i]){
                printf("v %d-ata kolona ima narasvashti elementi! Matricata e nevqrna!", i+1);
                br++;
                return 0;
            }
        }
        if (br!=0){
            return 0;
        }
    }

    printf("Matricata e OK! elementite na vsichki redove sa narastvashti, elementite na vsichki koloni sa namalqvashti!");

    return 0;
}
