#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int n[]){
    for(int i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
}

void preencher(int n[]){
    for(int i = 0; i < 10; i++){
        n[i] = rand() % 10;
    }
}

void corrigir(int gab[]){
    int provas = 1;
    int prova[10];

    while(provas--){
        int pts = 0;
        preencher(prova);
        imprimir(gab);
        printf("\n");
        imprimir(prova);
        printf("\n");

        for(int i = 0; i < 10; i++){
            if(gab[i] == prova[i])
            pts++;
        }
        printf("O aluno tirou %d", pts);
    }


}

int main(){
    int gabarito[10];

    srand(time(NULL));
    preencher(gabarito);
    corrigir(gabarito);
}