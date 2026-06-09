#include <stdio.h>

float velocidadeMedia(float dis, float temp){
    return dis/temp;
}

int main(){
    float dist, temp;

    printf("Diga a distancia percorrida e o tempo demorado pra percorrer a distancia: ");
    scanf("%f %f", &dist, &temp);

    printf("A velocidade media foi %.2f", velocidadeMedia(dist, temp));

    return 0;
}