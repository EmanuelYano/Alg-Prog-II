#include <stdio.h>

int remover(int n, int num[n], int k){
    while(k<n){
        num[k] = num[k+1];
        k++;
    }
    return k-1;
}

/*int remover_R(int n, int num[n], int k){
    if(k >= n-1)
        return 0;
    else
        return (k + 1) + remover_R(n,num,k);
}*/

int main(){
    int n,k;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    int num[n];
    printf("Digite os numeros\n");
    for(int l=0;l<n;l++)
        scanf("%d",&num[l]);
    printf("Digite o indice que deseja eliminar: ");
    scanf("%d",&k);
    int aux = remover(n,num,k);
    //int aux2 = remover_R(n,num,k);
    printf("Sobrou %d numeros..\n",aux);
    //printf("%d\n",aux2);
    return 0;
}
