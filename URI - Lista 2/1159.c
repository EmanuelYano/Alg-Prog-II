#include <stdio.h>
int main(){
	int j=1, i=0, s=0,x;
	while (j != 0){
		scanf("%d", &x);
		j = x;
		if (x % 2 == 1 || x % 2 == -1)
			x += 1;
		while (i < 5){
			s += x;
			x += 2;
			i += 1;
		}
		if (j != 0)
			printf("%d\n",s);
		i = 0; 
		s = 0;
	}
	return 0;
}