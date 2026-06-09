#include <stdio.h>
#include <stdlib.h>


int preencheArray(float *vet, int sz){
    for(int i = 0; i < sz; i++){
        vet[i] = (float)rand()/RAND_MAX;
    }
}

void imprimeVetor(float *vet, int sz){
    for(int i = 0; i < sz; i++){
        printf("%.4f ", vet[i]);
    }
}

int reverseArray(float *vet, int sz){
    float aux;
    for(int i = 0; i < sz/2; i++){
        aux = vet[i];
        vet[i] = vet[sz - 1 - i];
        vet[sz - 1 - i] = aux;
    }
}


int main(){
    int num;

    printf("Digite o tamanho do array: ");
    scanf("%d", &num);

    float vetor[num];
    preencheArray(vetor, num);
    printf("Array preenchido:\n");
    imprimeVetor(vetor, num);
    printf("\nArray invertido:\n");
    reverseArray(vetor, num);
    imprimeVetor(vetor, num);
    printf("\n");
}