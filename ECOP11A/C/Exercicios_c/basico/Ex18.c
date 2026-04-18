#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, soma_par, soma_impar;

    soma_par = 0;
    soma_impar = 0;

    do {
        printf("Diga um número(maior que 1000 pra parar): ");
        scanf("%d", &num1);

        if(num1 % 2 == 0)
            soma_par += num1;
        else
            soma_impar += num1;


    } while(num1 <= 1000);
    
    printf("Soma dos números pares é %d, e dos números impares é %d", soma_par, soma_impar);

    return 0;
}