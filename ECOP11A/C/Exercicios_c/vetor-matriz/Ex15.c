#include <stdio.h>
#include <string.h>

int main(){
    char nome1[10], nome2[10];

    printf("Digite um nome: ");
    gets(nome1);

    printf("Digite outro nome: ");
    gets(nome2);

    
    if(strcmp(nome1, nome2) < 0){
        printf("%s\n", nome1);
        printf("%s\n", nome2);
    } else {
        printf("%s\n", nome2);
        printf("%s\n", nome1);
    }

    return 0;
    

}