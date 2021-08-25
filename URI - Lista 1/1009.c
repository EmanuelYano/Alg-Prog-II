#include <stdio.h>
int main(){
    double sal, tv, salT, com;
    char nome[100];
   
    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &tv);

    com = tv * 0.15;
    salT = com + sal;
    printf("TOTAL = R$ %.2lf", salT);
    return 0;
}
