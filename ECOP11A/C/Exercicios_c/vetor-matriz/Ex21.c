#include <stdio.h>

int main(){
    char produto[50];
    float preco;

    printf("Digite o nome do produto: ");
    gets(produto);

    printf("Diga o valor do produto: ");
    scanf("%f", &preco);

    printf("O produto %s tem o valor %.2f, mas a vista o valor fica %.2f com um desconto de %.2f reais",produto, preco, preco * 0.9, preco * 0.1);
}