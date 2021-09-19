#include <stdio.h>

int ciclo(int n){
    int i = 1;
    printf("%d ",n); 
    while(n > 1){        
        if(n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;  
        i += 1;    
        printf("%d ",n);  
    }       
    return i;
}

int cicloR(int n){
    printf("%d ",n);
    if(n == 1){            
        return n;
    }else if(n % 2 == 0){      
        return cicloR(n/2) +1;        
    }else{                
        return cicloR(n * 3 + 1) +1;  
    }
}

int main(){
    int n, k;
    scanf("%d", &n);
    printf("\\----------Sem usar recursao----------/\n");    
    k = ciclo(n);
    printf("\nComprimento do ciclo = %d\n", k); 
    printf("\n");
    printf("\\----------Usando recursao----------/\n");
    k = cicloR(n);
    printf("\nComprimento do ciclo = %d",k);
    return 0;
}