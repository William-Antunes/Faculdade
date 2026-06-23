#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[100], code[100];


    printf("Escreva um texto: ");
    gets(texto);

    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] == ' ')
            code[i] = ' ';
        else if (texto[i] >= 'a' && texto[i] <= 'z')
            code[i] = (texto[i] - 'a' + 3) % 26 + 'a';
        else if (texto[i] >= 'A' && texto[i] <= 'Z')
            code[i] = (texto[i] - 'A' + 3) % 26 + 'A';
    }
    code[strlen(texto)] = '\0';
    printf("Texto codificado: %s\n", code);

}