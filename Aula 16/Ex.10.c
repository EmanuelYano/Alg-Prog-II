#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
int chave;
struct cel *prox;
} celula;

void escreve(celula *lst){ 
    celula *p;
    for(p = lst;p != NULL; p = p->prox)
        printf("%d ", p->chave);
}

void insere_C(int x, celula *p){
    celula *nova;

    nova = (celula *)malloc(sizeof(celula));
    nova->chave = x;
    nova->prox = p->prox;
    p->prox = nova;
}

void concatena(celula *lst1, celula *lst2){
    for(celula *p=lst2->prox;p!=NULL;p=p->prox)
        insere_C(p->chave,lst1);
}

int main(){
    celula *l1, *l2;
    l1 = (celula *) malloc(sizeof (celula));
    l1->prox = NULL;
    l2 = (celula *) malloc(sizeof(celula));
    l2->prox = NULL;

    for(int i=0; i<10; i++)
        insere_C(i,l1);        
    for(int i=0; i<50; i++)
        insere_C(i,l2);
    
    concatena(l2,l1);
    escreve(l2->prox);
    
    return 0;
}