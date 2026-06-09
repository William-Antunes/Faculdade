#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 6

int preenche_matriz(int mat[][6], int sz){
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < 6; j++){
            mat[i][j] = rand() % 10;
        }
    }
}

void imprime_matriz(int mat[][6], int sz){
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < 6; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int transposta(int mat[][6], int sz){
    int aux;
    for(int i = 0; i < sz; i++){
        for(int j = i+1; j < 6; j++){
            aux = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux;

        }
    }

    return mat;
}

int main(){
    srand(time(NULL));
    int matriz[6][6];
    int sz = TAMANHO;

    preenche_matriz(matriz, sz);
    imprime_matriz(matriz, sz);
    transposta(matriz, sz);
    imprime_matriz(matriz, sz);

    
    return 0;
}