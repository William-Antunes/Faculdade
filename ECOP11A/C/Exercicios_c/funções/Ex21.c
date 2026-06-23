#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10

void aleatorio(int array[], int sz){
    for(int i = 0; i < sz; i++){
        array[i] = rand() % 101;
    }
}

void imprime(int array[], int sz){
    for(int i = 0; i < sz; i++){
        printf("%d ", array[i]);
    }

}

void inverte(int array[], int sz){
    int aux;
    for(int i = 0; i < sz/2; i++){
        aux = array[i];
        array[i] = array[sz - 1 - i];
        array[sz - i - 1] = aux;
    }
}

int main(){
    int array[10], sz = tamanho;

    aleatorio(array, sz);
    imprime(array, sz);
    inverte(array, sz);
    printf("Array invertido: \n");
    imprime(array, sz);

    return 0;
}