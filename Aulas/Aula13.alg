algoritmo "Calculadora"

var

    conta: inteiro
    a,b : real

inicio

    escreval("Escolha o tipo de operação a ser feita")
    escreval("1: Soma")
    escreval("2: Subtração")
    escreval("3: Multiplicação")
    escreval("4: Divisão")
    leia(conta)

    escolha(conta)
        caso 1
            escreval("Digite o primeiro valor: ")
            leia(a)
            escreval("Digite o segundo valor: ")
            leia(b)
            escreval("A soma dos valores é: ", a+b)
        caso 2
            escreval("Digite o primeiro valor: ")
            leia(a)
            escreval("Digite o segundo valor: ")
            leia(b)
            escreval("A soma dos valores é: ", a-b)
        caso 3
            escreval("Digite o primeiro valor: ")
            leia(a)
            escreval("Digite o segundo valor: ")
            leia(b)
            escreval("A soma dos valores é: ", a*b)
        caso 4
            escreval("Digite o primeiro valor: ")
            leia(a)
            escreval("Digite o segundo valor: ")
            leia(b)
            escreval("A soma dos valores é: ", a/b)
        outrocaso
            escreval("Digite um numero que eu pedi")
    fimescolha
fimalgoritmo