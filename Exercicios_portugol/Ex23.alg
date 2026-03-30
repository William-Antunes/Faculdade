algoritmo ""
    
var
    
    velocidade_final, opcao, velocidade: real    
    
inicio
    
    opcao <- 0 

    enquanto (opcao <> 3) faca
        escreval("Qual o metodo de conversão você quer fazer")
        escreval("1: Km/h para m/s")
        escreval("2: m/s para Km/h")
        escreval("3: Finalizar conversão")
        leia(opcao)

        se(opcao = 1)entao 
            escreval("Qual a velocidade em Km/h?")
            leia(velocidade)

            velocidade_final <- velocidade / 3.6

            escreval("A velocidade final é: ", velocidade_final, "m/s")
        fimse

        se(opcao = 2)entao
            escreval("Qual a velocidade em m/s?")
            leia(velocidade)

            velocidade_final <- velocidade * 3.6

            escreval("A velocidade final é: ", velocidade_final, "km/h")
        fimse
    fimenquanto
    
fimalgoritmo