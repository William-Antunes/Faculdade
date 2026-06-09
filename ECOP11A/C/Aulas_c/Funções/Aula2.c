#include <stdio.h>

int fatorial(int n){
    if(n < 0){
        printf("Fatorial não definido para números negativos.\n");
        return -1; 
    }
    else if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main(){
    int num; 

    printf("Digite um numero pra calcular o fatorial: ");
    scanf("%d", &num);

    printf("O fatorial de %d é: %d", num, fatorial(num));

    return 0;
}