#include <stdio.h>
int main()
{
    int km;
    float combu, gm;
    //double gm;
    scanf("%d", &km);
    scanf("%f", &combu);
    gm = km / combu;
    printf("%.3f km/l\n", gm);
    return 0;
}
