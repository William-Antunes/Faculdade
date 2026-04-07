algoritmo "validade do produto"

var

    validade : inteiro

inicio

    escreval("Dê o codigo do produto pra determinar a sua classificação: ")
    leia(validade)
    se(validade >= 2) e (validade <= 4)entao
        escreval("Alimento perecívil")
    fimse
    se(validade >=5) e (validade <= 6)entao
        escreval("Vestúario")
    fimse
    se(validade >=8) e (validade <= 15)entao
        escreval("Higiene pessoal")
    fimse
    se(validade > 15) ou (validade < 1)entao
        escreval("Digite um codigo valido")
    fimse
fimalgoritmo