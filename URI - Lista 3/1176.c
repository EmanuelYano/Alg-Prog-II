#include <stdio.h>

void fib(int num){
	int j=0;
	long long int fi=1,f2i=1,f3i;
	if(num == 1 || num == 2)
		printf("Fib(%d) = 1\n",num);
	else if(num == 0)
		printf("Fib(%d) = 0\n",num);
	else{
		while (j < num-2){
			f3i = f2i;
			f2i += fi;
			fi = f3i;
			j++;
		}
		printf("Fib(%d) = %lld\n",num,f2i);
	}
}

int main(){
	int k, num;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&num);
		fib(num);
	}
	return 0;
}