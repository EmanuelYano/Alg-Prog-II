#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y) {
   if (*x > *y) {
      return 1;
   } else if (*x < *y) {
      return -1;
   } else {
      return 0;
   }
}

int main(){
    int n;
    char frase[2600];
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%s",frase);
        qsort();
    }
    return 0;
}
