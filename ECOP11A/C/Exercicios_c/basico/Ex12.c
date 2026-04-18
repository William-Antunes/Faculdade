#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, peso; char sexo; 

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    printf("Qual o sexo da pessoa(M / F): ");
    scanf("%c", &sexo);

    if(sexo = "M")
        peso = (72.7 * altura) - 58;
    else if(sexo = "F")
        peso = (62.1 * altura) - 44.7;

        printf("O peso ideal pra uma pessoa de %fm é de %f", altura, peso);

    return 0;
}