#include <stdio.h>


int media3(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 3;
}

int maior(int num1, int num2, int num3){
    int maior;

    if(num1 > num2 && num1 > num3)
        maior = num1;

    if(num2 > num1 && num2 > num3)
        maior = num2;

    if(num3 >num1 && num3 > num2)
        maior = num3;

    return maior;
}

int menor(int num1, int num2, int num3){
    int menor;

    if(num1 < num2 && num1 < num3)
        menor = num1;

    if(num2 < num1 && num2 < num3)
        menor = num2;

    if(num3 < num1 && num3 < num2)
        menor = num3;

    return menor;
}

int valordomeio(int num1, int num2, int num3){
    int meio;

    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
        meio = num1;

    if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
        meio = num2;

    if((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2))
        meio = num3;

    return meio;
}

int media2(int num1, int num2, int num3){
    return (maior(num1, num2, num3) + valordomeio(num1, num2, num3)) / 2;
}

int main(){
    int num1, num2, num3;

    printf("Digite a nota das 3 maiores notas: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("A media usando as 3 notas foi: %d\n", media3(num1, num2, num3));
    printf("A maior nota foi: %d\n", maior(num1, num2, num3));
    printf("A menor nota foi: %d\n", menor(num1, num2, num3));
    printf("A media com as duas maiores notas foi: %d\n", media2(num1, num2, num3));
}
