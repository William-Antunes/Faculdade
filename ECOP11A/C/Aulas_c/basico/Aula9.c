#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 0)
        printf("O número é maior do que 0");
    else if(num == 0) 
        printf("O número é nulo");
    else
        printf("O número é menor do que 0");

    if(num % 2 == 0 && num % 5 == 0)
        printf("O número é divisivel por 10");
    else if(num % 2 == 0)
        printf("O número é divisivel por 2");
    else if(num % 5 == 0 )
        printf("O número é divisivel por 5");


    return 0;
}