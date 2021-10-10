#include <stdio.h>

void troca(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int separa(int p, int r, int num[r]){
    int x,i,j;
    x = num[p];
    i = p - 1;
    j = r + 1;
    while(i<j){
        do{
            j--;
        }while(num[j] > x);//>
        do{
            i++;;
        }while(num[i] < x);//<
        if(i<j)
            troca(&num[i],&num[j]);
        else    
            return j;
    }
}

void orde_rapida(int p, int r, int num[r]){
    int q;
    if(p < r){
        q = separa(p,r,num);
        orde_rapida(p,q,num);
        orde_rapida(q+1,r,num);
    }
}


int main(){
    int n, tmp;
    scanf("%d",&n);
    int num[n], par=0, imp=n-1;
    for(int j=0;j<n;j++){
        scanf("%d",&tmp);
        if(tmp % 2 == 0){
            num[par] = tmp;
            par++;
        }else{
            num[imp] = tmp;
            imp--;
        }
    }      
    orde_rapida(0,(par),num);    
    orde_rapida((par+1),n,num);
    for(int i=0;i<par;i++)
        printf("%d\n", num[i]);
    for(int i=n-1;i>par;i--)
        printf("%d\n", num[i]);
    
    return 0;
}
