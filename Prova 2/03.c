#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
  int chave;
  struct cel *ant;
  struct cel *prox;
} celula;

/* Ordena os n elementos de uma lista duplamente encadeada com cabeça. */
/* void troca(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
} */


void bubblesort_dup_C(int n, celula *lst)
{
    int i;
    for (i = 0; i < n - 1; i++) // durante n - 1 vezes
        for (celula *p=lst->prox; p->prox!=NULL;p=p->prox) // percorre com j o vetor ATÉ O FIM
            if (p->chave > p->prox->chave){
                int aux = p->chave;
                p->chave = p->prox->chave;
                p->prox->chave = aux;
                //troca(p->chave, p->prox->chave);
            }
}


/* Lê uma sequência de números inteiros inserindo-os em uma lista
   duplamente encadeada com cabeça. Então, ordena e escreve a lista. */
int main(void)
{
  int y, n = 0;
  celula *lista, *p;
  p = lista = (celula *) malloc(sizeof (celula));
  lista->ant = NULL;

  while (scanf("%d", &y) == 1) {
    p->prox = (celula *) malloc(sizeof (celula));
    p->prox->ant = p;
    p = p->prox;
    p->chave = y;
    n++;
  }
  p->prox = NULL;

  bubblesort_dup_C(n, lista);
  
  for (p = lista->prox; p != NULL; p = p->prox)
    printf("%d ", p->chave);
  printf("\n");

  return 0;
}
