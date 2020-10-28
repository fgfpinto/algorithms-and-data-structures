#include <stdio.h>
 
 
 
void quemganhouacorrida(int mnumerodevoltas,unsigned long long int *tempo,int numerodecompetidores){
    int k,i,p;
    unsigned long long int menor;
    int aux,posisao;
    
   // INICIO DO SORT
    menor = tempo[0];
    posisao = 0;
    for(i = 0; i < numerodecompetidores; i++){
        if(tempo[i] < menor){
            menor = tempo[i];
            posisao = i;
        }  
       // printf("%d %d\n",tempo[i],i);
    }
    printf("%d\n",posisao+1);
    //printf("%d\n",tempo[posisao]);
   
   
//fim do SORT
 
}   
 
int main(){
    int numerodecompetidores, mnumerodevoltas;
    int cont,j,l;
    unsigned long long int soma;
    
    cont = 1;
    
    scanf("%d %d",&numerodecompetidores,&mnumerodevoltas);
    unsigned long long int tempo;
    unsigned long long int temp[numerodecompetidores];
    for(j = 0; j < numerodecompetidores; j++){
        soma = 0;
        for(l = 0; l < mnumerodevoltas; l++){
            scanf("%llu",&tempo);
            soma += tempo;
 
        }
        temp[j] = soma;
        //printf("%d %d\n",temp[j],j);
    }
    quemganhouacorrida(mnumerodevoltas,temp,numerodecompetidores);
    return 0;
}