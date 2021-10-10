#include <stdio.h>

int conta_dig_imp(int n){
    if(n < 0)
        n = n * (-1);
    if(n == 0)
        return 0;
    else if(n % 2 == 1)
        return 1 + conta_dig_imp(n/10);
    else
        return conta_dig_imp(n/10);
}
int main(){
    int n;
    scanf("%d", &n);
    int j = conta_dig_imp(n);
    printf("%d",j);
    return 0;
}
