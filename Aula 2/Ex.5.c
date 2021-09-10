#include <stdio.h>
int soma(int n){
    if(n < 10)
        return n;
    else
        return n%10 + soma(n/10);
}

int main(){
    int num, numSeg, somD;
    scanf("%d", &num);
    numSeg = num;
    if(num < 0)        
        num = num * (-1);
    somD = soma(num);
    printf("Soma dos digitos de %d = %d", numSeg,somD);
    return 0;
}
