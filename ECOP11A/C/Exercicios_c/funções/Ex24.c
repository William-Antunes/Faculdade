#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sorteia(int *num){
    *num = rand() % 1001; 
}

void jogo(int *num, int opcao, int *contador){
    sorteia(num);
    while(1){
        printf("Digite um número (entre 1 e 1000): ");
        scanf("%d", &opcao);

        if(opcao > *num)
            printf("Muito alto\n");
        else if(opcao < *num)
            printf("Muito baixo\n");
        else{
            printf("Em cheio, vitória em %d rodadas", *contador);
            break;
        }
        *contador = *contador + 1;
    }
}

int main(){
    srand(time(NULL));

    int num, opcao, contador = 1;

    printf("O jogo de escolher um número vai começar: \n");

    jogo(&num,&opcao,&contador);

    return 0;
}