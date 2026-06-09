#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

void preencheVetor(int *vet, int sz){
    for(int i = 0; i < sz; i++){
        vet[i] = rand() % 100;
    }
}

void imprimeVetor(int vet[], int sz){
    for(int i = 0; i < sz; i++){
        printf("%d ", vet[i]);
    }
}

int main(){
    int vet[TAMANHO];
    srand(time(NULL));
    preencheVetor(vet, TAMANHO);
    imprimeVetor(vet, TAMANHO);
}