#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor_X[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor_X[i]);

        if(vetor_X[i] <= 0)
            vetor_X[i] = 1;

    }

    for(int i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, vetor_X[i]);
    }
    

    return 0;
}