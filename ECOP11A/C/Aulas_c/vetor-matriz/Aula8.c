#include <stdio.h>
#include <stdlib.h>

// mulplicação de matrizes

int main(){
    int matrizA[2][2], matrizB[2][2], matrizC[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Insira o valor da posicão i = %d e j = %d ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Insira o valor da posicão i = %d e j = %d ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

        for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizC[i][j] = 0;
            for(int w = 0; w < 2; w++){
                matrizC[i][j] += matrizA[i][w] * matrizB[w][j];
            }
        }
    }

    
    printf("Matriz C: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}