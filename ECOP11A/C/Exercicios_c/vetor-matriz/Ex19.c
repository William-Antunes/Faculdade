#include <stdio.h>

int main(){
    char frase[50], vogal;
    
    printf("Digite uma frase: ");
    gets(frase);

    printf("Digite uma vogal agora: ");
    scanf("%c", &vogal);

    printf("Vogais substituidas pela vogal de sua escolha\n");

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
           frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            frase[i] = vogal;
        }

    }
    printf("%s", frase);
    return 0;
}