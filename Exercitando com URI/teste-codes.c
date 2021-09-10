#include <stdio.h>

int fun(int n) {
  printf("%i ", n);

  if (n ==1)
    return n;
  else if (n % 2 == 0) {
    
      return fun(n/2);}
    else{
      return fun((n * 3) + 1);
  }

}
int main(){
  int n;
  scanf("%i", &n);
  fun(n);
  printf("\n");

  return 0;
}