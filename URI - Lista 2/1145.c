#include <stdio.h>
int main(){
    int x,y, i=1;
    scanf("%d %d",&x,&y);
    while (i <= y){
        if (i % x == 0)
            printf("%d\n",i);     
        else 
            printf("%d ",i);
        i += 1;
    }
    return 0;
}