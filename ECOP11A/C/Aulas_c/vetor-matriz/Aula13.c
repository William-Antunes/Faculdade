#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[50]; int tamanho = 0;

    printf("Digite o seu nome: ");
    gets(texto);

    for(int i = 0; i < 50; i++){
        if(texto[i] == '\0')
            break;
        tamanho++;
    }
    printf("Tamanho da string é: %d", tamanho);

    return 0;
}