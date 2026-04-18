#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, continuar; float valor;

    do{
        printf("Selecione a opção desejada");
        printf("1: Converter de km/h pra m/s");
        printf("2: Converter de m/a pra km/h");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Qual o valor que vc deseja converter: ");
            scanf("%f", &valor);

            printf("O valor convertido é de: %f", valor / 3.6);
        }
        else if(opcao == 2){
            printf("Qual o valor que vc deseja converter: ");
            scanf("%f", &valor);

            printf("O valor convertido é de: %f", valor * 3.6);
        }
        else
            printf("Digite um valor valido\n");

        printf("Gostaria de continar?(0 pra sair)");
        scanf("%d", &continuar);

    } while(continuar != 0);

    return 0;
}