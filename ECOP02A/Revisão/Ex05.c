#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int n[]){
    for(int i = 0; i < 60;i++){
        printf("%d ", n[i]);
    }
}

void preencher(int n[]){
    for(int i = 0; i < 60; i++){
        n[i] = rand() % 100;
    }
}

int calcMedia(int n[]){
    int media = 0;

    for(int i = 0; i <60; i++){
        media += n[i];
    }
    media /= 60;

    return media;
}

int maiorN(int n[], int* pos){
    int maior = 0;

    for(int i = 0; i < 60; i++){
        if(n[i] > maior){
            maior = n[i];
            *pos = i;
        }
    }

    return maior;
}

int main(){
    int num[60]; 
    int pos;

    srand(time(NULL));

    preencher(num);
    imprimir(num);
    printf("\n\n\n\n");
    printf("media: %d\n\n", calcMedia(num));

    int maior = maiorN(num, &pos);
    printf("maior numero: %d\npos: %d",maior, pos);
}