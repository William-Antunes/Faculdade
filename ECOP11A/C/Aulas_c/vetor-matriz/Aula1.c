#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1[5], nota2[5], media[5];

    for(int i = 0; i < 5; i++){
        printf("Entre com a nota 1 do aluno %d: ", i+1);
        scanf("%f", &nota1[i]);

        printf("Entre com a nota 2 do aluno %d: ", i+1);
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] + nota2[i]) / 2;

        printf("A media do aluno foi %f\n", media[i]);
    }
    
    return 0;
}