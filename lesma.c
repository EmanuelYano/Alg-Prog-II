#include <stdio.h>
int main()
{
    int vel_lim, maior = -9999,qtd_ls, vel[100],hc;
    scanf("%d",&qtd_ls);
    for(int i=0;i<qtd_ls;i++){
        scanf("%d",&vel[i]);
    }
    scanf("%d",&hc);
    if (hc==1){
        vel_lim = 100;
    }else if(hc==2){
        vel_lim = 20;
    }else{
        vel_lim = 10;
    }
    for(int j=0;j<qtd_ls;j++){
        if(vel[j] <= vel_lim){
            if(maior < vel[j]){
                maior = vel[j];
            }
        }
    }
    printf("%d",maior);
    return 0;
}
