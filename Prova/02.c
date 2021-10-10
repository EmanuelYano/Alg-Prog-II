#include <stdio.h>

// Escreva aqui sua função. Você pode alterar o nome se quiser, e nesse caso
// alterar a chamada da função na main. Caso ache necessário, você pode criar
// funções adicionais para auxiliar na resolução do problema
void troca(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y  = z;
}
void ordena_vetor(int n, int v[])
{
    int i, j, min, digito, digito2;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i+1; j < n; j++)            
            if (v[j] > 10)
                digito = v[j] % 10;
            else
                digito = v[j];
            if (v[min] > 10)
                digito2 = v[min] % 10;
            else
                digito2 = v[min];
            if(digito < digito2)
                min = j;
            else if(digito == digito2)
                if(v[j] > v[min])
                    min = j;
            else    
                min = j;


                

        troca(&v[i], &v[min]);
    }
    
}


// Altere na função main apenas o nome da função chamada, 
// conforme você definir acima, NÃO altere outras coisas
int main(void)
{
    // O valor n é dado em uma linha
    int n;
    scanf("%d", &n);
    // A seguir, são dados os n elementos do vetor
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    
    // Altere apenas a linha abaixo, usando o nome da função que você escreveu
    ordena_vetor(n, v);
    
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    
    return 0;
}