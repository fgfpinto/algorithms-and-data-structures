#include <stdio.h>
#include <string.h>
 
typedef struct {
    char nome[20];
    int nota;
} CANDIDATO;
 
void placar(CANDIDATO *dados ,CANDIDATO *aux,int numerodealunos){
    int i,k,c;
    
    for(i = 0; i < numerodealunos; i++){
        for(k = 0; k < numerodealunos - 1; k++){
            if(dados[k].nota == dados[k+1].nota){
                if(strcmp(dados[k].nome,dados[k+1].nome) > 0 ){
                    aux[k] = dados[k];
                    dados[k] = dados[k+1];
                    dados[k+1] = aux[k];    
                }
            }
            if(dados[k].nota < dados[k+1].nota){
                aux[k] = dados[k];
                dados[k] = dados[k+1];
                dados[k+1] = aux[k];
            }
        }
    }
    
 
 
    for(i = 0; i < numerodealunos; i++){
        printf("%s %d\n",dados[i].nome,dados[i].nota);
    }
}
 
int main(){
    int numerodealunos;
    int j;
    CANDIDATO dados[100],aux[100]; 
   
    scanf("%d",&numerodealunos);
    
    for(j = 0; j < numerodealunos; j++){
        scanf(" %s %d",&dados[j].nome,&dados[j].nota);
        aux[j] = dados[j];
    }
    placar(dados,aux,numerodealunos);
 
}