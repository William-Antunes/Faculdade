#include <stdio.h>
#include <math.h>

void conta(float vi, float temp, float a, float *vf, float *s){
    *s = vi * temp + (a * temp * temp)/ 2;
    *vf = sqrt(vi * vi + 2 * a * *s);
}


int main(){
    float vi, temp, a, vf, s;

    printf("Quais os valores da velocidade inicial, o tempo e a aceleração: ");
    scanf("%f %f %f", &vi, &temp, &a);

    conta(vi, temp, a, &vf, &s);

    printf("A variavel final foi:\n ");
    printf("s: %.2f\n vf: %.2f", vf, s);
    
    
}