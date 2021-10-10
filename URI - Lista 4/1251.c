#include <stdio.h>
int main(){
    char dados[100];
    int codAscii;
    scanf("%s", &dados);
    for(int i=0; i<strlen(dados);i++)
        printf("%d ",dados[i]);
    return 0;
}
