#include <stdio.h>
#include <stdlib.h>

void mat_ID(int n, int mat[n][n]){
    int *p;
    for(p = &mat[0][0]; p <= &mat[n-1][n-1]; p++)
        *p = 0;
    for(p = &mat[0][0]; p <= &mat[n-1][n-1]; p=p+(n+1))
        *p = 1;
}

int main(){
    int n;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    int matriz[n][n];
    mat_ID(n, matriz);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
