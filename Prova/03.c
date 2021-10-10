#include <stdio.h>

/* Recebe por referência dois inteiros a e b e troca seus valores */
void troca(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

/* Recebe um par de números inteiros p e r, com p <= r e um vetor v[p..r]
   de números inteiros e rearranja seus elementos e devolve um número in-
   teiro j em p..r tal que v[p..j] <= v[j+1..r], utilizando a mediana de
   3 como forma de escolha do pivô.
   
   **ESTA É A VERSÃO PADRÃO DA FUNÇÃO COM ESCOLHA DE v[p] COMO PIVÔ.**
   **MODIFIQUE-A PARA REALIZAR A ESCOLHA DO PIVÔ DESCRITA NO ENUNCIADO.**
*/


int separa(int p, int r, int v[])
{
    int x, i, j;   
    if (r > 2)
        x = (v[p] + v[(p+r)/2] + v[r-1]) / 3;
    else
        x = v[p];
    i = p - 1;
    j = r + 1;
    while (1) {
        do {
            j--;
        } while (v[j] > x);
        do {
            i++;
        } while (v[i] < x);
        if (i < j)
            troca(&v[i], &v[j]);
        else
            return j;
    }
}


/* Recebe um vetor v[p..r] e o rearranja em ordem crescente.
   **NÃO ALTERE NADA NESSA FUNÇÃO** */
void quicksort(int p, int r, int v[])
{
  int q;
  if (p < r) {
    q = separa(p, r, v);
    quicksort(p, q, v);
    quicksort(q+1, r, v);
  }
}

/* Recebe um número inteiro n > 0, e uma sequência
   de n números inteiros e escreve a sequência ordenada.
   **NÃO ALTERE NADA NA MAIN** */
int main(void)
{
  int n;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  quicksort(0, n-1, v);
  for (int i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
  return 0;
}
