#include <stdio.h>
#include <stdlib.h>

int main(){
    float v, r, i;
    printf("Digite um valor pra corrente: ");
    scanf("%f", &i);
    printf("Digite um valor pra resistencia: ");
    scanf("%f", &r);
    v = r * i;

    printf("O valor da tensao eh de: %f V", v);
    system("pause");

    return 0;
}