#include <stdio.h>

int main(){
    char nome[10];
    int letras = 0;

    printf("Digite um nome: ");
    gets(nome);

    for(int i = 0; nome[i] != '\0'; i++){
        letras++;
    }

    printf("O nome tem %d letras.\n", letras);

    return 0;
}