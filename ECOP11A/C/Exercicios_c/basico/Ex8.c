#include <stdio.h>
#include <stdlib.h>

int main(){

    int paes; int broas; float total; float poupanca;

    printf("Diga a quantidade de pães e de broas que foram vendidas respectivamente: ");
    scanf("%d" "%d", paes, broas);

    total = (paes * 0.92) + (broas * 3.5);
    poupanca = total * 0.1;

    printf("O total arrecadado foi de %f e o total pra poupança é de %f", total, poupanca);

    return 0;
}