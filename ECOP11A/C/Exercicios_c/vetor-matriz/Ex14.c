#include <stdio.h>

int main(){
    char nome[10];


    printf("Digite um nome: ");
    gets(nome);

    for(int i = 0; i < 5; i++){
        printf("%c", nome[i]);
    }
    printf("\n");
    return 0;
}