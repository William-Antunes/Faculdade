algoritmo "Informações"

var
    idade, ano_de_nascimento: inteiro
    altura, peso, imc: real
    tipo_sanguineo: caractere


inicio

escreva("qual o seu ano de nascimento ")
leia(ano_de_nascimento)
idade <- 2026 - ano_de_nascimento

escreva("Qual o seu tipo sanguineo ")
leia(tipo_sanguineo)
escreva("Qual a sua altura em metros ")
leia(altura)
escreva("Qual o seu peso em kg ")
leia(peso)

imc <- peso / (altura * altura)

escreval("Você tem ", idade, " anos e tipo sanguineo ", tipo_sanguineo, " com o imc de ", imc)
fimalgoritmo