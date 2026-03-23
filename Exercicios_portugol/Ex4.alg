algoritmo "Poupança"

var
   valor: real
   rendimento: real
   valor_final: real

inicio

   rendimento <- 0.009
   escreval("Digite o valor: ")
   leia(valor)
   valor_final <- valor + (valor * rendimento)
   escreva("O valor final é: ", valor_final)

fimalgoritmo
