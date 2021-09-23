#include <stdio.h>
/*Escreva uma versão da ordenação por intercalação que 
rearranjeum vetorv[p..r−1]em ordem decrescente*/

void intercala(int p, int q, int r, int v[r]){
    int i,j,k,w[r];
    i=p;
    j=q;
    k=0;
    while(i<q && j<r){
        if(v[i] >= v[j]){
            w[k] = v[i];
            i++;
        }else{
            w[k] = v[j];
            j++;
        }
        k++;
    }
    while(i<q){
        w[k] = v[i];
        i++;
        k++;
    }
    while(j<r){
        w[k] = v[j];
        j++;
        k++;
    }
    for(i=p;i<r;i++)
        v[i] = w[i-p];
}

void ord_Inter(int p, int r, int num[r]){
    int q;
    if(p<r-1){
        q = (p+r) / 2;
        ord_Inter(p,q,num);
        ord_Inter(q,r,num);
        intercala(p,q,r,num);
    }
}

int main(){
    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    int num[n];
    printf("Digite os numeros a serem ordenados: ");
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    ord_Inter(0,n,num);
    printf("Ordem descrescente:\n");
    for(int i=0;i<n;i++)
        printf("%d ",num[i]);
    return 0;
}
