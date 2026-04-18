#include <stdlib.h>
#include <stdio.h>

int main(){
    float salario; float novo_salario;

    printf("Diga o primeiro salario do funcionario: ");
    scanf("%f", &salario);

    novo_salario = (salario *  1.05) - (salario * 0.07);

    printf("O novo salario do cara pós ajustes é de : %f", novo_salario);

    return 0;
}