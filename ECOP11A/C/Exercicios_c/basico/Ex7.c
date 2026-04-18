#include <stdio.h>
#include <stdlib.h>

int main(){

    int cavalos; 

    printf("Me fale quantos cavalos estão na roça: ");
    scanf("%d", &cavalos);

    printf("A quantidade de ferraduras pra equipar todos os cavalos é de: %d", cavalos * 4);
    
    return 0;
}