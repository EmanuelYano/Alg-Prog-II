#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
int chave;
struct cel *ant;
struct cel *prox;
} celula;

void Bremover(int x, celula *lst){
    celula *p;
    p = lst->prox;
    while (p != NULL && p->chave != x)
    p = p->prox;
        if (p != NULL){
        p->ant->prox = p->prox;
        if (p->prox != NULL)
        p->prox->ant = p->ant;
        free(p);
    }
}

void Binsere(int y, int x, celula *lst){    
    celula *p, *q, *nova;
    nova = (celula *) malloc(sizeof (celula));
    nova->chave = y;
    p = lst;
    q = lst->prox;
    while (q != NULL && q->chave != x){
        p = q;
        q = q->prox;
    }
    nova->ant = p;
    nova->prox = q;
    p->prox = nova;
    if (q != NULL)
        q->ant = nova;
}

void imprime(celula *lst){
    celula *p;
    for (p = lst; p != NULL; p = p->prox)
        printf("%d\n", p->chave);
}


void main(){
    int x,y,z,i;
    celula *lista;
    lista = (celula *) malloc(sizeof (celula));
    lista->ant = NULL;
    lista->prox = NULL;

    printf("Digite qual sera o tamanho da sua lista: ");
    scanf("%d" ,&z);

    while (i<z){
        printf("Insira o numero que sera adicionado a sua lista: ");
        scanf("%d" ,&x);
        Binsere (x,0,lista);
        i++;
    }
    printf("Digite o numero que sera removido da lista: ");
    scanf("%d" ,&y);
    Bremover(y,lista);
    imprime(lista->prox);   
}