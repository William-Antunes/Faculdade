#include <stdio.h>

int main(){
    int matriz[2][3], maior = 0, menor = 100000, media = 0;
    
    
    printf("De os valores da matriz: ");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > maior) 
                maior = matriz[i][j];
            if(matriz[i][j] < menor)
                menor = matriz[i][j];
            
            media += matriz[i][j];
            
        }

    }
    printf("O maior valor da matriz é: %d\n", maior);
    printf("O menor valor da matriz é: %d\n", menor);
    printf("A soma dos valores da matriz é: %d\n", media);
    printf("A media dos valores da matriz é: %d\n", media / 6);
}