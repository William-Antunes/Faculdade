#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacidade, hora, entraram, sairam, total = 0, maior = 0, h_maior = 0, menor = 1000000, h_menor, recusados = 0;

    printf("Qual a capacidade maxima de carros no estacionamento: ");
    scanf("%d", &capacidade);
    printf("Qual a quantidade de horas que vão ser monitoradas: ");
    scanf("%d", &hora);

    for(int i = 0; i < hora; i++){
        printf("Qual a quantidade de carros que entraram: ");
        scanf("%d", &entraram);
            if (total + entraram > capacidade){
                recusados += (total + entraram - capacidade);
                total = capacidade;
            } else {
                total += entraram;
            }
        do{
            printf("Qual a quantidade de carros que sairam: ");
            scanf("%d", &sairam);
        } while (total - sairam < 0);
        total -= sairam;

        if (menor > total){
            menor = total;
            h_menor = i + 1;
        }
        if (maior < total){
            maior = total;
            h_maior = i + 1;
        }
    }
    
    printf("A quantidade de carros recusados foi : %d\nA quantidade de menor movimento é: %d (na hora %d)\nA quantidade maior movimento é: %d (na hora %d)\n", recusados, menor, h_menor, maior, h_maior);


    return 0;
}