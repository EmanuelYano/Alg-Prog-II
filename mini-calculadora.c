#include <stdio.h>
int main()
{
    int qtd_op;
    float n1,n2,r;
    char op;
    scanf("%d",&qtd_op);
    for (int i=0; i<qtd_op; i++){
        scanf("%f %c %f", &n1, &op, &n2);
        if(op=='+'){
            r = n1 + n2;
            printf("%.1f\n",r);
        }else if(op=='-'){
            r = n1 - n2;
            printf("%.1f\n",r);
        }else if(op=='/'){
            r = n1 / n2;
            printf("%.1f\n",r);
        }else if (op=='*'){
            r = n1 * n2;
            printf("%.1f\n",r);
        }else{
            printf("Erro: operador não reconhecido\n");
        }
    }
    return 0;
}
