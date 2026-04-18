#include <stdio.h>
#include <stdlib.h>

//triangulo equilatero: 3 lados iguais
//triangulo isosceles: 2 lados iguais
//triangulo escaleno: 3 lados diferentes
int main(){
    int lado1, lado2, lado3;

    printf("Dê os 3 lados do triangulo: ");
    scanf("%d" "%d" "%d", &lado1, &lado2, &lado3);

    if(lado1 == lado2 && lado2 == lado3)
        printf("O triangulo é equilatero");
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        printf("O triangulo é isosceles");
    else
        printf("O triangulo é escaleno");

    return 0;
}