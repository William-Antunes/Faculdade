#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[10], soma = 0;

    for(int i = 0; i < 10; i++){
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &numeros[i]);

    soma += numeros[i];

    }
    printf("A soma dos valores foi: %d", soma);

    return 0;
}