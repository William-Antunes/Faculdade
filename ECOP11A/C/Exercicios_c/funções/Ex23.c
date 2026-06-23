#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dados(int *dado1, int *dado2){
    *dado1 = rand() % 7;
    *dado2 = rand() % 7;
}

void imprime_dados(int *dado1, int *dado2){
    printf("dados: %d %d\n", *dado1, *dado2);
}
void verificaVitória(int *dado1, int *dado2, int *contador){
    int primeira_soma = 0;

    while(1){
        printf("Rodada %d:\n", *contador);

        dados(dado1, dado2);
        imprime_dados(dado1, dado2);

        if(*contador == 1 && (*dado1 + *dado2 == 7 || *dado1 + *dado2 == 11)){
            printf("Vitória na primeira rodada\n");
            break;
        } else if(*contador == 1 && (*dado1 + *dado2 == 2 || *dado1 + *dado2 == 3 || *dado1 + *dado2 == 12)){
            printf("Perdeu otario kkkkkkkk\n");
            break;
        }else if(*contador == 1){
            primeira_soma = *dado1 + *dado2;
        }
        if(*contador != 1 && (*dado1 + *dado2 == primeira_soma)){
            printf("Vitória na rodada :%d\n", *contador);
            break;
        }else if(*contador != 1 && (*dado1 + *dado2 == 7)){
            printf("Perdeu otario kkkkkkkk\n");
            break;
        }
        *contador = *contador + 1;
    }
}



int main(){
    srand(time(NULL));

    int d1, d2, contador = 1;

    printf("O jogo craps vai começar: \n");

    verificaVitória(&d1, &d2, &contador);

    return 0;
}