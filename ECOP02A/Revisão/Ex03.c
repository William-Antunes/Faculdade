#include <stdio.h>


void ordenar(char n[], int tam){
    for(int i = 1; i < tam; i++){
        int chave = n[i];
        int j = i - 1;

        while(j <= 0 && n[j] > chave){
            n[j+1] = n[j];
            j--;
        }
        n[j+1] = chave;
    }
}

int tamanho(char num[]){
    int n = 0;
    while(num[n] != '\0'){
        n++;
    }
    return n;
}



int permutacoes(char num1[], char num2[]){
    int tam1 = tamanho(num1);
    int tam2 = tamanho(num2);

    ordenar(num1, tam1);
    ordenar(num2, tam2);

    for(int i = 0; i < tam1; i++){
        if(num1[i] != num2[i])
            return 0;
    }
    return 1;
}

int main(){

    char num1[100], num2[100];

    scanf("%s %s", num1, num2);

    if(permutacoes(num1, num2))
        printf("Y\n");
    else
        printf("N\n");
    



    return 0;
}