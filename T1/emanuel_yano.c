#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int posicao_cap;
        int qtd_tp;
}capivara;

void troca(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int separa(int p, int r, capivara capi[]){
    int x,i,j;
    x = capi[p].qtd_tp;
    i = p - 1;
    j = r + 1;
    while(i<j){
        do{
            j--;
        }while(capi[j].qtd_tp > x);
        do{
            i++;;
        }while(capi[i].qtd_tp < x);
        if(i<j){                        
            troca(&capi[i].qtd_tp,&capi[j].qtd_tp);
            troca(&capi[i].posicao_cap,&capi[j].posicao_cap);           
        }else    
            return j;
    }
}

void orde_rapida(int p, int r, capivara capi[]){
    int q;
    //for(int i=0; i<r;i++)    
    //    printf("%d",capi[i].qtd_tp);
    if(p < r){
        q = separa(p,r,capi);
        orde_rapida(p,q,capi);
        orde_rapida(q+1,r,capi);
    }
}

void padawan(capivara capi[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", capi[i].posicao_cap);
        printf("%d ", capi[i].qtd_tp);
        printf("\n");
    }
    
}
int main(){
    int num_cap,teleporte, num_rep=-1, fim_rep;
    scanf("%d",&num_cap);
    capivara capi[num_cap];
    for (int i = 0; i < num_cap; i++){
        capi[i].posicao_cap = i+1;
        capi[i].qtd_tp = 0;
    }  
    while ( teleporte != 0) {
        scanf("%d", &teleporte);
        capi[teleporte-1].qtd_tp += 1; 
    }
    orde_rapida(0,num_cap,capi);
    padawan(capi,num_cap);
    for(int i=0; i<num_cap-2; i++){
        int num_teste = capi[i].qtd_tp;
        if(num_teste == capi[i+1].qtd_tp && num_rep == -1)
            num_rep = i;
        else if(num_rep == capi[i+1].qtd_tp)
            fim_rep = i;        
    }
    printf("\n%d %d", num_rep, fim_rep);
    //orde_rapida(0,num_cap,capi.posicao_cap);
    
    /*for (int i = 0; i < num_cap; i++){
        printf("%d ",proximo[i].posicao_cap);
        printf("%d ",proximo[i].qtd_tp);
        printf("\n");
    }*/
        
    

    
    return 0;
}
