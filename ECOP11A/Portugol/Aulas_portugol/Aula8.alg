algoritmo "Saldo de gols"

var

    gols_tomados, gols_feitos, saldo: inteiro

inicio

    escreva("De o numeros de gols feitos: ")
    leia(gols_feitos)
    escreva("De o numero de gols tomados: ")
    leia(gols_tomados)
    saldo <- gols_feitos - gols_tomados

    se(saldo > 0) entao
        escreva("Seu time tem um bom ataque")
    senao 
        escreva("Seu time precisa fazer mais gols")
    fimse


fimalgoritmo