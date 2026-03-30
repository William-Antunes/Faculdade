algoritmo "Salario medio"

var

    salario, soma, media, contador : real

inicio

    contador <- 0
    soma <- 0
    salario <- 1

    enquanto(salario > 0)faca
        escreval("Escreva o salario do funcionario da empresa")
        leia(salario)

        se(salario > 0)entao
            soma <- soma + salario
            contador <- contador + 1
        fimse
        
    fimenquanto

    

    media <- soma / contador
    escreva("A media dos salarios da empresa é: ", media)
fimalgoritmo