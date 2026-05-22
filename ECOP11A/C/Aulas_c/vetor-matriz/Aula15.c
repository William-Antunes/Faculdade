#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[100], vogal; int num_vogais = 0, num_consoantes = 0, num_maisculas = 0;
    
    printf("Digite um texto de sua escolha: ");
    gets(texto);
    printf("Agora digite uma vogal: ");
    vogal = getchar();

    for(int i = 0; i < 100; i++){
        if(texto[i] == '\0')
            break;
        if(texto[i] >= 'A' && texto[i] <= 'Z')
            num_maisculas++;
        if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z'){
            if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U'){
                num_vogais++;
                texto[i] = vogal;}
            else
                num_consoantes++;
            }
        if(texto[i] == ' ')
            texto[i] = '-';
    }

    printf("O número de vogais é: %d\n", num_vogais);
    printf("O número de consoantes é: %d\n", num_consoantes);
    printf("O número de letras maiúsculas é: %d\n", num_maisculas);
    printf("Texto modificado: %s", texto);
    return 0;






}