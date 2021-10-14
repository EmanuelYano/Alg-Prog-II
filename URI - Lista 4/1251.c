#include <stdio.h>
#include <string.h>

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void selectionsort(int n, int v[], int v2[]){
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i+1; j < n; j++)
            if (v[j] < v[min])
                min = j;
        troca(&v[i], &v[min]);
        if(v[i] == v[min]){
            if(v2[i] < v2[min])               
                troca(&v2[min], &v2[i]);
        }else
            troca(&v2[i], &v2[min]);
        //v2[min] = i;
    }
}

int main(){
    char dados[1001];
    
    while(scanf("%s", dados) != EOF){
        int codAscii[128] = {0}, cont[128] = {0};
        
        for(int i=32;i<128;i++)
            codAscii[i] = i;        
        for(int j=0; j<strlen(dados); j++){
            int cod = dados[j];         
            cont[cod] += 1;
        }
        selectionsort(128, cont, codAscii);
        for(int i=32; i<128;i++){
            //if(codAscii[i] != 0)
            if(cont[i] != 0){
                printf("%d ",codAscii[i]);
                printf("%d\n",cont[i]);
            }
        }
        
    
        // daqui pra baixo
        memset(dados,' ',1001);
    }
    return 0;
}
