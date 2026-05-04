#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, impostoTotal, salarioReduzido;

    printf("Qual o seu salário? ");
    scanf("%f", &salario);

    if(salario <= 2000)
        impostoTotal = 0;
    else if(salario > 2000 && salario <= 3000){
        salarioReduzido = salario - 2000;
        impostoTotal = salarioReduzido * 0.1;
    }
    else if(salario > 3000 && salario <= 5000){
        salarioReduzido = salario - 3000;
        impostoTotal = (1000 * 0.1) + (salarioReduzido * 0.15);
    }else{
        salarioReduzido = salario - 5000;
        impostoTotal = (1000 * 0.1) + (2000 * 0.15) + (salarioReduzido * 0.2);
    }

    printf("O imposto total a pagar é: %.2f\n", impostoTotal);
    printf("O salário líquido é: %.2f\n", salario - impostoTotal);
    printf("A porcentagem de imposto é: %.2f%%\n", (impostoTotal / salario) * 100);


    return 0;
}