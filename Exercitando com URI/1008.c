#include <stdio.h>
int main(){   
    int nF, hT;
    float vH, sal;
    scanf("%d",&nF);
    scanf("%d",&hT);
    scanf("%f",&vH);
    sal = hT * vH;
    printf("NUMBER = %d\n",nF);
    printf("SALARY = U$ %.2f\n",sal);

    return 0;
}