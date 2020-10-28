#include <stdio.h>
 
 
typedef struct horas{
    int hora;
    int min;
 
} HORAS;
 
 
int bubblesort(HORAS *horario,int tamanhodovetor,int maquinasdecafe){
    int i,k;
    HORAS aux,aux2;
    for(i = 0; i < tamanhodovetor; i++){
        for(k = 0; k < (tamanhodovetor - 1); k++){
            if(horario[k].hora == horario[k+1].hora){
                if(horario[k].min >= horario[k+1].min){
                    aux2 = horario[k];
                    horario[k] = horario[k+1];
                    horario[k+1] = aux2;
                }
            }
            if(horario[k + 1].hora < horario[k].hora){
                aux = horario[k];
                horario[k] = horario[k+1];
                horario[k+1] = aux;
            
            }
            
             
        }
    }
    int sequencia=1;
    for(k = 0; k < tamanhodovetor-1; k++){
        sequencia =1;
        while(horario[k].hora == horario[k+1].hora && horario[k].min == horario[k+1].min){
            sequencia++;
            k++;
        }
        if(sequencia>maquinasdecafe){
            maquinasdecafe = sequencia;
        }
    }
    return maquinasdecafe;
}
 
int main(){
    int casosdeteste;
    int tamanhodovetor;
    HORAS horario[10000];
    int j,i,maquinasdecafe = 0;
    
 
    scanf("%d",&casosdeteste);
    while(casosdeteste--){
        scanf("%d",&tamanhodovetor);
            for(j = 0; j < tamanhodovetor; j++){
                scanf("%d %d",&horario[j].hora,&horario[j].min);
            }    
        maquinasdecafe = bubblesort(horario,tamanhodovetor,maquinasdecafe);
        printf("%d\n",maquinasdecafe);
        
    }
    return 0;
}