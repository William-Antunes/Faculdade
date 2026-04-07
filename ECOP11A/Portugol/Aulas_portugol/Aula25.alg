algoritmo "Tabuada"

var

    num, inic, mais: inteiro

inicio

    escreva("Escreva um numero para ser calculada a tabuada: ")
    leia(num)

    para inic de 1 ate 10 faca

        mais <- num * inic
        escreval(num, " * ", inic, " = ", mais)

    fimpara

fimalgoritmo