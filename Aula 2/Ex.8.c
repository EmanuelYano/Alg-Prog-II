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
    printf("\nComprimento do ciclo = %d\n", i);    
}

int cicloR(int n, int k){
    k += 1;
    printf("%d ",n);
    if(n == 1){         
        printf("\nComprimento do ciclo = %d",k);
        return n;
    }else if(n % 2 == 0){      
        return cicloR(n/2,k);        
    }else{                
        return cicloR(n * 3 + 1,k);  
    }
}

int main(){
    int n, k=0;
    scanf("%d", &n);
    printf("\\----------Sem usar recursao----------/\n");    
    ciclo(n);
    printf("\n");
    printf("\\----------Usando recursao----------/\n");
    cicloR(n,k);
    return 0;
}