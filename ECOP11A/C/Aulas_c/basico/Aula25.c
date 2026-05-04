#include <stdio.h>
#include <stdlib.h>

int main() {
    int leitura, soma = 0, media = 0, contador = 0;

    for(int i = 0; i < 10; i++){
        printf("Qual a leitura a ser feita da temperatura: ");
        scanf("%d", &leitura);

        if(leitura < 0)
            continue;
        
        else if (leitura > 120)
            break;
        else {
            contador++;
            soma += leitura;
        }
    }

    media = soma / contador;

    printf("A media dos valores ditos aqui foi: %d\n", media);

    return 0;
}