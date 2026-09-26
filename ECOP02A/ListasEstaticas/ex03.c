#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

typedef struct {
  char palavra[100];
  int prox;
} listaEnc;

listaEnc lista[MAX];

int dispo = 0;
int prim = -1;

bool insere(char pal[]){
  if(dispo == -1) return false;
  
  int ant = -1;
  int atual = prim;
  int novo = dispo;
  
  while(atual != -1 && strcmp(lista[atual].palavra, pal) < 0){
    ant = atual;
    atual = lista[atual].prox;
  } 
  if(atual != -1 && strcmp(lista[atual].palavra, pal) == 0) return false;
  
  dispo = lista[dispo].prox;
  
  if(ant == -1)
    prim = novo;
    
  else lista[ant].prox = novo;
  
  strcpy(lista[novo].palavra, pal);
  lista[novo].prox = atual;
  return true;
}

void imprimir(){
  int novo = prim;
  
  while(novo != -1){
    printf("%s ", lista[novo].palavra);
    novo = lista[novo].prox; 
    }
}

int main(){
  return 0;
}