algoritmo "Numeros entre"

var

    a, b, c, num : inteiro

inicio

    escreval("Escreva 2 numeros inteiros")
    leia(a)
    leia(b)

    se(a > b)entao
        c <- a
        a <- b
        b <- c
    fimse

    num <- a

    enquanto( num <= b)faca
        escreva(num, " ")
        num <- num + 1
    fimenquanto

fimalgoritmo