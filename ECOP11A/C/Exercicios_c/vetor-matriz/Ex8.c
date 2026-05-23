#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[50]; int vogais = 0, consoantes = 0;
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    for(int i = 0; texto[i] != '\0'; i++){
        if((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')){
            if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
                vogais++;
            else
                consoantes++;
        }
    }
    printf("O texto tem %d, vogais e %d consoantes", vogais, consoantes);
    return 0;
}