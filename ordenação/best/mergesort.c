#include <stdio.h>
#include <stdlib.h>

#define MAX 11

int vetorb[10];	

void merging(int *vetor,int low, int mid, int high){
	int l1,l2,j;
	for(l1 = low, l2 = mid+1, j = low; l1 <= mid && l2 <= high; j++){
		if(vetor[l1] <= vetor[l2]){
			vetorb[j] = vetor[l1++]; 
		}
		else{
			vetorb[j] = vetor[l2++];
		}
	}
	while(l1 <= mid){
		vetorb[j++] = vetor[l1++];
	}
	while(l2 <= high){
		vetorb[j++] = vetor[l2++];	
	}
	for(j = low; j <= high; j++){
		vetor[j] = vetorb[j];
	}

}

void sort(int *vetor,int low, int high){
	int mid;

	if(low < high){
		mid = (low + high) / 2;
		sort(vetor,low, mid);
		sort(vetor,mid+1, high);
		merging(vetor,low, mid,high);
	} else {
		return;
	}
}



int main(){
	int j,vetor[MAX];
	int contadora;

	for(j = 0; j < MAX; j++){
		scanf("%d",&vetor[j]);
	}
	printf("vetor antes do sort\n");
	
	for(j = 0; j < MAX; j++){
		printf("%d\n",vetor[j]);
	}
	sort(vetor,0,MAX);

	printf("vetor depois do sort\n");
	
	for(j = 0; j < MAX; j++){
		printf("%d\n",vetor[j]);
	}
	return 0;
}