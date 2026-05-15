#include <stdio.h>
#include <stdlib.h>

int main(){
    int MatrizA[2][3], MatrizB[2][3], MatrizC[2][3];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Entre com o elemento da linha %d, e da coluna %d da MatrizA: ", i, j);
            scanf("%d", &MatrizA[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Entre com o elemento da linha %d, e da coluna %d da MatrizB: ", i, j);
            scanf("%d", &MatrizB[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            MatrizC[i][j] = MatrizA[i][j] + MatrizB[i][j];
        }
    }
    printf("Matriz C\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", MatrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}