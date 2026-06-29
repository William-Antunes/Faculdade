#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char codigo[50];
    float preco;
}info;

void printaProduto(info produto[], int sz){
    for(int i = 0; i < sz; i++)
        printf("Nome: %s\nCodigo: %s\n",produto[i].nome,produto[i].codigo);
    
}

void procuraPreco(info produto[], int sz){
    char code[50];
    while(1){
        printf("Digite o codigo do produto que deseja saber o preço: ");
        gets(code);
        for(int i = 0; i < sz; i++){
            if(strcmp(code, produto[i].codigo) == 0){
                printf("O produto tem preço %.2f\n",produto[i].preco);
                break;
            }
        }
    }
}

int main(){
    int num;
    printf("Quantos produtos vc vai cadastrar: ");
    scanf("%d", &num);
    getchar();

    info produtos[num];

    for(int i = 0; i < num; i++){
        printf("Digite o nome do produto: ");
        gets(produtos[i].nome);
        printf("Digite o codigo do produto: ");
        gets(produtos[i].codigo);

        printf("Digite o preço do produto: ");
        scanf("%f", &produtos[i].preco);
        getchar();
    }

    printaProduto(produtos, num);
    procuraPreco(produtos, num);

    return 0;
}