algoritmo "Triangulo"

var

    num, i, contador, j : inteiro

inicio

    escreva("Escolha um numero: ")
    leia(num)

    para i de 1 ate num faca
        contador <- 1

        para j de 1 ate i faca
            escreva(contador, " ")
            contador <- contador + 1
        fimpara

        escreval("")
        
    fimpara

fimalgoritmo