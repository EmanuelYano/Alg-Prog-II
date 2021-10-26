#include <stdio.h>
#include <stdlib.h>

int compara(int *x, int *y){
    return (*(int*)x - *(int*)y);
}

int main(){
    int N, n;
    scanf("%d",&N);
    for(int k=0; k<N; k++){
        int m=0;
        scanf("%d",&n);
        int nota[n], notaT[n];
        for(int i=0; i<n; i++){
            scanf("%d", &nota[i]);
            notaT[i] = nota[i];
        }
        qsort(nota,n,sizeof(int),compara);
        
        for(int j=0; j<n; j++){
            if(notaT[n-1-j] == nota[j])
                m += 1;
        }
        
        printf("%d\n", m);
    }
    return 0;
}
