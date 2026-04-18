#include <stdio.h>
#include <stdlib.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if(caractere >= 'a' && caractere <= 'z')
        printf("O caractere é uma letra minúscula");
    else if(caractere >= 'A' && caractere <= 'Z')
        printf("O caractere é uma letra maiúscula");
    else if(caractere >= '0' && caractere <= '9')
        printf("O caractere é um número");
    else
        printf("O caractere é um símbolo");
    return 0;
    
}