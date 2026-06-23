#include <stdio.h>
#include <string.h>

struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

void nome_atletas(struct atleta atletas[], int n) {
    int mais_velho = 0;
    int mais_alto = 0;
    for(int i = 1; i < n; i++){
        if(atletas[i].idade > atletas[mais_velho].idade){
            mais_velho = i;
        }
        if(atletas[i].altura > atletas[mais_alto].altura){
            mais_alto = i;
        }
    }

    printf("Nome do atleta mais velho: %s, de idade %d\n", atletas[mais_velho].nome, atletas[mais_velho].idade);
    printf("Nome do atleta mais alto: %s, de altura %.1f\n", atletas[mais_alto].nome, atletas[mais_alto].altura);
}

int main(){
    struct atleta atletas[3] = {
        {"William", "volei", 18, 1.9},
        {"Nicholas", "handebol", 18, 1.7},
        {"Joao", "futebol", 18, 2.1}
    };

    nome_atletas(atletas, 3);

    return 0;
}