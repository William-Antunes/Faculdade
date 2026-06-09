#include <stdio.h>


float conversao(float celsius) {;
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(){
    float cel, fahr;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cel);

    fahr = conversao(cel);

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", cel, fahr);

    return 0;
}