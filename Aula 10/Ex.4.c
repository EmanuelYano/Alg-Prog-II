#include <stdio.h>
/* 
    Criar função int *maximo(int n, int v[max])
    Codigo recebe lista de números e devolve o maior usando a função
    maximo(n,v).

    By Emanuel Yano.
*/

int *max(int n, int num[n]){
    int mai = num[0], i=0;
    for(int j=1; j<n; j++)
        if(mai < num[j]){
            i = j;
            mai = num[j];
        }   
            
    return &num[i];
}

int main(){
    int n, *p;
    printf("Digite a quantidade de numeros que ira ser digitado: ");
    scanf("%d", &n);
    int num[n];
    printf("Digite os numeros:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);
    p = max(n,num);
    printf("O maior numero entre eles eh o %d.", *p);
    return 0;
}


