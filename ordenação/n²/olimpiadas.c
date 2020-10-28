#include <stdio.h>
 
typedef struct horas { 
    int ouro;
    int prata;
    int bronze;
    int numerodopais;
} MEDALHAS;
 
void quemganhou(MEDALHAS *vetordemedalhas, int j){
    int k,n;
    MEDALHAS aux;
    aux.ouro = 0;
    aux.prata = 0;
    aux.bronze = 0;
 
    for(n = 0; n < j; n++){
        for(k = 0; k < (j - 1);k++){
            if(vetordemedalhas[k+1].ouro > vetordemedalhas[k].ouro){
                aux = vetordemedalhas[k+1];
                vetordemedalhas[k+1] = vetordemedalhas[k];
                vetordemedalhas[k] = aux;
            }
            if(vetordemedalhas[k+1].ouro == vetordemedalhas[k].ouro){
                if(vetordemedalhas[k+1].prata > vetordemedalhas[k].prata){
                    aux = vetordemedalhas[k+1];
                    vetordemedalhas[k+1] = vetordemedalhas[k];
                    vetordemedalhas[k] = aux;
                }
                if(vetordemedalhas[k+1].prata == vetordemedalhas[k].prata){
                    if(vetordemedalhas[k+1].bronze > vetordemedalhas[k].bronze){
                        aux = vetordemedalhas[k+1];
                        vetordemedalhas[k+1] = vetordemedalhas[k];
                        vetordemedalhas[k] = aux;
                    }
                    if(vetordemedalhas[k+1].bronze == vetordemedalhas[k].bronze){
                        if(vetordemedalhas[k+1].numerodopais < vetordemedalhas[k].numerodopais){
                            aux = vetordemedalhas[k+1];
                            vetordemedalhas[k+1] = vetordemedalhas[k];
                            vetordemedalhas[k] = aux;
                        }
                    }
                }
            }
        }
    }
    for(k = 0; k < j; k++){
        if(k == (j-1)){
            printf("%d\n",vetordemedalhas[k].numerodopais);
        }
        else{
            printf("%d ",vetordemedalhas[k].numerodopais);
        }
    }
}
 
 
int main(){
    int npaises,mmodalidades;
    int modalidades;
    int i,j,x = 1;
    int our = 0,prat = 0,bronz = 0;
    scanf("%d %d",&npaises,&mmodalidades);
    
    MEDALHAS vetordemedalhas[100];
    for(j = 0; j < npaises; j++){
        vetordemedalhas[j].ouro = 0;
        vetordemedalhas[j].prata = 0;
        vetordemedalhas[j].bronze = 0;
        vetordemedalhas[j].numerodopais = x;
        x++;
    }
    
    for(j = 0; j < mmodalidades; j++){
        scanf("%d %d %d",&our,&prat,&bronz);
        vetordemedalhas[our-1].ouro++;
        vetordemedalhas[prat-1].prata++;
        vetordemedalhas[bronz-1].bronze++;    
    }
    
    quemganhou(vetordemedalhas,npaises);
 
    return 0;
}