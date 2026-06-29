#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1, nota2;
}aluno;

void media(aluno alunos[], int sz){
    for(int i = 0; i < sz; i++){
        printf("A media do aluno %s da matricula %d, foi: %.2f\n", alunos[i].nome, alunos[i].matricula, (alunos[i].nota1 + alunos[i].nota2)/2);
    }
}

float media_turma(aluno alunos[], int sz){
    float soma = 0;
        for(int i = 0; i < sz; i++){
            soma += alunos[i].nota1 + alunos[i].nota2;
        }
    return soma/(sz*2);
}


int main(){
    int num;
    printf("Quantos alunos tem a turma: ");
    scanf("%d", &num);
    getchar();

    aluno al[num];
    for(int i = 0; i < num; i++){
        printf("Qual o nome do aluno %d: ", i+1);
        gets(al[i].nome);
        printf("Qual o número de matricula do aluno %d: ", i+1);
        scanf("%d", &al[i].matricula);
        printf("Qual a nota 1 do aluno %d: ", i+1);
        scanf("%f", &al[i].nota1);
        printf("Qual a nota 2 do aluno %d: ", i+1);
        scanf("%f", &al[i].nota2);
        getchar();
    }


    media(al, num);
    printf("A sala tem %d alunos e a media da turma foi %.2f", num, media_turma(al, num));

    return 0;

}
