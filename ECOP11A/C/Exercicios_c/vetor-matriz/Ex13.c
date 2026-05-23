#include <stdio.h>

int main(){
    int matriz[3][3]; float medias[3], soma; 

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Escreva o valor da posição (%d,%d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int j = 0; j < 3; j++){
        soma = 0;
        for(int i = 0; i < 3; i++){
            soma+= matriz[i][j];
            }
            medias[j] = soma / 3;
        }


        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

    printf("Medias por coluna: \n");
    for(int i = 0; i < 3; i++){
        printf("%f\n", medias[i]);
    }
}