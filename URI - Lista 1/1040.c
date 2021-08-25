#include <stdio.h>
int main(){
    float n1, n2, n3, n4, m, m2, ne;
    scanf("%f %f %f %f", &n1,&n2,&n3,&n4);
    m = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    if (m < 5.0){
        printf("Media: %.1f\n", m);
        printf("Aluno reprovado.\n");
    }else if (m > 7.0){
        printf("Media: %.1f\n", m);
        printf("Aluno aprovado.\n");
    }else{
        scanf("%f", &ne);
        printf("Media: %.1f\n",m);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",ne);
        m2 = (ne + m) /2;
        if (m2 > 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        } 
        printf("Media final: %.1f\n",m2);
    }        
    return 0;
}