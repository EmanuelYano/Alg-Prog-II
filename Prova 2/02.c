#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
  int chave;
  struct cel *prox;
} celula;


/* Recebe um ponteiro *lst para uma lista linear encadeada
   com cabeca e devolve uma nova lista contendo apenas os
   elementos pares da lista recebida */
/*  void insere_C(int x, celula *p){
    celula *nova;

    nova = (celula *)malloc(sizeof(celula));
    nova->chave = x;
    nova->prox = p->prox;
    p->prox = nova;
}  */

celula *lista_pares(celula *lst)
{
    celula *lpares = (celula *)malloc(sizeof(celula));
    lpares->prox = NULL;   
    celula *z = lpares; 
    
    for(celula *p=lst->prox;p!=NULL;p=p->prox)
        if(p->chave % 2 == 0 || p->chave == 0){           
            z->prox=(celula *)malloc(sizeof(celula));           
            z = z->prox;
            z->chave = p->chave;           
        }
    z->prox = NULL;
    return lpares;
}

int main(void)
{
  int y;
  celula *lst, *p, *pares;

  p = lst = (celula *) malloc(sizeof(celula));
  while (scanf("%d", &y) == 1) {
    p->prox = (celula *) malloc(sizeof (celula));
    p = p->prox;
    p->chave = y;
  }
  p->prox = NULL;
  
  pares = lista_pares(lst);

  for (p = pares->prox; p != NULL; p = p->prox)
    printf("%d ", p->chave);
  printf("\n");
  
  return 0;
}
