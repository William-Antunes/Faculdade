#include <stdio.h>
#include <stdlib.h>

int main() {
    float investimento = 1000; int meses = 0;

    do{
        investimento = investimento + (investimento * 0.012);
        meses++;
    }while(investimento < 2000);

    printf("O número de meses foi: %d",meses);
    printf("\nO valor final do investimento foi: %f",investimento);

    return 0;
}