algoritmo "Idade"

var

    pessoas_novas, idade, pessoas_velhas : inteiro

inicio


    pessoas_novas <- 0
    pessoas_velhas <- 0

    repita
        escreva("Digite uma idade (para quando a idade for -99): ")
        leia(idade)

        se((idade < 21) e (idade <> -99))entao 
            pessoas_novas <- pessoas_novas + 1
        fimse
        se((idade > 21) e (idade <> -99))entao 
            pessoas_velhas <- pessoas_velhas + 1
        fimse
    ate(idade = -99)
         
         escreva("O numero de pessoas com menos de 21 anos é ", pessoas_novas, " e o numero de pessoas com mais de 21 anos é ", pessoas_velhas)

fimalgoritmo