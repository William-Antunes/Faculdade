#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade; int dias;

    printf("Digite a idade de uma pessoa: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("A idade dessa pessoa em dias é de %d", dias);

    return 0; 
}