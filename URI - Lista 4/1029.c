#include <stdio.h>
#include <stdlib.h>

int fiboR(int num, int call[]){
    call[0] += 1;
    if (num == 0)
        return 0;
    else if(num == 1){        
        return 1;
    }else{        
        return fiboR(num-1,call) + fiboR(num-2,call);
    }
}


int main(){
    int nCasos, num, a, calls[1];
    scanf("%d",&nCasos);
    while(nCasos > 0){
        calls[0] = 0;
        scanf("%d", &num);
        a = fiboR(num,calls);
        printf("fib(%d) = %d calls = %d\n",num,calls[0]-1,a);
        nCasos--;        
    }
    return 0;
}
