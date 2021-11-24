#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
    int chave;
    struct cel *prox;
}celula;

void apaga(celula *list){
    celula *lixo;
    while (list != NULL){
        lixo = list;
        list = -> prox;
        free (lixo);

    }

