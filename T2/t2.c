#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OP 3
#define MAX_LINE 128

typedef struct instr {
    char op[MAX_OP+1]; /* Operação */
    char reg1[MAX_OP+1]; /* Registrador do operando 1, se registrador */
    int val1; /* Valor do operando 1, se inteiro */
    char reg2[MAX_OP+1]; /* Registrador do operando 2, se houver */
    struct instr *prev; /* Anterior */
    struct instr *next; /* Próximo */
} instruction;

void mov(int *x,int y){
    *x = y ;
}
void mult(int *x,int y){
    
    *x * y ;
}
void div(int *x,int y){
    *x / y ;
}

int main(int argc, char const *argv[])
{
    int y,x=0;
    scanf("%d" ,&x);
    scanf("%d" ,&y);
    printf("%d ", x);
    mov(&x,y);
    printf("%d", x);
    return 0;
}


//add,sub,mod

/* void add(int x, int *acc){
    *acc += x;
}

int sub(int x, int *acc){
    *acc -= x;
}

int mod(int x, int *acc){
    *acc = *acc % x;
} */


