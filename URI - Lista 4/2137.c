#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y){
    return *(int*)x - *(int*)y;
}

int main(){
    int n;    
    int codL[9999];
    while(scanf("%d",&n) != EOF){                
        for(int i=0; i<n;i++)
            scanf("%d",&codL[i]);        
        qsort(codL,n,sizeof(int),comp);
        for (int i = 0; i < n; i++){  
            printf("%04d\n",codL[i]);
            /* if(i != (n-1))
                print("\n"); */
        }
    } 
    return 0;
}
