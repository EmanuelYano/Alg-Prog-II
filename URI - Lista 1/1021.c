#include <stdio.h>
#include <math.h>
int main(){
    float val;
    int cem, cinq, vin, dez, cin, dois, hum, cinqC, vin5C, dezC, cinC, humC; 
    scanf("%f",&val);
    //notas
    cem = val / 100;
    val = val - (cem * 100);
    cinq = val / 50;
    val = val - (cinq * 50);
    vin = val / 20;
    val = val -(vin * 20);
    dez = val / 10;
    val = val - (dez * 10);
    cin = val / 5;
    val = val - (cin * 5);
    dois = val / 2;
    val = val - (dois * 2);

    //moedas
    hum = val / 1;
    val = val - (hum * 1);
    val *= 100;
    cinqC = val / 50;
    val -= cinqC * 50;
    vin5C = val / 25;
    val -= vin5C * 25;
    dezC = val / 10;
    val -= dezC * 10;
    cinC = val / 5;
    val -= cinC * 5;
    val = round(val);
    humC = val / 1;
    val -= humC * 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinq);
    printf("%d nota(s) de R$ 20.00\n",vin);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cin);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",hum);
    printf("%d moeda(s) de R$ 0.50\n",cinqC);
    printf("%d moeda(s) de R$ 0.25\n",vin5C);
    printf("%d moeda(s) de R$ 0.10\n",dezC);
    printf("%d moeda(s) de R$ 0.05\n",cinC);
    printf("%d moeda(s) de R$ 0.01\n",humC);
    return 0;
}