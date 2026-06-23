#include <stdio.h>

int valor(int num){
    if(num > 0)
        return 1;
    else if(num == 0)
        return 0;
    else 
        return -1;
}

int main(){
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if(valor(numero) == 1)
        printf("O numero é positivo");
    else if(valor(numero) == 0)
        printf("O numero é o 0");
    else if(valor(numero) == -1)    
        printf("O numero é negativo");

    return 0;
}