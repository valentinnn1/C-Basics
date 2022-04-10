#include<stdio.h>
#include<stdlib.h>
int main(){
    int m, n, fr, r, el, br=0;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    printf("input number whose friends you searching for:");
    scanf("%d", &fr);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j]==fr){
                    printf("\n%d e priqtel s: ");
                    for (int k=0; k<m; k++){
                        if (arr[i][k]!=fr){
                            printf("%d, ", arr[i][k]);
                        }
                        br++;
                }
            }
        }
    }

    if (br==0){
        printf("this number haven't any friends! :(");
    }

    return 0;
}
