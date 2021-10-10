#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n;    
    int codL[9999], ultCod=1;
    while(ultCod != 0000){
        scanf("%d",&n);
        if(ultCod != 0000){
            for(int i=0; i<n;i++)
                scanf("%d",&codL[i]);
        }
        ultCod = codL[n-1];
        qsort(codL,n,sizeof(int),comp);
        for (int i = 0; i < n; i++)  
            printf("%04d\n",codL[i]);
    } 
    return 0;
}
