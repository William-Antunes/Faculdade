#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, contador;

    printf("Digite um numero pra verificar se é primo: ");
    scanf("%d", &num1);

    num2 = num1;
    contador = 0;

    while(num2 >= 1){
        if(num1 % num2 == 0 ){
            contador++;
        }
        num2--;
    }

    if(contador > 2 || contador == 1)
        printf("O numero não é primo, pois o numero de divisores dele é:%d ", contador);
    else
        printf("O número é primo");



    return 0;
}