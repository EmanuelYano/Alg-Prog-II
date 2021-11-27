#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
  int chave;
  struct cel *ant;
  struct cel *prox;
} celula;


/* Recebe por um ponteiro *lst para uma lista linear duplamente
   encadeada com cabeca, imprimindo-a ao de tras para frente */
void imprime_inverso_dup_C(celula *lst)
{
    celula *p,*aux;
    for(p=lst;p!= NULL;p = p->prox)
        aux = p;
    for(p=aux; p!=lst; p=p->ant)
        printf("%d ", p->chave);
}

/* Lê uma sequencia de n numeros inteiros inserindo-os em uma
   lista duplamente encadeada e entao a imprime ao inverso */
int main(void)
{
  int y;
  celula *lst, *p;
  p = lst = (celula *) malloc(sizeof (celula));
  lst->ant = NULL;

  while (scanf("%d", &y) == 1) {
    p->prox = (celula *) malloc(sizeof (celula));
    p->prox->ant = p;
    p = p->prox;
    p->chave = y;
  }
  p->prox = NULL;

  imprime_inverso_dup_C(lst);

  return 0;
}

