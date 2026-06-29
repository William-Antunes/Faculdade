#include <stdio.h>

typedef struct {
    char nome[50];
    char sexo;
    char cpf[20];
    float altura;
    float peso;
}info;

void informaIMC(info pessoa){
    if(pessoa.sexo == 'm' || pessoa.sexo == 'M')
        printf("Vocé um homem com o nome %s, o CPF %s e com o imc %f",pessoa.nome, pessoa.cpf, pessoa.peso / (pessoa.altura * pessoa.altura));

    else if(pessoa.sexo == 'f' || pessoa.sexo == 'F')
        printf("Vocé uma mulher com o nome %s, o CPF %s e com o imc %f",pessoa.nome, pessoa.cpf, pessoa.peso / (pessoa.altura * pessoa.altura));
    else
        printf("Digite um sexo que exista.");
    }


int main(){
    info pessoa;

    printf("Digite o nome de pessoa a ser calculado o imc: ");
    gets(pessoa.nome);
    printf("Digite o sexo da pessoa a ser calculado o imc(M: masculino, F: feminino): ");
    scanf("%c", &pessoa.sexo);
    getchar();
    printf("Digite o seu cpf: ");
    gets(pessoa.cpf);
    printf("Digite a sua altura: ");
    scanf("%f", &pessoa.altura);
    printf("Digite o seu peso: ");
    scanf("%f", &pessoa.peso);

    informaIMC(pessoa);

    return 0;
}