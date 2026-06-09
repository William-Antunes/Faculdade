#include <stdio.h>

int multi(int x, int n, int *c){
    if(n == 0 || x == 0) return 0;
    if(*c == n){
        return x;
    }else {
        *c = *c + 1;
        return x + multi(x, n, c);
    }
}

int main(){
    int num1, num2, contador = 1 ;


    printf("Diga quais os números vc quer multiplicar: ");
    scanf("%d %d", &num1, &num2);

    printf("A multiplicação da: %d", multi(num1, num2, &contador));
}