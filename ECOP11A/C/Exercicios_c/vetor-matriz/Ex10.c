#include <stdio.h>

int main(){
    int multiplos[20], divisivel = 0;

    for(int i = 0; i < 20; i++){
        multiplos[i] = divisivel;

        divisivel += 7;
    }

    printf("Valores \n");

    for(int i = 0; i < 20; i++){
        printf("%d\n", multiplos[i]);
    }

    return 0;
}