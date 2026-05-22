#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[100], texto2[100];

    printf("Digite o texto 1: ");
    gets(texto);

    //inverter texto
    for(int i = strlen(texto) - 1; i >= 0; i--){
        texto2[strlen(texto) - 1 - i] = texto[i];
    }
    texto2[strlen(texto)] = '\0';

    strcmp(texto, texto2) == 0 ? printf("Os textos são iguais") : printf("Os textos são diferentes");
}