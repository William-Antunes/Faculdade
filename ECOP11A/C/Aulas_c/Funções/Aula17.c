#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 4

int preenche_matriz(int mat[][5], int sz){
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < 5; j++){
            mat[i][j] = 30 + 50*(float)rand()/RAND_MAX;
        }
    }
}

void imprime_matriz(int mat[][5], int sz){
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int mediaSetor(int matriz[][5], int sz, int set){
    int media = 0;
    for(int j = 0; j < 5; j++){
        media += matriz[set][j];
    }
    media /= 5;
    printf("Media do setor %d: %d\n", set, media);
    return media;
}

int ContarSensoresCriticos(int matriz[][5], int sz, int set, int lim){
    int cont = 0;
    for(int j = 0; j < 5; j++){
        if(matriz[set][j] > lim){
            cont++;
        }
    }
    printf("Sensores criticos no setor %d: %d\n", set, cont);
    return cont;
}

int main(){
    srand(time(NULL));
    int matriz[TAMANHO][5];
    int sz = TAMANHO;
    int set;
    int limite;
    
    printf("Digite qual o setor pra tirar a media: ");
    scanf("%d", &set);
    printf("Digite o limite para contar os sensores criticos: ");
    scanf("%d", &limite);

    preenche_matriz(matriz, sz);
    imprime_matriz(matriz,sz);
    mediaSetor(matriz, sz, set);
    ContarSensoresCriticos(matriz, sz, set, limite);
    
    return 0;
}