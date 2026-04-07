algoritmo "Raias da pista"

var

    num_raias, raio, area, contador: real

inicio

    contador <- 0
    escreval("Escreva o numero de raias: ")
    leia(num_raias)
    escreval("Escreva o raio da primeira raia")
    leia(raio)

    area <- 2 * pi * raio

    enquanto( contador < num_raias) faca
        area <- 2 * pi * (raio + contador)
        escreval(area)
        contador <- contador + 1
    fimenquanto

fimalgoritmo