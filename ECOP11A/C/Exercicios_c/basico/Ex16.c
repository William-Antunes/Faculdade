#include <stdio.h>
#include <stdlib.h>

int main() {
    int qualidade;

    printf("Qual o código do produto");
    scanf("%d", &qualidade);

    if(qualidade == 1)
        printf("Alimento não-perecivel");
    else if(qualidade >= 2 && qualidade <= 4)
        printf("Alimento perecivel");
    else if(qualidade == 5 || qualidade == 6)
        printf("Vestuario");
    else if(qualidade >= 8 && qualidade <= 15)
        printf("Higiene pessoal");
    else
        printf("INVALIDO");

    return 0;
}