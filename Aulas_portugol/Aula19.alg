algoritmo "divisor"

var

 num, contador, divisor : inteiro

inicio

    escreval("Qual é o numero escolhido")
    leia(num)
    contador <- num 
    divisor <- 0
    repita
    
        se(num % contador = 0)entao
            divisor <- divisor + 1
        fimse

        contador <- contador - 1
    ate(contador < 1)
    escreval("O numero de divisores do numero ", num, " é ", divisor)
fimalgoritmo