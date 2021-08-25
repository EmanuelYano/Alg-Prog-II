#include <stdio.h>
int main()
{
    int x,y,nm13=0;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x < y){
        for(int i=x; i<=y;i++){
            if(i % 13 != 0){
                nm13 += i;
            }
        }
    }else{
        for(int i=y; i<=x;i++){
            if(i % 13 != 0){
            nm13 += i;
            }
        }
    }
    printf("%d\n", nm13);
    return 0;
}
