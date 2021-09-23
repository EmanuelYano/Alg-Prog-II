#include <stdio.h>
typedef struct{
        int num;
        int numti;
}capivara;
int main(){
    //nome_registro variavel
    int n;
    scanf("%d",&n);
    capivara capi[n];
    for (int i = 0; i < n; i++)
        capi[i].num = i+1;
    
    for (int i = 0; i < n; i++)
        printf("%d ",capi[i].num);
    

    
    return 0;
}
