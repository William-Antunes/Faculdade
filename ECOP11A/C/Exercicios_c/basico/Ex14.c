#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int ano_nascimento, idade;

    printf("Qual o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    
    idade = 2026 - ano_nascimento;

    if(idade >= 16)
        printf("Vc tem idade pra dirigir");
    else if(idade >= 18)
        printf("Vc tem idade pra dirigir");

    return 0;
}