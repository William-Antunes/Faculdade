#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int     numPar=0, num, numImpar=0, mediaPar=0, maior = 0, menor = 1000, quantia = 0;

    do{
        num = rand() % 100;

        if(num <= 0){
            break;
        }
        if(num % 2 == 0){
            numPar++;
            mediaPar+= num;
        }
        else 
            numImpar++;
        
        if(num > maior)
            maior = num;
        if(num < menor)
            menor = num;

        quantia++;
    }
    while(num > 0);

    printf("A quantidade de números foi %d, a quantidade de numeros pares foi %d, a quantidade de números impares foi de %d, o maior número foi %d, o menor número foi %d, a media dos pares foi %d", quantia,numPar,numImpar,maior,menor,mediaPar/quantia);

    return 0;
}