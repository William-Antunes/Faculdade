#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int n[]){
    for(int i = 0; i < 100; i++){
        n[i] = rand() % 100;
    }
}

int somatorio(int n[]){
    int soma = 0;
    for(int i = 0; i < 100; i++){
        soma += (n[i] - n[99-i]) * (n[i] - n[99-i]);
    }


    return soma;
}

int main(){
    int num[100];
    srand(time(NULL));

    preencher(num);

    printf("%d\n", somatorio(num));

}