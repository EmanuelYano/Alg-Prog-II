#include <stdio.h>

int main()
{
    int n,A=0,E=0,H=0,M=0,X=0;
    char nome[100], raca;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf(" %s %c", &nome[i], &raca);
        if(raca == 'X')
            X += 1;
        else if(raca == 'H')
            H += 1;
        else if(raca == 'E')
            E += 1;
        else if(raca == 'A')
            A += 1;
        else if(raca == 'M')
            M += 1;
    }
    printf("%d Hobbit(s)\n", X);
    printf("%d Humano(s)\n", H);
    printf("%d Elfo(s)\n", E);
    printf("%d Anao(s)\n", A);
    printf("%d Mago(s)\n", M);   
    
    return 0;
}
