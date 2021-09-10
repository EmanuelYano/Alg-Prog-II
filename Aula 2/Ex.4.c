#include <stdio.h>

float soma(int n, float v[n]){  
    if (n == 0)
        return v[0];
    else
        return v[n] + soma(n-1, v);
}

int main(){
    int n;
    float s;
    scanf("%i", &n);    
    float v[n];
    for(int i=0; i < n; i++)
        scanf("%f", &v[i]); 

    s = soma(n, v);
    printf("Soma = %.2f\n", s);
}
