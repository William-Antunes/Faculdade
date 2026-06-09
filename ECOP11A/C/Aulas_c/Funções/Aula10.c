#include <stdio.h>

void troca(int *v1, int *v2){
    int temp;

    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}


int main(){

    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Trocando de valores:\n");
    troca(&a, &b);


    printf("a: %d\nb: %d\n", a, b);

    return 0;
}