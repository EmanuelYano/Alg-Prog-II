#include <stdio.h>
int main(){
    int v,v2;
    scanf("%d",&v);
    v2 = v;
    for (int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,v2);
        v2 *= 2 ;
    }
    return 0;
}