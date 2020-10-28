#include <stdio.h>
 
int bubblesort(int *elementosdovetor,int tamanhodovetor, int l, int k){
    int i,n,aux = 0;
    int soma = 0;
    int x,y;
    for(i = 0; i < tamanhodovetor; i++){
        for(n = 0; n < (tamanhodovetor - 1); n++){
            if(elementosdovetor[n+1] < elementosdovetor[n]){
                aux = elementosdovetor[n+1];
                elementosdovetor[n+1] = elementosdovetor[n];
                elementosdovetor[n] = aux;
            }
        }   
    }
   
    soma = elementosdovetor[l-1] + elementosdovetor[k-1];
    
    return soma;
}
 
int main(){
    int tamanhodovetor;
    int elementosdovetor[100];
    int l,k;
    int j,resultado = 0;
    
    scanf("%d",&tamanhodovetor);
    for(j = 0; j < tamanhodovetor; j++){
        scanf("%d",&elementosdovetor[j]);
    }
    scanf("%d %d",&l,&k);
    resultado = bubblesort(elementosdovetor,j,l,k);
    printf("%d\n",resultado);
 
    return 0;
}