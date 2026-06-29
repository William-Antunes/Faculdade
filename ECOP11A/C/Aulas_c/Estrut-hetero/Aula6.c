#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int preco;
    int quantidade;

}livro;

void disponiveis(livro livros[], int sz){
    for(int i = 0; i < sz; i++){
        if(livros[i].quantidade > 0)
            printf("O livro %s está disponivel\n",livros[i].titulo);
    }
}       

void titulo(livro livros[], int sz, char nome[]){
    for(int i = 0; i < sz; i++){
        if(strcmp(nome, livros[i].titulo) == 0){
            printf("O livro %s está disponivel\n",livros[i].titulo);
        }
    }
}

void  autor(livro livros[], int sz, char nome[]){
    for(int i = 0;i < sz; i++){
        if(strcmp(nome, livros[i].autor) == 0){
            printf("O autor %s tem o livro %s\n", livros[i].autor, livros[i].titulo);
        }
    }
}

float valortotal(livro livros[], int sz){
    float soma = 0;
    for(int i = 0;i < sz; i++){
        if(livros[i].quantidade > 0)
            soma += livros[i].quantidade * livros[i].preco;
    }
    return soma;
}

float valormedio(livro livros[], int sz){
    float total = valortotal(livros, sz);
    int quantia = 0;
    for(int i = 0; i < sz; i++){
        if(livros[i].quantidade > 0)
            quantia += livros[i].quantidade;
    }
    return 1.0*total / quantia;
}

int main(){
    livro livros[4];
    int opcao, sz = 4;
    char nome[50], escritor[50];

    for(int i = 0;i < 4; i++){
        printf("Digite o titulo do livro %d: ", i+1);
        gets(livros[i].titulo);
        printf("Digite o autor do livro %d: ", i+1);
        gets(livros[i].autor);
        printf("Digite o preço do livro %d: ", i+1);
        scanf("%d", &livros[i].preco);
        printf("Digite a quantidade do livro %d: ", i+1);
        scanf("%d", &livros[i].quantidade);
        getchar(); 
    }

    while(1){
        system("cls");
        printf("Digite o valor da opção que vc vai querer:\n");
        printf("1- Listar livros disponiveis\n");
        printf("2- Buscar por titulo\n");
        printf("3- Buscar por autor\n");
        printf("4- Exibir valor total dos livros em estoque\n");
        printf("5- Exibir valor medio dos livros em estoque\n");
        printf("6- Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                disponiveis(livros, sz);
                break;
            case 2:
                printf("Qual titulo vc quer: \n");
                getchar();
                gets(nome);
                titulo(livros, sz, nome);
                break;
            case 3:
                printf("Qual autor vc quer: \n");
                getchar();
                gets(escritor);
                autor(livros, sz, escritor);
                break;
            case 4:
                printf("Valor total dos livros em estoque: %.2f\n", valortotal(livros, sz));
                break;
            case 5:
                printf("Valor medio dos livros em estoque: %.2f\n", valormedio(livros, sz));
                break;
            case 6:
                return 0;
            default:
                printf("Digite um valor valido\n");
        }
    }
    return 0;
}