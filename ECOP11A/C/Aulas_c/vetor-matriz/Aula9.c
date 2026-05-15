#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat1[3][2], mat2[2][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Diga o valor [%d][%d] da matriz 1 ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    // trnasposta da matriz 1 para a matriz 2
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            mat2[i][j] = mat1[j][i];
        }
    }

    printf("Matriz 1: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz 2: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }


    return 0;
}