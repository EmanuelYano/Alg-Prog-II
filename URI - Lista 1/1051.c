#include <stdio.h>
int main(){
	float sal, imp;
	scanf("%f", &sal);
	if (sal <= 2000.00){
		printf("Isento");
	}else if (2000.01 <= sal && sal <= 3000.00){
		imp = (sal - 2000.00) * 0.08;
		printf("R$ %.2f", imp);
	}else if (3000.01 <= sal && sal <= 4500.00){
		imp = (1000.00 * 0.08) + ((sal - 3000.00) * 0.18);
		printf("R$ %.2f", imp);
	}else{
		imp = (1000.00 * 0.08 + 1500.00 * 0.18) + ((sal - 4500.00) * 0.28) ;
		printf("R$ %.2f", imp);
	}
	return 0;
}