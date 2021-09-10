#include <stdio.h>
int main(){
    int soma=0 ,l=0, a, aa, parada=1;
    while (parada){
        scanf("%d", &a);
        if (a > 0 && l > 0){
            for(int k=0;k<a;k++){
                soma += aa + k;
            } 
            parada = 0;           
        }else if(l == 0){
            aa = a;
        }
        l += 1;
    }
    printf("%d\n",soma);
    return 0;
}