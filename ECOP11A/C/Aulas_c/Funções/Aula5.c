#include <stdio.h>


int fibonacci(int);

int main(){
    int valor;
    printf("Digite um numero para calcular o fibonacci: ");
    scanf("%d", &valor);

    printf("O fibonacci de %d é: %d", valor, fibonacci(valor));
    return 0;
}

int fibonacci(int n){
    int vet[n+1];
    vet[0] = 0;
    vet[1] = 1;

    for(int i = 2; i <= n; i++){
        vet[i] = vet[i - 1] + vet[i - 2];
    }
    return vet[n];
}
