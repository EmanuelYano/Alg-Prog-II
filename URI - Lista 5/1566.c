#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define MAX 235

void main(){
	_Bool f;
	unsigned num;
	unsigned i, C, tmp;
	int NUM[MAX] = { 0 };
	scanf("%u", &C);
	while (C--){
		scanf("%u", &num);
		for (i = 0; i < num; ++i){
			scanf("%u", &tmp);
			NUM[tmp]++;
		}
		f = false;
		for (int j = 20; j <= 230; ++i){
			if (NUM[j] > 1){
				while (NUM[j]--){
					if (!f){
						printf("%u", j); 
                        f = true;
                    }else
						printf(" %u", j);
				}
			}
			else if (NUM[i] == 1)
				if (!f){
					printf("%u", i);
                     f = true;
                }else
					printf(" %u", i);
		}
		printf("\n");
		memset(NUM, 0, sizeof(NUM));
	}
    return 0;
}