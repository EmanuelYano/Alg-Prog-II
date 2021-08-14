#include <stdio.h>

int str_tam(char palavra[]){
    int tam = 0;
    while(palavra[tam] != '\0'){
        tam += 1;
    }
    return tam;
}

void copiar_cebolinha(char palavra[]){
    int tam,vORf=0;
    char letra;
    tam = str_tam(palavra);
    for(int i=0; i<tam; i++){
        letra = palavra[i];
        if(letra == 'R'){
            vORf += 1;
            if(vORf == 1){
                letra = 'L';
                printf("%c", letra);
            }           
        }else{    
            vORf = 0;
            printf("%c", letra);
        }
    }
}

int main()
{
    char palavra[20];
    scanf("%s", palavra);
    copiar_cebolinha(palavra);
    return 0;
}
