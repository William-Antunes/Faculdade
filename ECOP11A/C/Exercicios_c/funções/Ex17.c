#include <stdio.h>
#include <math.h>


void circulo(int raio, float *area, float *perimetro){
    *area = acos(-1) * raio * raio;
    *perimetro = acos(-1) * 2 * raio;
}

int main(){
    int raio;
    float area, perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%d", &raio);

    circulo(raio, &area, &perimetro);

    printf("O perimetro do circulo é %.2f\n", perimetro);
    printf("A area do circulo é %.2f", area);

    return 0;
}