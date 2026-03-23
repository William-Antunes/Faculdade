algoritmo "Salario dos professores"


var

    hora_trabalhada1 : real
    valor1 :real 
    hora_trabalhada2 : real
    valor2 : real
    total1: real
    total2: real

inicio

    escreval("Diga o valor por hora e a quantidade de horas trabalhadas pelo primeiro professor")
    leia(valor1, hora_trabalhada1)
    total1 <- hora_trabalhada1 * valor1
    escreval("Diga o valor por hora e a quantidade de horas trabalhadas pelo segundo professor")
    leia(valor2, hora_trabalhada2)
    total2 <- hora_trabalhada2 * valor2
    se(total1 > total2)entao
        escreval("O primeiro professor tem um salario maior do que o segundo")
    senao
        se(total1 = total2)entao
            escreval("Ambos professores tem o mesmo salario")
        senao
            se(total1 < total2) entao
                escreval("O segundo professor tem um salario maior do que o primeiro")
            fimse
        fimse
    fimse
fimalgoritmo