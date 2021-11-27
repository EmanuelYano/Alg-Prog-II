#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OP 3
#define MAX_LINE 128
/*add 1

acc += 1;



*/
typedef struct instr {
    char op[MAX_OP+1]; /* Operação */
    char reg1[MAX_OP+1]; /* Registrador do operando 1, se registrador */
    int val1; /* Valor do operando 1, se inteiro */
    char reg2[MAX_OP+1]; /* Registrador do operando 2, se houver */
    struct instr *prev; /* Anterior */
    struct instr *next; /* Próximo */
} instruction;

void add(int x, int *acc){
    *acc += x;
}

void sub(int x, int *acc){
    *acc -= x;
}

void mod(int x, int *acc){
    *acc = *acc % x;
}

void mov(int x,int *y){
    *y = x ;
}
void mult(int x,int *acc){
    
    *acc *= x ;
}
void div(int x,int *acc){
    *acc /= x ;
}
void prt(int x){
    printf("%d\n", x);
}
void jmp(int x, int pc){
    pc += x; 
}
void jeq(int x, int pc, int acc){
    int i;
    if (acc == 0){
        pc += x;
    }else{
        i = 0;
    }
}
void jlt(int x, int pc, int acc){
    int i;
    if (acc < 0){
        pc += x;
    }else{
        i = 0;
    }
}
void jgt(int x, int pc, int acc){
    int i;
    if (acc > 0){
        pc += x;
    }else{
        i = 0;
    }
}

int main(int argc, char const *argv[])
{
    int acc,pc;
    instruction *lst;
    lst = (instruction *) malloc(sizeof (instruction));
    lst->prox = NULL;
    while(scanf()!= EOF){
/* 
move    4        acc 
op      va      resgis2

add   1
op   valor

mult  5
op   valor

prt acc

*/
    }
    int y,x=0;
    scanf("%d" ,&x);
    scanf("%d" ,&y);
    printf("%d ", x);
    mov(&x,y);
    printf("%d", x);
    return 0;
}


