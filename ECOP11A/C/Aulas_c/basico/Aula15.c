#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    float valor, valorinicial; char tipo;

    printf("Qual o valor da sua passagem: ");
    scanf("%f", &valor);

    valorinicial = valor;

    printf("Qual o tipo da sua passagem: ");
    scanf(" %c", &tipo);

    tipo = tolower(tipo);

    switch (tipo)
    {
    case 'a':
        printf("O valor não possue desconto");
        break;
    
    case 'e':
        valor = valor / 2;
        printf("Você tem 50%% de desconto\n");
        break;
    case 'i':
        valor = 0;
        printf("Você entra de graça\n");
        break;
    case 'p':
        valor = valor * 0.7;
        printf("Você tem 30%% de desconto\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }

    printf("O valor inicial é de: R$%f\nO desconto é de: R$%f\nE o valor final é de R$%f", valorinicial, valorinicial - valor, valor );

    return 0;
}