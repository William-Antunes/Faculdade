#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco, preco_final; int condicao;

    printf("Qual o preço normal do produto: ");
    scanf("%f", preco);

    printf("Qual o metodo de pagamento escolhido: \n");
    printf("1:À vista em dinheiro ou cheque \n");
    printf("2:À vista no cartão de crédito \n");
    printf("3:Em duas vezes sem juros\n");
    printf("4:Em duas vezes com juros\n");
    scanf("%d", &condicao);

    if(condicao == 1){
        preco_final = preco * 0.9;
        printf("O valor total do produto vai ser de R$%d", preco_final);
    }else if(condicao == 2){
        preco_final = preco * 0.85;
        printf("O valor total do produto será de R$%d", preco_final);
    }else if(condicao == 3){
        preco_final = preco / 2;
        printf("O valor da prestação será de R$%d", preco_final);
    }else if (condicao == 4){
        preco_final = (preco * 1.1) / 2;
        printf("O valor da prestação será de R$%d", preco_final);
    }
    else if(condicao < 0 || condicao > 4)
        printf("Escolha um valor valido");
        
    return 0;
}