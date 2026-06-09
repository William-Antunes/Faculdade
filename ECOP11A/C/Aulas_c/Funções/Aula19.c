#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

int preenche_vetor(int vet[], int sz){
    for(int i = 0; i < sz; i++){
        vet[i] = rand() % 100;
    }
}
int achaValor(int vet[], int sz, int valor){
    for(int i = 0; i < sz; i++){
        if(vet[i] == valor){
            return i;
        }
    }
    return -1;
}

int imprime_vetor(int vet[], int sz){
    for(int i = 0; i < sz; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    int vetor[TAMANHO];
    int sz = TAMANHO;
    int valor;

    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &valor);

    preenche_vetor(vetor, sz);
    imprime_vetor(vetor, sz);
    int posicao = achaValor(vetor, sz, valor);
    if(posicao != -1){
        printf("Valor encontrado na posição: %d\n", posicao);
    }else{
        printf("Valor não encontrado no vetor.\n");
    }

    return 0;
}