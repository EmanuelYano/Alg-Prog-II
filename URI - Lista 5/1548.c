#include <stdio.h>

void compara(int *x, int *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n, m;
    scanf("%d",&n);
    int nota[n];
    for(int i=0; i<n; i++)
        scanf("%d", nota[i]);
    qsort(n,nota,sizeof(int),compara);
    return 0;
}
