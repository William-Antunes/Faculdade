#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[100], vogal;
    // substituir todas as vogais do texto por vogal digitada pelo usuario

    printf("Digite um texto: ");
    gets(texto);

    printf("Digite uma vogal: ");
    vogal = getchar();

    for(int i = 0; i < 100; i++){
        if(texto[i] == '\0')
            break;
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
           texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
            texto[i] = vogal;
    }
    printf("Texto modificado: %s", texto);
    return 0;
}