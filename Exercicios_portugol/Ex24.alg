algoritmo "Salario anual"

var

    salario, aumento, ano : real

inicio

    ano <- 2005
    salario <- 2000
    aumento <- 0.015

    repita

    salario <- salario + (salario * aumento)
    aumento <- aumento * 2 

    ano <- ano + 1
    ate(ano = 2026)


    escreval("O salario final do funcionario é", salario:0:2, "reais")
fimalgoritmo