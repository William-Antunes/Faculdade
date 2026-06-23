#include <stdio.h>#
#include <string.h>

int profund(char *cod, int nivel){
    if(cod[nivel] == '\0'){
        return 1;
    }else {
        if(cod[nivel] == '.'){
            return 1 + profund(cod, nivel + 1);
        }else{
            return profund(cod, nivel + 1);
        }
    }
}




int main(){
    char codigo[20];

    printf("Digite o codigo do departamento pra ser calculada a sua profundidade: ");
    gets(codigo);


    printf("O departamento é: %d", profund(codigo, 0));

    return 0;
}