#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char vetor[50];

    printf("Digite o texto que vc quer q seja modificado: ");
    gets(vetor);

    for(int i = 0; i < strlen(vetor); i++){
        if(i % 5 == 0 && i != 0){
            printf(" ");
        }
        printf("%c", vetor[i]);
    }
    return 0;


}