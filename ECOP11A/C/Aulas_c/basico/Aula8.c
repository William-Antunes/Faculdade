#include <stdlib.h>
#include <stdio.h>

int main() {
    int pessoas; float p_carne; float p_cerveja; float p_refri; float total; float medio;

    printf("Qual a quantidade de pessoas que estarão no churrasco: ");
    scanf("%d", &pessoas);
    
    printf("Qual o preço da carne da cerveja e do refri: ");
    scanf("%f %f %f", &p_carne, &p_cerveja, &p_refri);

    total = pessoas * (0.3 * p_carne + 2 * p_refri + 3 * p_cerveja);
    medio = total / pessoas;

    printf("O preço total foi de R$%.2f e o preço por pessoa foi de R$%.2f", total, medio);

    return 0;
}