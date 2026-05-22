#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriculas[10]; // devem ser diferentes, caso contrário, o programa deve solicitar a matrícula novamente

    for(int i = 0; i < 10; i++){
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[i]);

        for(int j = 0; j < i; j++){
            if(matriculas[i] == matriculas[j]){
                printf("Matricula já existe, digite novamente: ");
                scanf("%d", &matriculas[i]);
                j = -1; // para reiniciar a verificação
            }
        }
    }
    printf("As matriculas dos alunos são: \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", matriculas[i]);
    }
    printf("\n");

    return 0;
}