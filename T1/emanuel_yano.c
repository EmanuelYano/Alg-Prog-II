/***************************************************
 * *Emanuel Ricardo Yano
 * *Trabalho 1
 * *Professor(a): Diego Rubert
 *
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int posicao_cap;
        int qtd_tp;
        int aux;
}capivara;

void troca(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int separa(int p, int r, capivara capi[]){
    int  i,j,x,y;
    y = capi[p].aux;
    x = capi[p].qtd_tp;
    i = p - 1;
    j = r + 1;
    while (i < j){
        do {
            j--;
        } while (capi[j].qtd_tp < x || (capi[j].qtd_tp == x && capi[j].aux > y));
        do{
            i++;
        } while (capi[i].qtd_tp > x || (capi[i].qtd_tp == x && capi[i].aux < y));
        if (i < j){
            troca(&capi[i].aux, &capi[j].aux);
            troca(&capi[i].qtd_tp, &capi[j].qtd_tp);
        }
    }
    return j;
}

void orde_rapida(int p, int r, capivara capi[]){
    int q;
    if(p < r){
        q = separa(p,r,capi);
        orde_rapida(p,q,capi);
        orde_rapida(q+1,r,capi);
    }

}

void imprimi_vetores(capivara capi[], int n){
    for(int i=0; i<n; i++)
        printf("%d ", capi[i].posicao_cap);
    printf("\n");
    for(int k=0; k<n; k++)
        printf("%d ", capi[k].aux);
    printf("\n");
}

int main(){
    int num_cap,teleporte;
    scanf("%d",&num_cap);
    capivara capi[num_cap];
    for (int i = 0; i < num_cap; i++){
        capi[i].posicao_cap = i+1;
        capi[i].aux = i+1;
        capi[i].qtd_tp = 0;
    } 
    while ( scanf("%d", &teleporte) != EOF) {
        capi[teleporte-1].qtd_tp += 1;
        for(int i=0; i<num_cap; i++)
            if(teleporte == capi[i].posicao_cap && teleporte > 0)
                troca(&capi[i].posicao_cap,&capi[i-1].posicao_cap);
    }
    orde_rapida(0,num_cap-1,capi);
    imprimi_vetores(capi,num_cap);  
    return 0;
}
