#include <stdio.h>
#include <stdlib.h>

int main(){
    char valores[5];

    for(int i = 0; i < 5; i++){
    printf("Digite uma letra: ");
    scanf(" %c", &valores[i]);
    }
    for(int i = 4; i >= 0; i--){
        printf("%c ", valores[i]);
    }
}