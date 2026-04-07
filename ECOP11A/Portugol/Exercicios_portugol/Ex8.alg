algoritmo "Numero de paes e broas"

var
 pao, broa: inteiro
 dinheiro, poupanca: real


inicio

escreval ("Digite o número de pães vendidos")
leia(pao)
escreval ("Digite o número de broas vendidas")
leia(broa)
dinheiro <- pao * 0.92 + broa * 3.5
poupanca <- dinheiro * 0.1
escreval("O valor total arrecadado é: ", dinheiro)
escreval("O valor que deve ser guardado na poupança é: ", poupanca)

fimalgoritmo