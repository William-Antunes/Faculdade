#include <stdio.h>

int main(){
    char texto[50], texto2[50];
    int repetido, k = 0;

    printf("Digite a frase: ");
    gets(texto);

    for(int i = 0; texto[i] != '\0'; i++){
        repetido = 0;
        for(int j = 0; j < k; j++){
            if(texto[i] == texto2[j]){
                repetido = 1;
                break;
            }
        }
        if(repetido == 0){
            texto2[k] = texto[i];
            k++;
        }
    }
    texto2[k] = '\0';

    printf("Texto sem repetição: %s", texto2);

    return 0;
}