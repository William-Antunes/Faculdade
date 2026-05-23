#include <stdio.h>
#include <stdlib.h>

int main(){
    float valores[5], maior = 0, menor = 100000, media = 0;

    printf("Diga os valores do vetor: ");

    for(int i = 0; i < 5; i++){
        scanf("%f", &valores[i]);

        if(valores[i] > maior)
            maior = valores[i];
        if(valores[i] < menor)
            menor = valores[i];
        media += valores[i];
    }

    printf("O maior valor do vetor é %f\n", maior);
    printf("O menor valor do vetor é %f\n", menor);
    printf("A soma dos valores do vetor é %f\n", media);
    printf("A media dos valores do vetor é %f\n", media / 5);

    return 0;
}