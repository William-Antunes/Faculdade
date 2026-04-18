#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a; float b; float c; float p; float area;

    printf("Dê os valores dos 3 lados de um triangulo: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    p = (a + b + c ) / 2;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A área do triângulo é %.4f", area);

    return 0;
}
