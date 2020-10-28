#include <stdio.h>
 
void bubblesort(int *impares,int *pares,int j, int i) {
    int n,k,aux = 0;
    for(n = 0; n < j; n++){
        for(k = 0; k < (j - 1); k++ ){
            if(pares[k + 1] < pares[k]){
                aux = pares[k+1];
                pares[k+1] = pares[k];
                pares[k] = aux;
            }
        }
    }
    for(n = 0; n < i; n++){
        for(k = 0; k < (i-1); k++){
            if(impares[k+1] < impares[k]){
                aux = impares[k+1];
                impares[k+1] = impares[k];
                impares[k] = aux;
            }
        }
    }
 
   for(n = 0; n < j; n++){
       printf("%d\n",pares[n]);
   }
   for(n = (i-1); n >= 0; n--){
       printf("%d\n",impares[n]);
   }
}
 
int main(){
    int tamanhocaixa;
    int numerosdacaixa,j = 0,i = 0;
    int impares[100],pares[100];
 
    scanf("%d",&tamanhocaixa);
        while(tamanhocaixa--){        
            scanf("%d",&numerosdacaixa);
       
            if(numerosdacaixa%2 == 0){
                pares[j] = numerosdacaixa;
                j++;
            }
            if(numerosdacaixa%2 != 0){
                impares[i] = numerosdacaixa;
                i++;
            }
        }
        bubblesort(impares,pares,j,i);
 
    return 0;
}