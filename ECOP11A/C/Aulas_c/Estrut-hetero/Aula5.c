#include <stdio.h>

typedef enum {RJ, MG, ES, SP} estado;

typedef struct {
    char nome[50];
    int populacao;
    int area;
    estado est;
}municipio;

int populacao(municipio mun[]){
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += mun[i].populacao;
    }
    return soma;
}

void populacao_porEstado(municipio mun[]){
    for(int i = 0; i < 4; i++){
        int soma = 0;
        for(int j = 0; j < 5; j++){
            if(mun[j].est == i){
                soma += mun[j].populacao;
            }
        }
        printf("População do estado %d: %d\n", i, soma);
    }
}

void densidade_demografica(municipio mun[]){
    for(int i = 0; i < 5; i++){
        printf("A densidade do municipio %s é: %d\n", mun[i].nome, mun[i].populacao/mun[i].area);
    }
}

int media_densidade(municipio mun[]){
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += mun[i].populacao/mun[i].area;
    }

    return soma/5;
}

void acima_media(municipio mun[]){
    int media = media_densidade(mun);

    for(int i = 0; i < 5; i++){
        if(mun[i].populacao/mun[i].area > media)
            printf("O municipio %s tem densidade demografica maior do q a media\n", mun[i].nome);
    }
}

int populoso(municipio mun[]){
    int mais = 0;

    for(int i = 0; i < 5; i++){
        if(mun[i].populacao > mais)
            mais = i;
        }
        return mais;
}

void state(municipio mun[]){
    for(int i = 0; i < 5; i++){
    switch(mun[i].est){
        case 0:
            printf("Seu estado é Rio de Janeiro\n");
            break;
        case 1:
            printf("Seu estado é Minas Gerais\n");
            break;
        case 2:
            printf("Seu estado é o espirito santo\n");
            break;
        case 3:
            printf("Seu estado é São Paulo\n");
            break;
    }}
}


int main(){
    municipio mun[5];
    for(int i = 0; i < 5; i++){
    printf("Digite as informações dos municipios (nome):");
    gets(mun[i].nome);
    printf("Digite a população do municipio:");
    scanf("%d", &mun[i].populacao);
    printf("Digite a área do municipio:");
    scanf("%d", &mun[i].area);
    printf("Digite o estado do municipio (0-RJ, 1-MG, 2-ES, 3-SP):");
    scanf("%d", &mun[i].est);
    getchar();
    }

    printf("A população total é: %d\n", populacao(mun));
    populacao_porEstado(mun);
    densidade_demografica(mun);
    printf("A media das densidade demograficas é: %d\n", media_densidade(mun));
    acima_media(mun);
    printf("O municipio mais populoso é o: %d\n", populoso(mun));
    state(mun);



    return 0;
}

