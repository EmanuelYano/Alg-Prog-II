#include <stdio.h>
int main(){
    float l[100];
    for (int i=0;i<100;i++){
        scanf("%f",&l[i]);
        if (l[i] <= 10)
            printf("A[%d] = %.1f\n",i,l[i]);
    }
    return 0;
}