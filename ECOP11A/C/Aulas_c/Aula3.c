#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    c = a + b;
    printf("O resultado da soma de %d e %d eh de: %d", a, b, c);
    system("pause");
    return 0;
}