#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5], vetorq[5];

    printf("De os valores do vetor: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        vetorq[i] = vetor[i] * vetor[i];
    }

    printf("Vetor 1\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }
    printf("Vetor 2\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetorq[i]);
    }  

    return 0;

}