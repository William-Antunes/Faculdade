#include <stdio.h>
#include <stdlib.h>

int main(){
        char texto[7];

        printf("Digite o seu nome: ");
        gets(texto);
        printf("Seu nome é: %s", texto);
}