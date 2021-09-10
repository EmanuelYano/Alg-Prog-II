#include <stdio.h>

int main(){ 
    const double pi = 3.14159;  
    double a, r;
    scanf("%lf",&r);
    a = pi * (r * r);
    printf("A=%.4lf\n",a);
    return 0;
}