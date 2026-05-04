#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num1, num2, opcao;

    printf("Digite 2 números inteiros positivos: ");
    scanf("%d" "%d", &num1, &num2);

    printf("Qual caso você quer realizar: ");
    printf("1: O primeiro numero elevado ao segundo");
    printf("2: Raiz quadrada de cada um dos numeros");
    printf("3:Raiz cubica de cada um dos numeros");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("O primeiro numero elevado pelo segundo é: %d", pow(num1, num2));
        break;
    
    case 2:
        printf("A raiz quadrada do primeiro numero é: %f\n", sqrt(num1));
        printf("A raiz quadrada do segundo numero é: %f\n", sqrt(num2));
        break;
    case 3:
        printf("A raiz cubica do primeiro numero é: %f\n", cbrt(num1));
        printf("A raiz cubica do segundo numero é: %f\n", cbrt(num2));
        break;
    default:
        printf("Opção inválida");
        break;
    }

    return 0;
}