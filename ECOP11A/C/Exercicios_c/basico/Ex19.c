#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, primeiro_par, primeiro_impar;

    primeiro_par = 2;
    primeiro_impar = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    do{
        printf("%d\n", primeiro_par);

        primeiro_par += 2;
    } while (primeiro_par <= num);

    do{
        printf("%d\n", primeiro_impar);

        primeiro_impar += 2 ;
    } while (primeiro_impar <= num);

    return 0;
}