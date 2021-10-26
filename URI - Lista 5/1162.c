#include <stdio.h>

int ordena(int num[], int tam){

	int i, j, k = 0, aux;
	while (tam--){
		for (i = 0, j = 1; i < tam; i++, j++)
			if (num[i] > num[j]){	
				k++;
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
	}
	return k;
}

int main (){
	int casos, n;
	scanf("%u", &casos);
	while (casos--){
		scanf("%u", &n);
		int num[n];
		for (int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		printf("Optimal train swapping takes %u swaps.\n", ordena(num, n));
	}
	return 0;
}