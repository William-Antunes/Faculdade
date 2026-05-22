#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[100];
    char texto2[100];

    printf("Digite um texto: ");
    gets(texto);
    printf("Digite outro texto: ");
    gets(texto2);
    if(strcmp(texto, texto2) < 0)
        printf("O texto '%s' vem antes do texto '%s'", texto, texto2);
    else if(strcmp(texto, texto2) > 0)
        printf("O texto '%s' vem depois do texto '%s'", texto, texto2);
    else
        printf("Os textos são iguais");

    
}