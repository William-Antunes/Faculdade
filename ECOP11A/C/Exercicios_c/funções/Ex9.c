#include <stdio.h>

int ehPrimo(int num){
    int divisores = 0;

    for(int i = num-1; i > 1; i--){
        if(num % i == 0)    
            divisores++;
    }

    if(divisores >= 1)
        return 0;
    return 1;
}

void todosPrimos(int num){
    for(int i = 2; i <= num; i++){
        if(ehPrimo(i))
            printf("%d\n", i);
    }
}

int main(){
    int numero;

    printf("Digite um número que vai verificar quais os números primos entre 1 e esse número: ");
    scanf("%d", &numero);

    todosPrimos(numero);
}