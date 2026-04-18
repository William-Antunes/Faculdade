#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um numero maior do que 0: ");
    scanf("%d", &num);

    printf("O numero que vc digitou ao quadrado é: %d ", num * num);
    printf("O numero que vc digitou ao cubo é: %d ", num * num * num);
    printf("O metade do numero que vc digitou é: %d ", num / 2);
    printf("O sucessor do numero que vc digitou é: %d ", num + 1);

    return 0;
}