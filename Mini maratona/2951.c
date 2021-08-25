#include <stdio.h>
int main(){
    int n, g, ru=0, n2;
    scanf("%d %d", &n,&g);
    int pr[n];
    char r[n];
    for(int i=0;i<n;i++){
        scanf(" %c %d", &r[i],&pr[i]);
    }
    scanf("%d", &n2);
    char rr[n2];
    for(int j=0;j<n2;j++){
        scanf(" %c", &rr[j]);
    }
    for(int k=0;k<n2;k++){
        for(int l=0;l<n;l++){
            if(rr[k] == r[l] && rr[k] != '\0'){
                ru += pr[l];
            }
        }
    }
    printf("%d\n", ru);
    if(ru >= g){
        printf("You shall pass!\n");
    }else{
        printf("My precioooous\n");
    }
    
    return 0;
}
