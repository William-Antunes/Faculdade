algoritmo "Numeros inteiros"

var

    num1: real
    num2 : real
    opcao : inteiro
inicio

    escreval("Dê os valores de 2 numeros")
    leia(num1, num2)
    escreval("Qual das opções vc quer: ")
    escreval("1: Os valores somados ")
    escreval("2: Os valores subtraidos ")
    escreval("3: Os valores multiplicados ")
    escreval("4: Os valores dividos ")
    leia(opcao)
    
    
    se(opcao = 1)entao
        escreval("Os valores somados são ", num1 + num2)
    fimse
    se(opcao = 2)entao
    escreval("Os valores subtraidos são ", num1 - num2)
    fimse    
    se(opcao = 3)entao
    escreval("Os valores multiplicados são ", num1 * num2)
    fimse
    se(opcao = 4)entao
    escreval("Os valores dividos são ", num1 / num2)
    fimse 
    se(opcao < 1) ou (opcao > 4)entao
        escreval("Insira um valor valido")
    fimse

fimalgoritmo