#include <stdio.h>

int ehPar(int n){
    if(n % 2 == 0)
        return 1;
    return 0;
}

int main(){
    int num;

    printf("Digite um numero pra verificar se ele é par ou impar: ");
    scanf("%d", &num);

    if(ehPar(num))
        printf("O numero é par");
    else
        printf("O numero é impar");

    return 0;
}