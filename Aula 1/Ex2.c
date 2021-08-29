#include <stdio.h>
typedef struct{
        int hh;
        int mm;
        int ss;
    }horas, decorrido;

int main(){
    horas horarios[2];
    decorrido tempoDecorrido;
    tempoDecorrido.ss = 0;
    tempoDecorrido.mm = 0;
    tempoDecorrido.hh = 0;
    char lx;
    int k=0;
    for(int i=0;i<2;i++)
         scanf("%d%c%d%c%d", &horarios[i].hh, &lx, &horarios[i].mm, &lx, &horarios[i].ss);
    //decorrido = horas;
    //primeiro horario com horas, minutos e segundos maiores
    if(horarios[k].ss > horarios[k+1].ss)
        tempoDecorrido.ss = (60 - horarios[k].ss) + horarios[k+1].ss;    
  
    if(horarios[k].mm > horarios[k+1].mm)
        tempoDecorrido.mm = (60 - horarios[k].mm) + horarios[k+1].mm;

    if(horarios[k].hh > horarios[k+1].hh)
        tempoDecorrido.hh = (60 - horarios[k].hh) + horarios[k+1].hh;

    
    //primeiro horario com horas, minutos e segundos menores
    if(horarios[k].ss <= horarios[k+1].ss)
        tempoDecorrido.ss = horarios[k+1].ss - horarios[k].ss;

    if(horarios[k].mm <= horarios[k+1].mm)
        tempoDecorrido.mm = horarios[k+1].mm - horarios[k].mm;

    if(horarios[k].hh <= horarios[k+1].hh)
        tempoDecorrido.hh = horarios[k+1].hh - horarios[k].hh;
     
    //propriedade das horas
    if(tempoDecorrido.mm != 0 && tempoDecorrido.ss != 0)
        tempoDecorrido.hh--;
    if(horarios[k].hh < horarios[k+1].hh && tempoDecorrido.hh == 0 && horarios[k].mm < horarios[k+1].mm)
        tempoDecorrido.hh++;
    
    printf("%02d:%02d:%02d\n", tempoDecorrido.hh, tempoDecorrido.mm, tempoDecorrido.ss);  
    return 0;
}