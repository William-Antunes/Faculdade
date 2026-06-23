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

int main(){
    int num;

    printf("Digite um numero pra verificar se é primo: ");
    scanf("%d", &num);

    if(ehPrimo(num))
        printf("O número é primo");
    else
        printf("O número não é primo");

    return 0;
}