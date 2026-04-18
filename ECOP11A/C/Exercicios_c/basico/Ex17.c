#include <stdio.h>
#include <stdlib.h>

int main() {
    int hora1, hora2; float valor1, valor2;

    printf("Escreva quantas horas o primeiro professor trabalha e o valor que ele recebe por hora: ");
    scanf("%d" "%f", &hora1, valor1);

    printf("Escreva quantas horas o segundo professor trabalha e o valor que ele recebe por hora: ");
    scanf("%d" "%f", &hora2, &valor2);

    if (hora1 * valor1 > hora2 * valor2)
        printf("O primeiro professor recebe mais que o segundo");
    else if (hora1 * valor1 < hora2 * valor2)
        printf("O segundo professor recebe mais que o primeiro");
    else
        printf("Os dois professores recebem o mesmo valor");
    

    return 0;
}