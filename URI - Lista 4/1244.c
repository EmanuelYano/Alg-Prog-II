#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

void ordena(int n, char palavras[MAX][MAX+1]){
   int i, j;
   char x[50];
   for (i = 1; i < n; i++) {
      strcpy(x,palavras[i]);
      for (j = i - 1; j >= 0 && strlen(palavras[j]) < strlen(x); j--)
         strcpy(palavras[j+1], palavras[j]);
      strcpy(palavras[j+1], x);
   }
}

int main(void) {
   int n, cont2;
   char palavras[MAX][MAX+1], c;
   scanf("%d%*c",&n);
   while(n > 0){
      c=' ';
      int cont = 0;
      while(c != '\n')
         scanf("%[^ \n]%c", palavras[cont++], &c);
      ordena(cont,palavras);
      n--; 
      for(int i=0; i<cont; i++)
         if(i == (cont - 1))
            printf("%s",palavras[i]);
         else
            printf("%s ",palavras[i]);
      printf("\n");
   }
  
   return 0;
}


