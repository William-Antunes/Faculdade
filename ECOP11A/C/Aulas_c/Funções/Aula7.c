#include <stdio.h>

int multa(int velocidade, int maxima){
    int multa;

    if(velocidade <= maxima)
        return multa = 0;
    
    else if(velocidade > maxima * 1.1)
        return multa = 300;
    else
        return multa = 100;
}

int main(){
    int vel, radar; float mul;
    printf("Diga qual a velocidade maxima permitida e qual a velocidade que o carro passou: ");
    scanf("%d %d", &radar, &vel);


    printf("A multa será de: %d", multa(vel, radar));

    


    return 0;
}