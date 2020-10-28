#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void print_array(int *vetor,int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d\n",vetor[i]);
	}
}

int FindLargestNum(int *vetor, int size){
	int i;
	int largestNum = -1;

	for(i = 0; i < size; i++){
		if(vetor[i] > largestNum){
			largestNum = vetor[i];
		}
	}	
	return largestNum;
}

void radix_sort(int *vetor, int size){
	int i;
	int semisorted[size];
	int significantDigit = 1;
	int largestNum = FindLargestNum(vetor,size);

	while(largestNum / significantDigit > 0){
		//print_array(vetor,size);
		
		int bucket[10] = { 0 };

		for(i = 0; i < size; i++){
			bucket[(vetor[i] / significantDigit) % 10]++;
		}
		for(i = 1; i < 10; i++){
			bucket[i] += bucket[i-1];
		}
		for(i = size - 1; i >= 0; i--){
			semisorted[--bucket[(vetor[i] / significantDigit) % 10]] = vetor[i];
		}
		for(i = 0; i < size; i++){
			vetor[i] = semisorted[i];
		}
		significantDigit *= 10;
		//print_array(bucket, 10);

	}

}

int main(){
	int j,vetor[MAX];
	
	for(j = 0; j < MAX; j++){
		scanf("%d",&vetor[j]);
	}

	radix_sort(vetor,MAX);

	print_array(vetor,MAX);


	return 0;
}