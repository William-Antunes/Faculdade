algoritmo "Triangulo isosceles, escaleno, equilatero"

var

lado1, lado2, lado3: inteiro

inicio

    escreval("Digite o lado 1 do triangulo: ")
    leia(lado1)
    escreval("Digite o lado 2 do triangulo: ")
    leia(lado2)
    escreval("Digite o lado 3 do triangulo: ")
    leia(lado3)
    
    se (lado1 = lado2) e (lado2 = lado3) entao
        escreval("O triangulo é equilatero")
    senao
        se (lado1 = lado2) ou (lado1 = lado3) ou (lado2 = lado3) entao
            escreval("O triangulo é isosceles")
        senao
            escreval("O triangulo é escaleno")
        fimse
    fimse


fimalgoritmo