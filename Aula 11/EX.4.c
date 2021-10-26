#include <stdio.h>
#include <stdlib.h>

#define max 1000

int main(){
    char fra[max], *p;
    int let;
    p = fra;
    printf("Digite uma frase: ");
    while((let = getchar()) != '\n'){
        *p++ = (char)let;        
    }
    *p++ = '\0';
    int n = strlen(fra);
    char *q = &fra[n-1],temp;
    char *r = &fra[0];
    while(r < q){
        temp = *r;
        *r++ = *q;
        *q-- = temp;
    }       

    printf("Frase em ordem inversa: %s", fra);
    return 0;
}
