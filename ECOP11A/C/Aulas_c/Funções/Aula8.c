#include <stdio.h>

int sum(int n){
    int soma = 0;
    while(n > 0){
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int parouimpar(int n){
    if(n % 2 == 0)
        return 1; 
    else
        return 0; 
}

int main(){
    int num;
    int val;

    printf("Digite um número pra se calcular a soma dos digitos: ");
    scanf("%d", &num);

    val = sum(num);

    printf("A soma dos digitos é: %d", val);
    
    if(parouimpar(val))
        printf("\nA O número é equilibrado.");
    else
        printf("\nA O número não é equilibrado.");
}