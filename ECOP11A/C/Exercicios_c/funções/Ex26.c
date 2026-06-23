#include <stdio.h>

int multi(int num1, int num2){
    if(num2 == 0)
        return 0;
    else 
        return num1 + multi(num1, num2 - 1);
}

int main(){
    int num1, num2;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("O resultado é: %d", multi(num1, num2));

    return 0;
}