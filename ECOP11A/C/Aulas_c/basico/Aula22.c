#include <stdio.h>
#include <stdlib.h>

int main() {
    int defeito, ok, peca;

    defeito = 0;
    ok = 0;

    for(int i = 0; i <= 20; i++){
        printf("A peça está ok(1) ou com defeito(0): ");
        scanf("%d", &peca);

        if(peca == 1)
            ok++;
        else if(peca == 0)
            defeito++;
        else
            printf("Faça direito\n");
    }
    printf("A quantidade de peças boas é %d\nE a quantidade de peças ruins é %d\nO percentual com defeito é %.2f%%", ok, defeito, (float)(defeito) / 20 * 100);

    return 0;
}