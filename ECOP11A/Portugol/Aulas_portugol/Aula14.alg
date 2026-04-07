algoritmo "Mês do ano"

var

    mes:inteiro
    bissexto:inteiro

inicio

    escreval("Entre um mês (1 pra janeiro e 12 pra fevereiro)")
    leia(mes)

    escolha(mes)
        caso 1,3,5,7,8,10,12
            escreval("Mês com 31 dias")
        caso 4,6,9,12
            escreval("Mês com 30 dias")
        caso 2
            escreva("Ano bissexto (s/n)?")
            leia(bissexto)
            se (bissexto = "s")entao
                escreval("Mês com 29 dias")
            senao
                escreval("Mês com 28 dias")
            fimse
        outrocaso
            escreval("Digite um valor valido")
    fimescolha 
fimalgoritmo