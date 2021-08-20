#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,r1,r2;
    int neg=-1;
    scanf("%f %f %f", &a,&b,&c);
    d = (b * b) - (4 * a * c);
    if (d < 0 || a == 0){
        printf("Impossivel calcular\n");
    }else{
        r1 = ((b * neg) + sqrt(d)) / (2 * a);
        r2 = ((b * neg) - sqrt(d)) / (2 * a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    return 0;
}
