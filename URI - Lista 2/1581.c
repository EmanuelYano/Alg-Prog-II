#include <stdio.h>
#include <string.h>
int main(){
	int i = 0, nCasos, nPessoas, j=0, k=0;
	char idioma[100], idioma2[100];
	scanf("%d",&nCasos);
	while (i < nCasos){
		j = 0; 
		k = 0;
		memset(idioma2,0,strlen(idioma2));
		scanf("%d",&nPessoas);
		while (j < nPessoas){
			scanf("%s", idioma);
			if (j == 0){
				for (int z=0; z<strlen(idioma); z++)
					idioma2[z] = idioma[z];
				
			}
			if (strcmp(idioma, idioma2) == 0)
				k += 1;
			else
				k -= 1;			
			j += 1;
		}
		if (k == nPessoas)
			printf("%s\n",idioma);
		else
			printf("ingles\n");		
		i += 1;
	}
	return 0;
}