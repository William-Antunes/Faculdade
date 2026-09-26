#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

typedef struct{
    char valor[50];
    int prox;
}elemEstEnc;

elemEstEnc lista[MAX];

int prim = -1;
int dispo = 0;

void inicializa(){
    int i = 0;

    for(i = 0; i < MAX-1; i++){
        lista[i].prox = i+1;
    }
    lista[i].prox = -1;
}

bool insere(char val[]){
    if(dispo == -1) return false;

    int ant = -1;
    int atual = prim;
    int novo = dispo;

    if(atual != -1 && strcmp(lista[atual].valor, val) < 0){
        ant = atual;
        atual = lista[atual].prox;
    }

    dispo = lista[dispo].prox;

    if(ant == -1) prim = novo;
    else lista[ant].prox = novo;

    strcpy(lista[novo].valor, val);
    lista[novo].prox = atual;
    return true;
}

int main(){
    char pal[50];
    inicializa();
    scanf("%s", pal);

    printf("%d", insere(pal));
    return 0;
}