#include <stdio.h>
int main(){   
    float n1,n2;
    double media;
    scanf("%f",&n1);
    scanf("%f",&n2);
    media = (n1 * 3.5 + n2 * 7.5) /(11);
    printf("MEDIA = %.5lf\n", media);
    return 0;
}