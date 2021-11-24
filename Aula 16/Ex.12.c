#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
int chave;
struct cel *prox;
} celula;

void insere_C(int x, celula *p){
    celula *nova;

    nova = (celula *)malloc(sizeof(celula));
    nova->chave = x;
    nova->prox = p->prox;
    p->prox = nova;
}

int busca_C(int x, celula *lst){
    celula *p;
    p = lst->prox;
    while(p!=NULL && p->chave != x)
        p = p->prox;
    if(p == NULL)
        return 1;
    else   
        return 0;
}

celula* uniao(celula *l1, celula *l2){
    celula *u = (celula *)malloc(sizeof(celula));
    u->prox = NULL;
    for(celula *p=l1->prox;p!=NULL;p=p->prox)
        insere_C(p->chave,u);
    for(celula *p=l2->prox;p!=NULL;p=p->prox)
        if(busca_C(p->chave,u))
            insere_C(p->chave,u);
    return u;
}

void escreve(celula *lst){ 
    celula *p;
    for(p = lst;p != NULL; p = p->prox)
        printf("%d ", p->chave);
}


void main(){
    celula *lista1, *lista2;

    lista1 = (celula *) malloc(sizeof (celula));
    lista1->prox = NULL;

    lista2 = (celula *) malloc(sizeof (celula));    
    lista2->prox = NULL;

    for(int i=0; i<10; i++)
        insere_C(i,lista1);
        
    for(int i=5; i<15; i++)
        insere_C(i,lista2);

    celula *u = uniao(lista1,lista2);
    escreve(u->prox); 

    return 0;  
}