algoritmo "Aprovado ou Reprovado"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : [Nome do Professor]
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : ${DATA_ATUAL}/${MES_ATUAL}/${ANO_ATUAL}
var

    p1, p2, media, sub : real

inicio

    escreva("De o valor das notas: ")
    leia(p1, p2)
    media <- (p1 + p2) / 2
    escreval("A media do aluno foi: ", media )

    se(media >= 6) entao
        escreva("Aprovado")
    senao
        escreva("Valor da sub: ")
        leia(sub)
        se (p1 > p2) entao
            p2 <- sub
        senao 
            p1 <- sub
        fimse
        media <- (p1 + p2) / 2

        se(media >= 6) entao
            escreva("Nova media: ", media)
            escreva("Aprovado com sub")
        senao 
            escreva("Nova media: ", media)                             
            escreva("Reprovado com sub")

        fimse
    fimse
fimalgoritmo