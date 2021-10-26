#include <stdio.h>
#include <stdlib.h>

int orde_dupla(int *num, int n, int *cont){
	if (n > 1){
		orde_dupla(num, n / 2, cont);
		orde_dupla(num + (n / 2), (n + 1) / 2, cont);
		int i = 0, k;
		int j = n / 2;
		int b[n];
		for (k = 0; k < n; ++k){
			if (i < n / 2 && j < n){
				if (num[i] < num[j])
					b[k] = num[i], ++i;
				else if (num[j] < num[i])
					b[k] = num[j], ++j, *cont += (n / 2) - i;
				else
					b[k] = num[i], ++i;				
			}
			else if (i < n / 2)
				b[k] = num[i], ++i;
			else
				b[k] = num[j], ++j;
		}
		memcpy(num, b, sizeof(int) * n);	
	}
}
int main(){
    int n, cont;
	while(scanf("%d", &n), n){
	    int num[n];
	    for(int i = 0; i < n; ++i)
			scanf("%d", &num[i]);
		cont = 0;
	    orde_dupla(num, n, &cont);
	    printf("%s\n", cont & 1 ? "Marcelo" : "Carlos");
	}
    
    return 0;
}