#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, acrescimo;

    salario = 2000;
    acrescimo = 0.015;
    
    for (int i = 2005; i < 2026; i++){
        salario += salario * acrescimo;
        acrescimo *= 2;
    }
    printf("O salario final é de: %f\n", salario);
    

    return 0;
}