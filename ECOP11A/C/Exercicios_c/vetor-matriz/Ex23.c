#include <stdio.h>
#include <string.h>

int main(){
    char texto1[50], texto2[50], texto3[50];
    
    // printar frase da menor por maior

    printf("Escreva a primera frase: ");
    gets(texto1);

    printf("Escreva a segunda frase: ");
    gets(texto2);

    printf("Escreva a terceira frase: ");
    gets(texto3);

    // Ordenar as frases da menor para a maior
    if(strlen(texto1) < strlen(texto2) && strlen(texto1) < strlen(texto3)){
        printf("Frase 1: %s\n", texto1);
        if(strlen(texto2) < strlen(texto3)){
            printf("Frase 2: %s\n", texto2);
            printf("Frase 3: %s\n", texto3);
        } else {
            printf("Frase 2: %s\n", texto3);
            printf("Frase 3: %s\n", texto2);
        }
    } else if(strlen(texto2) < strlen(texto1) && strlen(texto2) < strlen(texto3)){
        printf("Frase 1: %s\n", texto2);
        if(strlen(texto1) < strlen(texto3)){
            printf("Frase 2: %s\n", texto1);
            printf("Frase 3: %s\n", texto3);
        } else {
            printf("Frase 2: %s\n", texto3);
            printf("Frase 3: %s\n", texto1);
        }
    } else {
        printf("Frase 1: %s\n", texto3);
        if(strlen(texto1) < strlen(texto2)){
            printf("Frase 2: %s\n", texto1);
            printf("Frase 3: %s\n", texto2);
        } else {
            printf("Frase 2: %s\n", texto2);
            printf("Frase 3: %s\n", texto1);
        }
    }
}