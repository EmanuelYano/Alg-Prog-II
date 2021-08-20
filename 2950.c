#include <stdio.h>
int main(){
    int dist, d1, d2;
    float icm;
    scanf("%d %d %d", &dist, &d1, &d2);
    icm = (float)dist / (d1 + d2);
    printf("%.2f\n",icm);
    return 0;
}
