#include <stdio.h>
#include <string.h>

struct seriado{
    char nome[50];
    int temporadas;
    int canal[50];
    float nota;
};

void exibir_seriado(struct seriado s){
    printf("Nome: %s\n", s.nome);
    printf("Temporadas: %d\n", s.temporadas);
    printf("Canal: %s\n", s.canal);
    printf("Nota: %.1f\n", s.nota);
}


int main(){

    struct seriado smallville;
    strcpy(smallville.nome, "Smallville");
    strcpy(smallville.canal, "Amazon Prime");
    smallville.temporadas = 10;
    smallville.nota = 8.1;

    exibir_seriado(smallville);

    struct seriado breaking_bad = {"Breaking Bad", 5, "Netflix", 9.5};
    exibir_seriado(breaking_bad);
    
    return 0;

}