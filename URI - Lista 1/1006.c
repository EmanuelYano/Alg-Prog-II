#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,m;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    m = (a * 2 + b * 3 + c * 5) / 10;
    printf("MEDIA = %.1f\n", m);
    return 0;
}
