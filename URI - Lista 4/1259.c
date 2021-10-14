#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y){
    return (*(int*)x - *(int*)y);
} 

int main(){
    int n, tmp;
    scanf("%d",&n);
    int numP[n], numI[n], par=0, imp=0;
    for(int j=0;j<n;j++){
        scanf("%d",&tmp);
        if(tmp % 2 == 0){
            numP[par] = tmp;
            par++;
        }else{
            numI[imp] = tmp;
            imp++;
        }
    }      
    qsort(numP,par,sizeof(int), comp);
    qsort(numI,imp,sizeof(int), comp);
    for(int i=0;i<par;i++)
        printf("%d\n", numP[i]);
    for(int i=imp-1;i>=0;i--)
        printf("%d\n", numI[i]); 
    
    return 0;
}
