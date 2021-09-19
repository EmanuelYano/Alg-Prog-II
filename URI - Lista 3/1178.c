#include <stdio.h>
int main(){
    int k=0;
    double num;    
    scanf("%lf",&num);    
    for(int j=0;j<100;j++){         
        printf("N[%d] = %.4lf\n",k,num); 
        num /= 2;        
        k++;
    }
    return 0;
}