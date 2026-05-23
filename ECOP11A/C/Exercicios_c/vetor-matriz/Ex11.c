#include <stdio.h>

int main(){
    int matriz[3][3], diagonal[3], somaprincipal = 0, somasecundaria = 0;

    printf("Digite os valores da matriz 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        printf("Invertido\n");
    for(int i = 2; i >= 0; i--){
        for(int j = 2; j >= 0; j--){
            if(i == j)
                printf("%d ", matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        somaprincipal += matriz[i][i];
        somasecundaria += matriz[i][2-i];
    }

    printf("Soma principal %d\n", somaprincipal);
    printf("Soma secundaria %d\n", somasecundaria);

}