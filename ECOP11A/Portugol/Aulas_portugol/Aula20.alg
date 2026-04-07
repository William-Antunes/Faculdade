algoritmo "Numero harmonico"
var

    num, contador, soma : real

inicio
    soma <- 1
    contador <- 1
    escreval("Escreva um numero inteiro")
    leia(num)


    repita
        
        soma <- soma + (1 / (contador + 1))

        contador <- contador + 1

    ate(contador = num)

    escreva("A soma dos valores é ", soma )

fimalgoritmo