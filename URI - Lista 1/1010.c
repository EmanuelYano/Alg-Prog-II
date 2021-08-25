#include <stdio.h>
int main()
{
    int cod, qtd;
    float val, tot=0;
    for(int i=0;i<2;i++){
        scanf("%d %d %f", &cod, &qtd, &val);
        tot = tot + (val * qtd);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", tot); 
    return 0;
}
