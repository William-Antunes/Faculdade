#include <stdio.h>

int soma(int num){
    int soma = 0;
    while(num > 0){
        soma+= num % 10;
        num/= 10;
    }
    return soma;
}

int main(){
    int num;

    printf("Digite o numero pra retornar a soma dos valores: ");
    scanf("%d", &num);

    printf("A soma é: %d", soma(num));

    return 0;
}