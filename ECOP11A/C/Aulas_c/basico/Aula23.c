#include <stdio.h>
#include <stdlib.h>

int main() {
    int largura, altura, preenchido; char borda, meio; 

    meio = ' ';
    printf("Qual será a altura do retangulo: ");
    scanf("%d", &altura);

    printf("Qual será a largura do retangulo: ");
    scanf("%d", &largura);

    printf("O retangulo vai ser preenchido (1) para sim (0) para não: ");
    scanf("%d", &preenchido);

    printf("Qual vai ser o elemento da borda: ");
    scanf(" %c", &borda);
    if (preenchido == 1){
        printf("Qual o elemento do meio do retangulo: ");
        scanf(" %c", &meio);
    }

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < largura; j++){
            if(i == 0 || i == altura - 1 || j == 0 || j == largura - 1){
                printf("%c", borda);
            }else {
                if (preenchido == 1){
                    printf("%c", meio);
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}