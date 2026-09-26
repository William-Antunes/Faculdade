#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define MAX 83 

int lista[MAX];
int dispo = 0;

int vetor1[20];
int vetor2[20];
int vetor3[20];
int vetor4[20];
int vetor5[3];

bool insere(int valor){
  if(dispo >= MAX) return false;
  
  int i = dispo;
  
  while(i > 0 && lista[i-1] > valor){
    lista[i] = lista[i-1];
    i--;
  }
  lista[i] = valor;
  dispo++;
  
  return true;
}

int aleat(){
  return rand() % 501;
}

void imprimir(int *vet, int tamanho){
  for(int i = 0; i < tamanho;i++){
    printf("%d ", vet[i]);
  }
  printf("\n");
}

void quebraEm5Vetores(){
  int valor = 21;
  for(int i = 0; i < 83; i++){
    if(i < 20){
      vetor1[i] = lista[i];
    }
    else if(i == 20) vetor5[0] = lista[i];
    
    else if(i < 41) vetor2[i-valor] = lista[i]; 
    
    else if(i == 41) vetor5[1] = lista[i];
    
    else if(i < 62) vetor3[i-valor*2] = lista[i];
    
    else if(i == 62) vetor5[2] = lista[i];
    
    else
      vetor4[i-valor*3] = lista[i];
  }
}

int main(){
  srand(time(NULL));
  
  while(dispo < MAX){
    insere(aleat());
  }
  quebraEm5Vetores();
  
  imprimir(vetor1, 20);
  imprimir(vetor2, 20);
  imprimir(vetor3, 20);
  imprimir(vetor4, 20);
  imprimir(vetor5, 3);
  return 0;
}
