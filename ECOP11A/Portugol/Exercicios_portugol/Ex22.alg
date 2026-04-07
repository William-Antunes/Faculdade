algoritmo "maior numero"
var

    contador, numeros, maior : inteiro

inicio

    contador <- 0
    maior <- 0

    enquanto (contador <= 10 ) faca
        escreval("Escreva um numero")
        leia(numeros)

        se(numeros > maior)entao
            maior <- numeros 
        fimse

        contador <- contador + 1
    fimenquanto

    escreva("O maior dos valores é: ", maior)

fimalgoritmo