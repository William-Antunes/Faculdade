#include <stdio.h>

int delta(int a, int b, int c){
    return (b * b) - (4 * a * c);
}

int main(){
    int a, b, c;
    printf("Diga os valores de A, B e C da equação: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("O delta da equação é: %d", delta(a,b,c));
    return 0;
}