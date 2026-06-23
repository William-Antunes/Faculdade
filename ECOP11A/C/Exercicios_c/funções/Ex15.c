#include <stdio.h>

void ordena(float a, float b, float c){
    if(a < b){
        if(a < c){
            printf("%f ", a);
            if(b < c){
                printf("%f %f", b, c);
            } else {
                printf("%f %f", c, b);
            }
        } else {
            printf("%f %f %f", c, a, b);
        }
    } else {
        if(b < c){
            printf("%f ", b);
            if(a < c){
                printf("%f %f", a, c);
            } else {
                printf("%f %f", c, a);
            }
        } else {
            printf("%f %f %f", c, b, a);
        }
    }
}

int main(){
    float num1,num2,num3;

    printf("Digite os 3 numeros pra se ordenar: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    ordena(num1, num2, num3);

    return 0;
    
}