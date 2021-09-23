#include <stdio.h>
int main(){
    int n, cod=1,i=0,max=1;    
    int codL[max];
    while(cod != 0000){
        scanf("%d",&n);
        max += n;
        printf("%d\n",n);
        printf("%d\n",max);
        scanf("%d",&cod);
        codL[i] = cod;
        printf("%d\n",codL[i]);
        i++;
    }
    /*for (int i = 0; i < max; i++)
    {
        printf("%d\n",codL[i]);
    }*/
    
           
    return 0;
}
