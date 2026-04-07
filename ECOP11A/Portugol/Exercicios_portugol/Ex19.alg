algoritmo "N primeiros pares, e impares"

var

    num, num_par, num_impar, contador :inteiro


inicio
    num_par <- 2
    num_impar <- 1
    contador <- 0

    escreva("Digite um numero: ")
    leia(num)

    repita
        escreva(num_par, " ")
        num_par <- num_par + 2
        contador <- contador + 1   
    ate(contador = num)

        contador <- 0


    repita
        escreva(num_impar, " ")
        num_impar <- num_impar + 2
        contador <- contador + 1
    ate(contador = num)

fimalgoritmo