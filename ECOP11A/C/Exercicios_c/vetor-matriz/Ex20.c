#include <stdio.h>

int main(){
    char frase[50];
    int diferença = 'A' - 'a';

    printf("Digite uma frase: ");
    gets(frase);

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] >= 'a' && frase[i] <= 'z')
            frase[i] += diferença;
    }
    printf("%s", frase);
}