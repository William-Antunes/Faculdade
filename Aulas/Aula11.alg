algoritmo "Triangulo"

var

    angulo1, angulo2, angulo3 : inteiro

inicio

    escreval("Dê os valores do primeiro angulo:")
    leia(angulo1)
    escreval("Dê os valores do segundo angulo:")
    leia(angulo2)
    escreval("Dê os valores do terceiro angulo:")
    leia(angulo3)


    se(angulo1 + angulo2 + angulo3 = 180)entao
        se((angulo1 = angulo2) e (angulo1 = angulo3))entao
            escreval("É um triangulo equilatero")
        senao
            se((angulo1 <> angulo2) e (angulo1 <> angulo3) e (angulo2 <> angulo3))entao
                escreval("É um triangulo escaleno")
            senao
                escreval("É um triangulo isosceles")
            fimse
        fimse
    senao
        escreval("Os angulos informados nao formam um triangulo")
    fimse
fimalgoritmo