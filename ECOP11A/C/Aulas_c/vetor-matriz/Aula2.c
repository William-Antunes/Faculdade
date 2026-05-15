#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[10], maior = -1;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor inteiro positivo: \n");
        scanf("%d", &num[i]);

        if(num[i] > maior)
            maior = num[i];
    }

    printf("O maior valor é: %d", maior);

    return 0;
}