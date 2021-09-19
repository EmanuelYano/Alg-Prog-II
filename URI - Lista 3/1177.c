#include <stdio.h>
int main(){
    int v,j=0;
    scanf("%d",&v);
    while (j < 1000){
        for(int k=0;k<v;k++){
            if(j<1000)
                printf("N[%d] = %d\n",j,k);
            j+=1;
        }
    }     
    return 0;
}