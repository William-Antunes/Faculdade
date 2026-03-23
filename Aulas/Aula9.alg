algoritmo "Qual é maior"

var

    num1, num2, num3 : real

inicio

    escreval("De o valor de 3 numeros")
    leia(num1, num2, num3)

    se(num1 > num2)entao
        se (num1 > num3)entao 
            escreval("O maior valor é: ", num3)
        fimse
    senao
        se(num2 > num3)entao
            escreval("O maior valor é: ", num2)
        senao
            escreval("O maior valor é: ", num3)
        fimse

    fimse


fimalgoritmo