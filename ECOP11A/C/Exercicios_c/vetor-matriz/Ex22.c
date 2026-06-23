#include <stdio.h>
#include <string.h>

int main(){
    
    char frase[50];
    int esq = 0, dir, palindromo = 1;



    printf("Digite uma frase: ");
    gets(frase);
    dir = strlen(frase) - 1;

    while(esq < dir)
        if(frase[esq] != frase[dir]){
            printf("A frase nao e um palindromo");
            palindromo = 0;
            break;
        }
        else{
            esq++;
            dir--;
        }

    if(palindromo)
        printf("A frase e um palindromo");
        
}