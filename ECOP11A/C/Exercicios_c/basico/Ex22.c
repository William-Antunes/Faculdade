#include <stdio.h>
#include <stdlib.h>

int main() {
    int maior, contador, num;

    maior = 0;
    contador = 0;
    while(contador < 10){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > maior) maior = num;
        contador += 1;
    };
    
    printf("O maior numero desses é: %d", maior);

    return 0;
}