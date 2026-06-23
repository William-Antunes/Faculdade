#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tamanho 10


void aleatorio(float array[], int sz){
    for(int i = 0; i < sz; i++){
        array[i] = rand() % 101;
    }
}

void imprime(float array[], int sz){
    for(int i = 0; i < sz; i++){
        printf("%.2f ", array[i]);
    }
}

void calcula(float array[], int sz, float *media, float *maior, float *menor){
        int soma = 0;

        for(int i = 0; i < sz; i++){
            if(array[i] > *maior)
                *maior = array[i];
            if(array[i] < *menor)
                *menor = array[i];
            
            soma += array[i];
        }

        *media = soma / sz;
}


int main(){
    float media, maior = 0, menor = 200, nums[10];
    int sz = tamanho;

    srand(time(NULL));
    aleatorio(nums, sz);
    imprime(nums, sz);
    calcula(nums, sz, &media, &maior, &menor);

    printf("O maior valor do vetor é %.2f\nO menor valor do vetor é %.2f\nE a media é %.2f", maior, menor, media);

    return 0;

}