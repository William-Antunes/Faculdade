#include <stdio.h>
#include <stdlib.h>

int main(){
    int segundos, minutos, horas;

    printf("Digite o tempo decorrido em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;

    printf("O tempo em segundos %d, equivale a %d minutos e a %d horas", segundos, minutos, horas);

    return 0;
}