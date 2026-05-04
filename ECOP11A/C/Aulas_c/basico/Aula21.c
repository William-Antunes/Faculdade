#include <stdio.h>
#include <stdlib.h>

int main() {
    int bateria;
    bateria = 15;

    for(int i = 1; i <= 20; i++){
        bateria+= 6;
        if(bateria > 100){
            bateria = 100;
        }
        printf("Bateria em %d%% no minuto %d \n",bateria, i);
        
    }

    return 0;
}