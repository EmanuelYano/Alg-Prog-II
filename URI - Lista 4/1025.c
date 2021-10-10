#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int busca(int n, int num[n], int x){
    int k;
    for(k = 0; k <n && num[k] != x; k++)
        ;
    return k;
}


int main(){
    int n,q,x,j=1;
    while (n != 0 && q != 0){    
        scanf("%d %d",&n, &q);
        if(n != 0 && q != 0){
            int num_mar[n];
            for (int i = 0; i < n; i++) 
                scanf("%d", &num_mar[i]);
            qsort(num_mar, n, sizeof(int), comp);
            for (int k = 0; k < q; k++){ 
                scanf("%d", &x);
                int rBusca = busca(n,num_mar,x);
                if(k == 0)
                    printf("CASE# %d:\n", j);
                if(rBusca >= n)
                    printf("%d not found\n",x);
                else
                    printf("%d found at %d\n", x, rBusca+1);
            }
        }
        j++;    
    }
    
    return 0;
}

