#include <stdio.h>
#include <stdlib.h>

int main(){
    char vetor[10];

    gets(vetor);

    for(int i = 9; i >= 0; i--){
        printf("%c", vetor[i]);
    }
    return 0;
}