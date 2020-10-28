#include <stdio.h>


void isort(int* a, unsigned int size);


int main() {
    
    int n, i, maior, flag, k, j;
    
    scanf("%d", &n);
    
    int vet[n];
    
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
    
    sort(vet, n);
    
    maior = vet[n-1];

    int primos[maior];
    primos[0] = 2;
    flag = 3;
    j = 1;
    
    while(j < maior){
        
        k = 2;
    
        while(k <= flag/2){        
            if(flag % k == 0){
                break;
            }
            k++;   
        }
        if(k > flag/2){
            primos[j] = flag;
            j++;
        }
        flag ++;    
    }
    
    
    for(i=0; i<n; i++){
        printf("%d ", primos[vet[i] - 1]);
    }
    
    printf("\n");
    return 0;
}

void sort(int* a, unsigned int size){
    
    int i,i2,i3;
    int t;

    for(i = 1; i < size; ++i){
        i3 = i;

        for(i2 = i-1; i2 >= 0; --i2){
            if(a[i2] < a[i3]) break;
            t = a[i2];
            a[i2] = a[i3];
            a[i3] = t;
            --i3;
        }
    }
}
