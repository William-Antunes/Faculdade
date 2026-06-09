#include <stdio.h>
// a tem q receber o menor valor e b o maior valor

int tamanho(int *a, int *b){
    int temp;

    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    return *b;
}

int main(){
    int a, b;

    printf("Digite os valores pra a e b: ");
    scanf("%d %d", &a, &b);

    printf("Ordem de tamanho: \n");
    tamanho(&a, &b);

    printf("O maior tamanho é: \n");
    printf("b: %d", b);
}