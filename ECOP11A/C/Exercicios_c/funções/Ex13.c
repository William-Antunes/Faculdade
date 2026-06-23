#include <stdio.h>

void quadrado(int num){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }
}


int main(){
    int num;

    printf("Digie qual o lado do quadrado: ");
    scanf("%d", &num);

    quadrado(num);
}