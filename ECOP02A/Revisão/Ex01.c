#include <stdio.h>

int main(int argc, char *argv[]){
    int categoria, frete, opcao = 1;
    float desconto = 0, descontoFrete, compra, total = 0, vFrete;

    printf("Diga qual a categoria de funcionario vc se encontra: ");
    scanf("%d", &categoria);

    printf("Diga qual a categoria de frete vc vai escolher: ");
    scanf("%d", &frete);

        printf("Digite qual o valor da compra que vc vai fazer: ");
        scanf("%f", &compra);
        if(categoria == 1 && compra >= 200){
            desconto+= compra * 0.05;
        }
        else if(categoria == 2){
            desconto+= compra * 0.1;

        }
        else if(categoria == 3){
            desconto+= compra * 0.2;
        }
        total+= compra;


    if(desconto <= 150 && frete == 1)
        vFrete = 15;
    else if(frete == 1)
        vFrete = 0;
    else if(desconto <= 150 && frete == 2)
        vFrete = 30;
    else if(frete == 2)
        vFrete = 15;
    

        printf("O valor do produto foi R$f, o desconto foi de R$%f, o valor após o desconto foi de R$%f, o valor do frete foi %f e o valor total a se pagar foi de %f",total, desconto, total-desconto, frete, total-desconto+frete);
    return 0;
}