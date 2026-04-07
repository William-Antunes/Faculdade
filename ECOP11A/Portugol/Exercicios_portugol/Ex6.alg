algoritmo "acrescimo"

var
   valor: real
   acrescimo : real
   valor_final : real

inicio

   escreval("Digite um valor: ")
   leia(valor)
   escreva("O acrescimo é de: ")
   leia(acrescimo)
   valor_final <- valor + (valor * acrescimo / 100)
   escreval("O valor final é", valor_final)

fimalgoritmo
