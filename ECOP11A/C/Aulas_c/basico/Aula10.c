#include <stdlib.h>
#include <stdio.h>

int main() {
    int hora; int min; int hora_final; int min_final; int hora_total; int min_total;

    printf("Digite a hora em que o evento começou: ");
    scanf("%d", &hora);

    printf("Digite o minuto em que o evento começou: ");
    scanf("%d", &min);

    printf("Digite a hora em que o evento terminou: ");
    scanf("%d", &hora_final);

    printf("Digite o minuto em que o evento terminou: ");
    scanf("%d", &min_final);

    if(hora_final - hora < 24 && hora_final - hora <= 0 && min_final - min < 60 && min_final - min <= 0 || hora_final - hora < 24
         && hora_final - hora > 0 && min_final - min < 60 && min_final - min <= 0){
        if(hora > hora_final){
            hora_total = 24 - hora + hora_final;
}
        if(min > min_final){
            min_total = 60 - min + min_final;
        }
        if(hora < hora_final || hora == hora_final){
            hora_total = hora_final - hora;
        }if(min < min_final || min == min_final){
            min_total = min_final - min;
        }
        printf("O tempo de duração do evento foi de %d horas e %d minutos", hora_total, min_total);
    } else{
        printf("Dê um horario certo pro evento.");
    }
    return 0;
}