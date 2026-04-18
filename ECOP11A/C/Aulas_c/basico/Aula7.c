#include <stdio.h>
#include <stdlib.h>

int main(){
    float TC; float TF; float TK;

    printf("Dê o valor da temperatura em graus celsius: ");
    scanf("%f", TC);

    TF = (TC * 9 / 5) + 32;
    TK =  TC + 273.15;

    printf("A temperatura em %.2f em celsius, vira %.2f em fahrenheit e %.2f em kelvin", TC, TF, TK);

    return 0;
}