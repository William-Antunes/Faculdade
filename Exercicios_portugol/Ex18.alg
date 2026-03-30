algoritmo "numeros inteiros"

var

    num, soma_par, soma_impar : inteiro

inicio
    soma_par <- 0
    soma_impar <- 0
    
    repita
        escreva("Escreva um numero (repetir até q o numero seja maior que 1000): ")
        leia(num)
        se((num % 2 = 0) e (num <= 1000)) entao
            soma_par <- soma_par + num
        fimse    
        se((num % 2 <> 0) e (num <= 1000))entao
            soma_impar <- soma_impar + num
        fimse

    ate(num > 1000)

    escreva("A soma dos valores pares é ", soma_par, " e a dos numeros impares é ", soma_impar)


fimalgoritmo