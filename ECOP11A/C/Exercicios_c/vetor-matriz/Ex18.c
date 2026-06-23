#include <stdio.h>

int main(){
    char palavra[7];

    //palavra invertida

    printf("Digite uma palavra: ");
    gets(palavra);

    printf("Palavra invertida:\n ");
    for(int i = 6; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    return 0;
}