#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;
}

int main(){
    int num1, num2;

    printf("Digite 2 numeros pra somar eles: ");
    scanf("%d %d", &num1, &num2);


    printf("A soma dos numeros é %d", soma(num1, num2));

    return 0;
}