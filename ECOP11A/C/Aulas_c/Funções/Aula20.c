#include <stdio.h>


void hanoi(int ndiscos, int orig, int dest, int aux, int *mov){
    if(ndiscos == 1){
        printf("Move o disco %d da haste %d para haste %d\n", ndiscos, orig, dest);
        (*mov)++;
    }else {
        hanoi(ndiscos-1, orig, aux, dest, mov);
        printf("Move o disco %d da haste %d para haste %d\n", ndiscos, orig, dest);
        (*mov)++;
        hanoi(ndiscos-1, aux, dest, orig, mov);
    }
}

int main(){
    int ndisco, nmovimento = 0;

    while(1){
        printf("Entre com a quantidade de discos: ");
        scanf("%d", &ndisco);
        
        printf("Movimentações:\n");
        hanoi(ndisco, 0, 2, 1, &nmovimento);
 
        printf("Total de movimentações: %d\n\n", nmovimento);
    }
    return 0;
}