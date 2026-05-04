#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, soma, media, contador;

    soma = 0;
    num1 = 0;
    contador = 0;

    while(num1 != 0){
        printf("Digite um numero (-1 para sair): ");
        scanf("%d", &num1);

        soma += num1;
        contador++;
    }

    media = soma/contador;

    printf("A soma dos numeros é: %f\nE a media dos valores é %f", soma, media);

    return 0;
}