algoritmo "Fatorial"

var

    multipli, num, i: inteiro


inicio

    
    multipli <- 1

    escreval("Digite um numero")
    leia(num)

    i <- num

    repita
        
        multipli <- multipli * num
        num <- num - 1

    ate(num = 1)

    escreval("O fatorial do numero ", i, " é ", multipli)

fimalgoritmo