#include <stdio.h>

void troca(int *x,int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int troca_suc_R(int n, int num[n]){
    if (n==1)
        return num[n];
    else{        
        for(int i = 0; i < n-1; i++)
            if (num[i] > num[i+1])
                troca(&num[i], &num[i+1]);
        return troca_suc_R(n-1,num);
    }
}

int main(){
    int n;
    printf("Digite o tamanho do vetor para ordenar: ");
    scanf("%d",&n);
    int num[n];
    printf("Digite os numeros: \n");
    for(int i=0;i<n;i++)
        scanf("%d", &num[i]);
    troca_suc_R(n,num);
    for(int i=0;i<n;i++)
        printf("%d ", num[i]);
    return 0;
}


