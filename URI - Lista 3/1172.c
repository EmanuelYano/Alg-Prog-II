#include <stdio.h>
int main(){
    int k=0, x[10];
    for (int i=0; i<10; i++)
        scanf("%d",&x[i]);
    for (int j=0;j<10;j++){
        if (x[j] <= 0)
            x[k] = 1;
        printf("X[%d] = %d\n",k,x[j]);
        k += 1;
    }
    return 0;
}