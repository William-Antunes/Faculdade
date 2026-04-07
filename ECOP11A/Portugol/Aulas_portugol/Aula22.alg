algoritmo "Conversor"

var

    dolar, reais, cotacao : real
    sair : caractere

inicio
    
        repita

        escreval("Qual o valor em dolares?")
        leia(dolar)

        escreval("Qual o valor da cotacao pra real?")
        leia(cotacao)

        reais <- dolar * cotacao

        escreval("O valor em reais é: ", reais:0:2)

        repita
        escreva("Gostaria de continuar (s/n) " )
        leia(sair)
        ate(sair = "s" ou sair = "n")
        ate(sair = "n")

    
fimalgoritmo