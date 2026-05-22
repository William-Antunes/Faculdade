#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriculas[10], opcao = 0;// devem ser diferentes, caso contrário, o programa deve solicitar a matrícula novamente

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
    do{
        printf("Lista de presença(0 para sair): ");
        scanf("%d", &opcao);
        for(int i = 0; i < 10; i++){
            if(matriculas[i] == opcao){
                printf("Aluno presente\n");
                break;
            }
            if(i == 9)
                printf("Aluno ausente\n");
            if(opcao == 0)
                break;
        }

    }while(opcao != 0);
    printf("\n");

    return 0;
}
