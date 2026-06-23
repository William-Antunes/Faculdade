#include <stdio.h>

void bonus(float *salario, float bon){
    *salario = *salario + bon;
}

int main(){
    float salario, bon;

    printf("Digite o salario e o bonus a ser adicionado: ");
    scanf("%f %f", &salario, &bon);

    bonus(&salario, bon);

    printf("O novo salario é %.2f", salario);
}