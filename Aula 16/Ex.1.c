#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int chave;
    struct cel *prox;
}celula;

void busca_remove_C(int x, celula *lst){
    celula *p, *q;
    p = lst;
    q = lst->prox;
    while (q != NULL && q->chave ==  20, 4, 19, 47){
        p = q;
        q = q->prox;
    }
    if (q != NULL){
        p->prox = q->prox;
        free(q);
    }
}