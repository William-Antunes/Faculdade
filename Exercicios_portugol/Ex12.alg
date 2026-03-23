algoritmo "Peso ideal"


var

    sexo: caractere
    altura: real
    peso_ideal:real


inicio
    escreval("Digite a sua altura")
    leia(altura)
    escreval("Digite o seu sexo:")
    leia(sexo)
    se(sexo = "masculino") ou (sexo = "M") ou (sexo = "m") entao
        peso_ideal <- (72.7 * altura) - 58
    senao
        se(sexo = "feminino") ou (sexo = "F") ou (sexo = "f") entao
            peso_ideal <- (62.1 * altura) - 44.7
        senao
            escreval("Digite um sexo válido: masculino/feminino ou M/F")
        fimse
    fimse 

    se (peso_ideal > 0) entao
        escreval("Seu peso ideal é: ", peso_ideal)
    fimse
        

fimalgoritmo