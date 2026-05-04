#include <stdio.h>
#include <stdlib.h>

int main() {
    float cidade1 = 90000, cidade2 = 200000, contador = 0;

    do{
        cidade1 = cidade1 + (cidade1 * 0.03);
        cidade2 = cidade2 + (cidade2 * 0.015);
        contador++;
    }while(cidade1 < cidade2);

    printf("A cidade A passou a cidade B em %f anos", contador);


    return 0;

}