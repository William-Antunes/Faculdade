#include <stdio.h>
#include <string.h>

void inverte(char frase[]){
    int tamanho = strlen(frase);
    char invertida[50];

    for(int i = 0; i < tamanho; i++){
        invertida[i] = frase[tamanho - 1 - i];
    }
    invertida[tamanho] = '\0';

    printf("%s\n", invertida);

}

int main(){
    char frase[50];

    printf("Digite a frase pra inverter: ");
    gets(frase);

    printf("A frase invertida é: ");
    inverte(frase);
}