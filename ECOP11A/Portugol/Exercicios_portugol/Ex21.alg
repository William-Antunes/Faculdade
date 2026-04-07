algoritmo "media"

var

    num_alunos, contador, media, soma, nota: inteiro

inicio

    soma <- 0
    contador <- 0

    escreva("Qual o numero de alunos na sala: ")
    leia(num_alunos)
    
    repita
        escreval("Qual a nota do aluno ", contador + 1)
        leia(nota)

        soma <- soma + nota
        contador<- contador + 1

        
    ate(contador = num_alunos)
    
    media <- soma / num_alunos

    escreval("A media da sala é ", media)


fimalgoritmo