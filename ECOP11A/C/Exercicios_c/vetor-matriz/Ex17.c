#include <stdio.h>


int main(){
    char texto[40], texto2[40];

    printf("Digite um texto: ");
    gets(texto);

    printf("Digite outro texto: ");
    gets(texto2);

    for(int i = 0; texto[i] != '\0'; i++){
            printf("%c", texto[i]);
    }
    for(int i = 0; texto2[i] != '\0'; i++){
        printf("%c", texto2[i]);
    }
}