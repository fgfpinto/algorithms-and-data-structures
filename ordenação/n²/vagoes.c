#include <stdio.h>
 
int insertion(int *permuta, int numerodevagoes){
       int i,k;
       int tmp,cont = 0;
       for(i = 1; i < numerodevagoes; i++){
           tmp = permuta[i];
           k = i - 1;
           while(k >= 0 && permuta[k] > tmp){
               permuta[k + 1] = permuta[k];
               k--;
               cont++;
           }
           permuta[k + 1] = tmp;
           
       }
 
 
       return cont;
}
 
int main(){
    int j,trocas = 0;
    int casosdeteste;
    int numerodevagoes;
    int permuta[1000];
    scanf("%d",&casosdeteste);
    
    while(casosdeteste--){
        scanf("%d",&numerodevagoes);
        for(j = 0; j < numerodevagoes; j++){
            scanf("%d",&permuta[j]);
            
        }
        trocas =  insertion(permuta,numerodevagoes);
 
 
        printf("Numero ideal de trocas e de %d troca(s).\n",trocas);
 
    }
    return 0;
}