#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int preenche_matriz(int mat[5][4], int linhas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 4; j++){
            mat[i][j] = rand() % 10;
        }
    }
}

void imprime_matriz(int mat[5][4], int linhas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int soma_elementos(int mat[5][4], int linhas){
    int soma = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 4; j++){
            soma += mat[i][j];
        }
    }
    return soma;
}

int main(){

    int matriz[5][4];
    int linhas = TAMANHO;

    srand(time(NULL));
    preenche_matriz(matriz, linhas);
    imprime_matriz(matriz, linhas);
    printf("A soma dos elementos da matriz é: %d", soma_elementos(matriz, linhas));
    return 0;
}