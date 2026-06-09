#include <stdio.h>

void resto(int num, int den){ //sem usar % e com recursao
    if(num < den){
        printf("O resto da divisão é: %d\n", num);

    }else if(num == den){
        printf("O resto da divisão é: 0\n");
    }else{
        resto(num - den, den);
    }

}


int main(){
    int num, den;


    printf("Diga o número a ser dividido e o número pelo qual ele vai ser dividido: ");
    scanf("%d %d", &num, &den);

    resto(num, den);
}