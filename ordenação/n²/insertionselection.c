#include <stdio.h>
 
int selection(int *vetorselection, int numerodelinhas){
    int i,j,min,aux,flag = 0;
    int contadorselect = 0,operasoesselect = 0;
 
    for(i = 0; i < (numerodelinhas - 1); i++){
        min = i;
        for(j = (i+1); j < numerodelinhas; j++){
            if(vetorselection[j] < vetorselection[min]){
                min = j;
            }
        }
        if(vetorselection[i] != vetorselection[min]){
            aux = vetorselection[i];
            vetorselection[i] = vetorselection[min];
            vetorselection[min] = aux;
            contadorselect++;
        }
    }
    operasoesselect = contadorselect;
 
    return operasoesselect;
}
 
int insertion(int *vetorinsert, int numerodelinhas){
    int i = 0, j = 1, aux = 0;
    int contadorinsert = 0,operasoesinsert = 0;
 
    while(j < numerodelinhas) {
        aux = vetorinsert[j];
        i = j - 1;
        while((i >= 0) && (vetorinsert[i] > aux)){
            vetorinsert[i + 1] = vetorinsert[i];
            i = i - 1;
            contadorinsert++;
        }
        vetorinsert[i + 1] = aux;
        j = j + 1;
        contadorinsert++;
    }
    operasoesinsert = contadorinsert;
 
    return operasoesinsert;
}
 
int main(){
    int numerodelinhas,j;
    int diferensa;
    int insert = 0, select = 0;
    int vetorinsert[100],vetorselection[100];
 
    scanf("%d",&numerodelinhas);
    
    for(j = 0; j < numerodelinhas;j ++){
        scanf("%d",&vetorinsert[j]);
        vetorselection[j] = vetorinsert[j];
    }
    select = selection(vetorselection,numerodelinhas);
    insert = insertion(vetorinsert,numerodelinhas);
 
    diferensa = insert - select;
    if(diferensa < 0){
        diferensa = diferensa*(-1);
    }
    printf("%d\n",diferensa);
 
    return 0;
}