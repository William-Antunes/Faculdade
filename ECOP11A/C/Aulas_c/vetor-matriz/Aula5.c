#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp[15], media = 0;
    int sequencia = 1, sequencia_maior = 1, dia_sequencia = 0, bruscas = 0, maior_media = 0;


    for(int i = 0; i < 15; i++){
        printf("Qual a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);

        if(i > 0){
            if(temp[i-1] < temp[i])
                sequencia++;
            else
                sequencia = 1;

            if(sequencia > sequencia_maior){
                sequencia_maior = sequencia;
                dia_sequencia = i + 1;
            }
        }
        

        if(i > 0 && (temp[i] - temp[i-1] >= 5 || temp[i - 1] - temp[i] >= 5))
            bruscas++;
                
        media += temp[i];
    }
    media /= 15;

    for(int i = 0; i < 15; i++ ){
        if(temp[i] > media)
            maior_media++;
    }



    printf("A media das temperaturas foi de: %.2f\n", media);
    printf("A maior sequencia foi de %d dias\n", sequencia_maior);
    if(dia_sequencia > 0)
            printf("A sequencia foi quebrada no dia %d\n", dia_sequencia);
     else
            printf("A sequencia não foi quebrada");

    printf("A quantidade de mudanças bruscas que tiveram foi de: %d\n", bruscas);
    printf("A quantidade de dias acima da media foi de: %d\n", maior_media);
    return 0;
}