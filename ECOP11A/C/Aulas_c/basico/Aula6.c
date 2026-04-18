#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float r; float peri; float area; float pi;

    printf("De o valor do raio do circulo");
    scanf("%f", &r);

    pi = acos(-1.0);
    peri = 2 * pi * r;
    area = r * r * pi;

    printf("O perímetro do círculo é %.4f\n", peri);
    printf("A área do círculo é %.4f", area);

    return 0;
}

