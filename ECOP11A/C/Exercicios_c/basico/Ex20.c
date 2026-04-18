#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, soma_novo, soma_velho;

    soma_novo = 0;
    soma_velho = 0;

    do{
        printf("Digite a idade da pessoa(para quando a idade digitada for -99): ");
        scanf("%d", &idade);

        if(idade < 21)
            soma_novo += 1;
        else if(idade > 50)
            soma_velho += 1;
    } while (idade != -99);
        
        

    return 0;
}