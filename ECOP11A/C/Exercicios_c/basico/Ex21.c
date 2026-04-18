#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_alunos, contador; float soma, media, nota;

    soma = 0;
    contador = 0;
    printf("Quantos alunos tem na sala");
    scanf("%d", &num_alunos);

    do{
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        soma += nota;
    
        contador += 1;
    }
    while(contador <= num_alunos);
    
    media = soma / num_alunos;

    printf("A média da turma é: %f", media);

    return 0;
}