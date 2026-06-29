#include <stdio.h>

typedef struct {
    char nome[50];
    char estilo[50];
    int num;
    int posicao;
}bandas;

void imprime_bandas(bandas banda[], int sz){ 
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < sz; j++){
            if(banda[j].posicao == i+1){
                printf("A banda %s, do estilo %s, tem %d integrantes e está na posição %d do ranking de favoritas\n", banda[j].nome, banda[j].estilo, banda[j].num, banda[j].posicao);
            }
        }
    }
}

int main(){
    bandas banda[5];
    for(int i = 0; i < 5; i++ ){
        printf("Digite o nome da banda %d: ", i+1);
        gets(banda[i].nome);
        printf("Digite o estilo musical da banda %d: ",i+1);
        gets(banda[i].estilo);
        printf("Digite o numero de integrantes da banda %d: ", i+1);
        scanf("%d", &banda[i].num);
        printf("Digite a posição no ranking de favoritas da banda %d: ", i+1);
        scanf("%d", &banda[i].posicao);
        getchar();
    }
    imprime_bandas(banda, 5);

}