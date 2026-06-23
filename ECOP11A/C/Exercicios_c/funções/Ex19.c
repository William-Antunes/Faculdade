#include <stdio.h>

#define tamanho 50

void maiuscula(char frase[], int sz){
    int diferenca = 'A' - 'a';

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] >= 'a' && frase[i] <= 'z')
            frase[i] += diferenca;
    }
}

void imprimevetor(char frase[], int sz){
    for(int i = 0; frase[i] != '\0'; i++){
        printf("%c", frase[i]);
    }
}


int main(){
    char frase[tamanho];

    printf("Digite a frase pra ser passado pro maisculo: ");
    gets(frase);

    int sz = tamanho;

    maiuscula(frase, sz);

    imprimevetor(frase, sz);

    return 0;
}