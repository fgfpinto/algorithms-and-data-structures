#include <stdio.h>
 
void bubblesort(int *alturas,int pessoasdacidade){
    int k; int i, aux = 0;
 
    for(i = 0; i < pessoasdacidade; i++){
        for(k = 0; k < (pessoasdacidade - 1); k++){
            if(alturas[k+1] < alturas[k]){
                aux =  alturas[k+1];
                alturas[k+1] = alturas[k];
                alturas[k] = aux;
            }
        }
    }
    for(i = 0; i < pessoasdacidade; i++){
        if(i == (pessoasdacidade - 1)) {
            printf("%d\n",alturas[i]);
        }
        else{
            printf("%d ",alturas[i]);
        }
        
    }
}
 
int main() {
    int casosdeteste,j;
    int pessoasdacidade;
    
    scanf("%d",&casosdeteste);
    while(casosdeteste--){
        scanf("%d",&pessoasdacidade);
        int alturas[100000];
        for(j = 0; j < pessoasdacidade; j++){
            scanf("%d",&alturas[j]);
        }
        bubblesort(alturas,j);
    }
 
    return 0;
}