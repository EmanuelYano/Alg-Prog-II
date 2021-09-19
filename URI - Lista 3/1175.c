#include <stdio.h>
int main(){
    int num[20], k=0;
    for(int i=0;i<20;i++)
        scanf("%d",&num[i]);
    for(int j=19;j>=0;j--){
        printf("N[%d] = %d\n",k,num[j]);
        k += 1;
    }
    return 0;
}