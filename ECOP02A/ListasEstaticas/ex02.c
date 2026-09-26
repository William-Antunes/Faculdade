#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define MAX 10

typedef struct {
  int valor;
  int prox;
}listaenc;
int prim = -1;
int dispo = 0;

listaenc lista[MAX];

void inicializa(){
  int i;
  for(i = 0; i < MAX-1; i++){
    lista[i].prox = i+1;
  }
  lista[i].prox = -1;
}

void imprimir(){
  int novo = prim;
  
  while(novo != -1){
    printf("%d ", lista[novo].valor);
    novo = lista[novo].prox;
  }
}

bool insere(int val){
  if(dispo == -1) return false;
  
  int ant = -1;
  int atual = prim;
  int novo = dispo;
  
  while(atual != -1 && lista[atual].valor < val){
    ant = atual;
    atual = lista[atual].prox;
  }
  
  dispo = lista[dispo].prox;
  
  if(ant == -1)
    prim = novo;
  else lista[ant].prox = novo;
  
  lista[novo].valor = val;
  lista[novo].prox = atual;
  
  return true;
}

bool remover(int val){
  if(prim == -1) return false;
  
  int ant = -1;
  int atual = prim;
  
  while(atual != -1 && lista[atual].valor < val){
    ant = atual;
    atual = lista[atual].prox;
  }
  
  if(atual == -1) return false;
  
  if(ant == -1){
    prim = lista[prim].prox;
  }
  else {
    lista[ant].prox = lista[atual].prox;
  }
  lista[atual].prox = dispo;
  dispo = atual;
  return true;
  
}

int main(){
  inicializa();
  
  insere(12);
  insere(9);
  insere(7);
  insere(14);
  insere(6);
  insere(10);
  insere(5);
  insere(13);
  insere(8);
  insere(11);

  remover(9);
  remover(12);
  remover(5);
  remover(14);
  
  insere(18);
  insere(27);
  
  imprimir();
}



