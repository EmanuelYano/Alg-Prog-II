#include <stdio.h>
int main(){
	int s=0,x,y,x1,y1;
	scanf("%d %d",&x, &y);
	if (x < y){ 
		x1 = y;
		y1 = x;
		x = x1;
		y = y1;
	}
	while (y <= x){
		if (y % 13 != 0)
			s += y;		
		y += 1;
	}
	printf("%d\n",s);
	return 0;
}