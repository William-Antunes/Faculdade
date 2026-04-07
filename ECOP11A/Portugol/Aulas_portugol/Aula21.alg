algoritmo "Divisor de 3"

var

    soma, numero : inteiro

inicio
    numero <- 0
    soma <- 0

    repita
        se(numero % 3 = 0)entao
            soma <- soma + numero
        fimse

        numero <- numero + 1
    ate(numero = 100)

    escreva("A soma dos valores é ", soma)


fimalgoritmo