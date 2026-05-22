#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Insira o valor para a posição %d do vetor: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("O vetor possue os seguintes valores: \n");
    for(int i = 0; i < 10; i++){
        printf("%.1f ", vetor[i]);
    }
    return 0;
}