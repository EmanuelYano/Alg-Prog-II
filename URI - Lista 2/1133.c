#include <stdio.h>
int main(){
	int x,y,x1,y1;
	scanf("%d%d",&x,&y);
	if (x < y){
		x1 = y;
		y1 = x;
		x = x1;
		y = y1;
	}
	y += 1;
	while (y < x){
		if (y % 5 == 2 || y % 5 == 3)
			printf("%d\n",y);
		y += 1;
	}
	return 0;
}