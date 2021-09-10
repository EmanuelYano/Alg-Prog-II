#include <stdio.h>
int main(){
    int i=0,cob=0,c=0,r=0,s=0,n,qt;
    char tp;    
    float C,R,S;
    scanf("%d",&n);
    while (i < n){
        scanf("%d %c",&qt,&tp);
        cob += qt;
        if (tp == 'C')
            c += qt;
        else if (tp == 'R')
            r += qt;
        else
            s += qt;   
        i += 1;
    }
    printf("Total: %d cobaias\n", cob);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    C = (float)c*100/cob;
    R = (float)r*100/cob;
    S = (float)s*100/cob;
    printf("Percentual de coelhos: %.2f %%\n", C);
    printf("Percentual de ratos: %.2f %%\n", R);
    printf("Percentual de sapos: %.2f %%\n", S);


    return 0;
}