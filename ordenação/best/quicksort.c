#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void quicksort(int *vetor,int esquerda, int direita){
	int j,i,x,y;

	j = direita;
	i = esquerda;
	x = vetor[(esquerda+direita)/2];

	while(i <= j){
		while(vetor[i] < x && i < direita){
			i++;
		}
		while(vetor[j] > x && j > esquerda){
			j--;
		}
		if(i <= j){
			y = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = y;
			i++;
			j--;
		}
	}
	if(j > esquerda){
		quicksort(vetor,esquerda,j);
	}
	if(i < direita){
		quicksort(vetor,i,direita);
	}	
}


int main(){
	int j, vetor[MAX];

	for(j = 0; j < MAX; j++){
		scanf("%d",&vetor[j]);
	}
	quicksort(vetor,0,MAX - 1);

	for(j = 0; j < MAX; j++){
		printf("%d\n",vetor[j]);
	}

	return 0;
}