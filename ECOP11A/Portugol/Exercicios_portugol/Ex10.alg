algoritmo "Tempo decorrido"

var
   segundos, minutos, horas : inteiro 

inicio

   escreval("Digite o tempo decorrido em segundos")
   leia(segundos)
   minutos <- segundos / 60
   horas <- minutos / 60 
   escreva("O tempo decorrido em minutos é ", minutos, " e em horas é ", horas)

fimalgoritmo